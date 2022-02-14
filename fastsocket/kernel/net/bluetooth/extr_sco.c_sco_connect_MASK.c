
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_sndtimeo; scalar_t__ sk_state; } ;
struct sco_conn {int src; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ state; } ;
typedef int bdaddr_t ;
struct TYPE_2__ {int dst; int src; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int VAR_8 ;
 int FUNC_4 (struct hci_conn*) ;
 struct hci_conn* FUNC_5 (struct hci_dev*,int,int *,int ,int ) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*) ;
 struct hci_dev* FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (struct hci_dev*) ;
 int FUNC_11 (struct sco_conn*,struct sock*,int *) ;
 struct sco_conn* FUNC_12 (struct hci_conn*,int ) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_15(struct sock *VAR_9)
{
 bdaddr_t *VAR_10 = &FUNC_3(VAR_9)->src;
 bdaddr_t *VAR_11 = &FUNC_3(VAR_9)->dst;
 struct sco_conn *VAR_12;
 struct hci_conn *VAR_13;
 struct hci_dev *VAR_14;
 int VAR_15, VAR_16;

 FUNC_0("%s -> %s", FUNC_2(VAR_10), FUNC_2(VAR_11));

 if (!(VAR_14 = FUNC_9(VAR_11, VAR_10)))
  return -VAR_3;

 FUNC_6(VAR_14);

 VAR_15 = -VAR_4;

 if (FUNC_10(VAR_14) && !VAR_8)
  VAR_16 = VAR_5;
 else
  VAR_16 = VAR_7;

 VAR_13 = FUNC_5(VAR_14, VAR_16, VAR_11, VAR_2, VAR_6);
 if (!VAR_13)
  goto done;

 VAR_12 = FUNC_12(VAR_13, 0);
 if (!VAR_12) {
  FUNC_4(VAR_13);
  goto done;
 }


 FUNC_1(VAR_10, VAR_12->src);

 VAR_15 = FUNC_11(VAR_12, VAR_9, ((void*)0));
 if (VAR_15)
  goto done;

 if (VAR_13->state == VAR_1) {
  FUNC_13(VAR_9);
  VAR_9->sk_state = VAR_1;
 } else {
  VAR_9->sk_state = VAR_0;
  FUNC_14(VAR_9, VAR_9->sk_sndtimeo);
 }

done:
 FUNC_8(VAR_14);
 FUNC_7(VAR_14);
 return VAR_15;
}
