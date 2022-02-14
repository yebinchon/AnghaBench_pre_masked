
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_write_queue; int sk_receive_queue; } ;
struct hci_dev {int promisc; } ;
struct TYPE_2__ {struct hci_dev* hdev; } ;


 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct sock*) ;
 int FUNC_3 (struct hci_dev*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sk;
 struct hci_dev *VAR_3;

 FUNC_0("sock %p sk %p", VAR_1, VAR_2);

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_4(VAR_2)->hdev;

 FUNC_2(&VAR_0, VAR_2);

 if (VAR_3) {
  FUNC_1(&VAR_3->promisc);
  FUNC_3(VAR_3);
 }

 FUNC_6(VAR_2);

 FUNC_5(&VAR_2->sk_receive_queue);
 FUNC_5(&VAR_2->sk_write_queue);

 FUNC_7(VAR_2);
 return 0;
}
