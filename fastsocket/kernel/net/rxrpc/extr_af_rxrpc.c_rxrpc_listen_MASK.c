
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_max_ack_backlog; } ;
struct TYPE_3__ {int sk_state; } ;
struct rxrpc_sock {TYPE_1__ sk; int * local; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;

 int FUNC_1 (char*,struct rxrpc_sock*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 struct rxrpc_sock* FUNC_5 (struct sock*) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_3, int VAR_4)
{
 struct sock *VAR_5 = VAR_3->sk;
 struct rxrpc_sock *VAR_6 = FUNC_5(VAR_5);
 int VAR_7;

 FUNC_1("%p,%d", VAR_6, VAR_4);

 FUNC_3(&VAR_6->sk);

 switch (VAR_6->sk.sk_state) {
 case 128:
  VAR_7 = -VAR_0;
  break;
 case 131:
 case 130:
 default:
  VAR_7 = -VAR_1;
  break;
 case 129:
  FUNC_0(VAR_6->local != ((void*)0));
  VAR_5->sk_max_ack_backlog = VAR_4;
  VAR_6->sk.sk_state = VAR_2;
  VAR_7 = 0;
  break;
 }

 FUNC_4(&VAR_6->sk);
 FUNC_2(" = %d", VAR_7);
 return VAR_7;
}
