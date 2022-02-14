
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int node; int ref; } ;
struct tipc_sock {TYPE_1__* p; TYPE_2__ peer_name; } ;
struct tipc_msg {int dummy; } ;
struct socket {int state; int sk; } ;
struct TYPE_3__ {int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tipc_msg*) ;
 int FUNC_1 (struct tipc_msg*) ;
 int FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 struct tipc_sock* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_3, struct tipc_msg *VAR_4)
{
 struct tipc_sock *VAR_5 = FUNC_6(VAR_3->sk);

 if (FUNC_0(VAR_4)) {
  VAR_3->state = VAR_2;
  return -VAR_0;
 }

 VAR_5->peer_name.ref = FUNC_3(VAR_4);
 VAR_5->peer_name.node = FUNC_2(VAR_4);
 FUNC_4(VAR_5->p->ref, &VAR_5->peer_name);
 FUNC_5(VAR_5->p->ref, FUNC_1(VAR_4));
 VAR_3->state = VAR_1;
 return 0;
}
