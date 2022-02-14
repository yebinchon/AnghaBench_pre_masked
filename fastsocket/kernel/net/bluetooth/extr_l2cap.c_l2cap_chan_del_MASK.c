
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_err; int (* sk_state_change ) (struct sock*) ;int (* sk_data_ready ) (struct sock*,int ) ;int sk_state; } ;
struct l2cap_conn {int hcon; int chan_list; } ;
struct TYPE_4__ {struct sock* parent; } ;
struct TYPE_3__ {struct l2cap_conn* conn; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sock*,struct l2cap_conn*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct sock*) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct sock*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_2, int VAR_3)
{
 struct l2cap_conn *VAR_4 = FUNC_5(VAR_2)->conn;
 struct sock *VAR_5 = FUNC_2(VAR_2)->parent;

 FUNC_6(VAR_2);

 FUNC_0("sk %p, conn %p, err %d", VAR_2, VAR_4, VAR_3);

 if (VAR_4) {

  FUNC_4(&VAR_4->chan_list, VAR_2);
  FUNC_5(VAR_2)->conn = ((void*)0);
  FUNC_3(VAR_4->hcon);
 }

 VAR_2->sk_state = VAR_0;
 FUNC_7(VAR_2, VAR_1);

 if (VAR_3)
  VAR_2->sk_err = VAR_3;

 if (VAR_5) {
  FUNC_1(VAR_2);
  VAR_5->sk_data_ready(VAR_5, 0);
 } else
  VAR_2->sk_state_change(VAR_2);
}
