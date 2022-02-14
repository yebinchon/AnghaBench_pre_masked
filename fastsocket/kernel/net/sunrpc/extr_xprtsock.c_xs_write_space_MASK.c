
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int flags; } ;
struct sock {struct socket* sk_socket; } ;
struct rpc_xprt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int) ;
 struct rpc_xprt* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct rpc_xprt*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2)
{
 struct socket *VAR_3;
 struct rpc_xprt *VAR_4;

 if (FUNC_2(!(VAR_3 = VAR_2->sk_socket)))
  return;
 FUNC_0(VAR_1, &VAR_3->flags);

 if (FUNC_2(!(VAR_4 = FUNC_3(VAR_2))))
  return;
 if (FUNC_1(VAR_0, &VAR_3->flags) == 0)
  return;

 FUNC_4(VAR_4);
}
