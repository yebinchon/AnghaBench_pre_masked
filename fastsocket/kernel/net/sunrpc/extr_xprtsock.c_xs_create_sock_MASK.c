
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sock_xprt {int dummy; } ;
struct rpc_xprt {int xprt_net; } ;


 struct socket* FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,int,struct socket**,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (struct sock_xprt*,struct socket*) ;
 int FUNC_5 (int,struct socket*) ;

__attribute__((used)) static struct socket *FUNC_6(struct rpc_xprt *VAR_0,
  struct sock_xprt *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct socket *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0->xprt_net, VAR_2, VAR_3, VAR_4, &VAR_5, 1);
 if (VAR_6 < 0) {
  FUNC_2("RPC:       can't create %d transport socket (%d).\n",
    VAR_4, -VAR_6);
  goto out;
 }
 FUNC_5(VAR_2, VAR_5);

 VAR_6 = FUNC_4(VAR_1, VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_5);
  goto out;
 }

 return VAR_5;
out:
 return FUNC_0(VAR_6);
}
