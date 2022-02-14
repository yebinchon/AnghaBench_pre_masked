
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ar_stat; int ar_verf; } ;
struct TYPE_6__ {int rp_stat; } ;
struct rpc_msg {TYPE_2__ acpted_rply; TYPE_1__ rm_reply; int rm_direction; } ;
struct TYPE_8__ {int xp_verf; } ;
typedef TYPE_3__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,struct rpc_msg*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(SVCXPRT *VAR_3)
{
 struct rpc_msg VAR_4;

 FUNC_1(VAR_3 != ((void*)0));

 VAR_4.rm_direction = VAR_2;
 VAR_4.rm_reply.rp_stat = VAR_0;
 VAR_4.acpted_rply.ar_verf = VAR_3->xp_verf;
 VAR_4.acpted_rply.ar_stat = VAR_1;
 FUNC_0(VAR_3, &VAR_4);
}
