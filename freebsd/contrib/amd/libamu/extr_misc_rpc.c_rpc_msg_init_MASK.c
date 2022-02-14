
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int voidp ;
typedef void* u_long ;
struct TYPE_2__ {void* cb_proc; void* cb_vers; void* cb_prog; int cb_rpcvers; } ;
struct rpc_msg {TYPE_1__ rm_call; int rm_direction; scalar_t__ rm_xid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(struct rpc_msg *VAR_2, u_long VAR_3, u_long VAR_4, u_long VAR_5)
{



  FUNC_0((voidp) VAR_2, 0, sizeof(*VAR_2));
  VAR_2->rm_xid = 0;
  VAR_2->rm_direction = VAR_0;
  VAR_2->rm_call.cb_rpcvers = VAR_1;
  VAR_2->rm_call.cb_prog = VAR_3;
  VAR_2->rm_call.cb_vers = VAR_4;
  VAR_2->rm_call.cb_proc = VAR_5;
}
