
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {struct sock* head; } ;
struct l2cap_conn {int info_state; int info_timer; TYPE_1__ chan_list; int rx_skb; } ;
struct hci_conn {struct l2cap_conn* l2cap_data; } ;


 int FUNC_0 (char*,struct hci_conn*,struct l2cap_conn*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct l2cap_conn*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sock*,int) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct hci_conn *VAR_1, int VAR_2)
{
 struct l2cap_conn *VAR_3 = VAR_1->l2cap_data;
 struct sock *VAR_4;

 if (!VAR_3)
  return;

 FUNC_0("hcon %p conn %p, err %d", VAR_1, VAR_3, VAR_2);

 FUNC_5(VAR_3->rx_skb);


 while ((VAR_4 = VAR_3->chan_list.head)) {
  FUNC_1(VAR_4);
  FUNC_6(VAR_4, VAR_2);
  FUNC_2(VAR_4);
  FUNC_7(VAR_4);
 }

 if (VAR_3->info_state & VAR_0)
  FUNC_3(&VAR_3->info_timer);

 VAR_1->l2cap_data = ((void*)0);
 FUNC_4(VAR_3);
}
