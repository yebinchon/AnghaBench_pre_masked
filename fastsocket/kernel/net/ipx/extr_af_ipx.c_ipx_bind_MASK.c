
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_ipx {int sipx_port; int sipx_node; int sipx_network; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct ipx_sock {int port; int node; } ;
struct ipx_interface {int if_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sock*,char*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (struct ipx_interface*) ;
 struct ipx_interface* VAR_9 ;
 struct ipx_sock* FUNC_3 (struct sock*) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct ipx_interface*,int ,int) ;
 scalar_t__ FUNC_5 (struct ipx_interface*,int) ;
 struct ipx_interface* FUNC_6 (int ) ;
 int FUNC_7 (struct ipx_interface*,struct sock*) ;
 int FUNC_8 (struct ipx_interface*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_14(struct socket *VAR_11, struct sockaddr *VAR_12, int VAR_13)
{
 struct sock *VAR_14 = VAR_11->sk;
 struct ipx_sock *VAR_15 = FUNC_3(VAR_14);
 struct ipx_interface *VAR_16;
 struct sockaddr_ipx *VAR_17 = (struct sockaddr_ipx *)VAR_12;
 int VAR_18 = -VAR_4;

 if (!FUNC_12(VAR_14, VAR_7) || VAR_13 != sizeof(struct sockaddr_ipx))
  goto out;

 VAR_16 = FUNC_6(VAR_17->sipx_network);
 VAR_18 = -VAR_3;
 if (!VAR_16)
  goto out;

 if (!VAR_17->sipx_port) {
  VAR_17->sipx_port = FUNC_2(VAR_16);
  VAR_18 = -VAR_4;
  if (!VAR_17->sipx_port)
   goto out_put;
 }


 VAR_18 = -VAR_1;
 if (FUNC_11(VAR_17->sipx_port) < VAR_5 &&
     !FUNC_1(VAR_0))
  goto out_put;

 VAR_15->port = VAR_17->sipx_port;
 VAR_18 = -VAR_2;
 if (FUNC_5(VAR_16, VAR_17->sipx_port)) {
  FUNC_0(VAR_14, "IPX: bind failed because port %X in use.\n",
    FUNC_11((int)VAR_17->sipx_port));
  goto out_put;
 }



 FUNC_7(VAR_16, VAR_14);
 FUNC_13(VAR_14, VAR_7);

 VAR_18 = 0;
out_put:
 FUNC_8(VAR_16);
out:
 return VAR_18;
}
