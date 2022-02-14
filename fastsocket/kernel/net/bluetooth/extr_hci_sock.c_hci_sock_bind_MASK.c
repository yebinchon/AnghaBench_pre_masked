
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_hci {scalar_t__ hci_family; scalar_t__ hci_dev; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; } ;
struct hci_dev {int promisc; } ;
struct TYPE_2__ {struct hci_dev* hdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 struct hci_dev* FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_6, struct sockaddr *VAR_7, int VAR_8)
{
 struct sockaddr_hci *VAR_9 = (struct sockaddr_hci *) VAR_7;
 struct sock *VAR_10 = VAR_6->sk;
 struct hci_dev *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 FUNC_0("sock %p sk %p", VAR_6, VAR_10);

 if (!VAR_9 || VAR_9->hci_family != VAR_0)
  return -VAR_3;

 FUNC_4(VAR_10);

 if (FUNC_3(VAR_10)->hdev) {
  VAR_12 = -VAR_2;
  goto done;
 }

 if (VAR_9->hci_dev != VAR_5) {
  if (!(VAR_11 = FUNC_2(VAR_9->hci_dev))) {
   VAR_12 = -VAR_4;
   goto done;
  }

  FUNC_1(&VAR_11->promisc);
 }

 FUNC_3(VAR_10)->hdev = VAR_11;
 VAR_10->sk_state = VAR_1;

done:
 FUNC_5(VAR_10);
 return VAR_12;
}
