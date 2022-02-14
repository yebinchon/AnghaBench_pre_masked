
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpcbind_args {scalar_t__ r_port; int r_status; struct rpc_xprt* r_xprt; } ;
struct rpc_xprt {TYPE_1__* ops; int bind_index; } ;
struct rpc_task {int tk_status; int tk_pid; } ;
struct TYPE_2__ {int (* set_port ) (struct rpc_xprt*,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int,scalar_t__) ;
 int FUNC_1 (struct rpc_xprt*,scalar_t__) ;
 int FUNC_2 (struct rpc_xprt*,scalar_t__) ;
 int FUNC_3 (struct rpc_xprt*,scalar_t__) ;
 int FUNC_4 (struct rpc_xprt*) ;

__attribute__((used)) static void FUNC_5(struct rpc_task *VAR_3, void *VAR_4)
{
 struct rpcbind_args *VAR_5 = VAR_4;
 struct rpc_xprt *VAR_6 = VAR_5->r_xprt;
 int VAR_7 = VAR_3->tk_status;


 if (VAR_7 == -VAR_1)
  VAR_7 = -VAR_2;


 if (VAR_7 == -VAR_2)
  VAR_6->bind_index++;

 if (VAR_7 < 0) {

  VAR_6->ops->set_port(VAR_6, 0);
 } else if (VAR_5->r_port == 0) {

  VAR_6->ops->set_port(VAR_6, 0);
  VAR_7 = -VAR_0;
 } else {

  VAR_6->ops->set_port(VAR_6, VAR_5->r_port);
  FUNC_4(VAR_6);
  VAR_7 = 0;
 }

 FUNC_0("RPC: %5u rpcb_getport_done(status %d, port %u)\n",
   VAR_3->tk_pid, VAR_7, VAR_5->r_port);

 VAR_5->r_status = VAR_7;
}
