
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_hci {int hci_dev; int hci_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct hci_dev {int id; } ;
struct TYPE_2__ {struct hci_dev* hdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_2, struct sockaddr *VAR_3, int *VAR_4, int VAR_5)
{
 struct sockaddr_hci *VAR_6 = (struct sockaddr_hci *) VAR_3;
 struct sock *VAR_7 = VAR_2->sk;
 struct hci_dev *VAR_8 = FUNC_1(VAR_7)->hdev;

 FUNC_0("sock %p sk %p", VAR_2, VAR_7);

 if (!VAR_8)
  return -VAR_1;

 FUNC_2(VAR_7);

 *VAR_4 = sizeof(*VAR_6);
 VAR_6->hci_family = VAR_0;
 VAR_6->hci_dev = VAR_8->id;

 FUNC_3(VAR_7);
 return 0;
}
