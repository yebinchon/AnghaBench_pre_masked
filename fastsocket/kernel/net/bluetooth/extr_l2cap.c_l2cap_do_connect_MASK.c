
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_type; scalar_t__ sk_state; int sk_sndtimeo; } ;
struct l2cap_conn {int src; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ state; } ;
typedef int bdaddr_t ;
typedef int __u8 ;
struct TYPE_4__ {int dst; int src; } ;
struct TYPE_3__ {scalar_t__ psm; int sec_level; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,int ,scalar_t__) ;

 int const VAR_3 ;

 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct hci_conn*) ;
 struct hci_conn* FUNC_6 (struct hci_dev*,int ,int *,int,int ) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_dev*) ;
 struct hci_dev* FUNC_10 (int *,int *) ;
 int FUNC_11 (struct l2cap_conn*,struct sock*,int *) ;
 struct l2cap_conn* FUNC_12 (struct hci_conn*,int ) ;
 int FUNC_13 (struct sock*) ;
 TYPE_1__* FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_17(struct sock *VAR_15)
{
 bdaddr_t *VAR_16 = &FUNC_3(VAR_15)->src;
 bdaddr_t *VAR_17 = &FUNC_3(VAR_15)->dst;
 struct l2cap_conn *VAR_18;
 struct hci_conn *VAR_19;
 struct hci_dev *VAR_20;
 __u8 VAR_21;
 int VAR_22;

 FUNC_0("%s -> %s psm 0x%2.2x", FUNC_2(VAR_16), FUNC_2(VAR_17),
       FUNC_14(VAR_15)->psm);

 VAR_20 = FUNC_10(VAR_17, VAR_16);
 if (!VAR_20)
  return -VAR_5;

 FUNC_7(VAR_20);

 VAR_22 = -VAR_6;

 if (VAR_15->sk_type == VAR_13) {
  switch (FUNC_14(VAR_15)->sec_level) {
  case 129:
   VAR_21 = VAR_8;
   break;
  case 128:
   VAR_21 = VAR_7;
   break;
  default:
   VAR_21 = VAR_11;
   break;
  }
 } else if (FUNC_14(VAR_15)->psm == FUNC_4(0x0001)) {
  if (FUNC_14(VAR_15)->sec_level == 129)
   VAR_21 = VAR_12;
  else
   VAR_21 = VAR_11;

  if (FUNC_14(VAR_15)->sec_level == VAR_3)
   FUNC_14(VAR_15)->sec_level = VAR_4;
 } else {
  switch (FUNC_14(VAR_15)->sec_level) {
  case 129:
   VAR_21 = VAR_10;
   break;
  case 128:
   VAR_21 = VAR_9;
   break;
  default:
   VAR_21 = VAR_11;
   break;
  }
 }

 VAR_19 = FUNC_6(VAR_20, VAR_0, VAR_17,
     FUNC_14(VAR_15)->sec_level, VAR_21);
 if (!VAR_19)
  goto done;

 VAR_18 = FUNC_12(VAR_19, 0);
 if (!VAR_18) {
  FUNC_5(VAR_19);
  goto done;
 }

 VAR_22 = 0;


 FUNC_1(VAR_16, VAR_18->src);

 FUNC_11(VAR_18, VAR_15, ((void*)0));

 VAR_15->sk_state = VAR_1;
 FUNC_16(VAR_15, VAR_15->sk_sndtimeo);

 if (VAR_19->state == VAR_2) {
  if (VAR_15->sk_type != VAR_14) {
   FUNC_15(VAR_15);
   VAR_15->sk_state = VAR_2;
  } else
   FUNC_13(VAR_15);
 }

done:
 FUNC_9(VAR_20);
 FUNC_8(VAR_20);
 return VAR_22;
}
