
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_7__ {int proc; void* where; } ;
struct TYPE_9__ {TYPE_1__ ar_results; int ar_stat; int ar_verf; } ;
struct TYPE_8__ {int rp_stat; } ;
struct rpc_msg {TYPE_3__ acpted_rply; TYPE_2__ rm_reply; int rm_direction; } ;
typedef int bool_t ;
struct TYPE_10__ {int xp_verf; } ;
typedef TYPE_4__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,struct rpc_msg*) ;
 int FUNC_1 (int ) ;

bool_t
FUNC_2(SVCXPRT *VAR_3, xdrproc_t VAR_4,
    void * VAR_5)
{
 struct rpc_msg VAR_6;

 FUNC_1(VAR_3 != ((void*)0));

 VAR_6.rm_direction = VAR_1;
 VAR_6.rm_reply.rp_stat = VAR_0;
 VAR_6.acpted_rply.ar_verf = VAR_3->xp_verf;
 VAR_6.acpted_rply.ar_stat = VAR_2;
 VAR_6.acpted_rply.ar_results.where = VAR_5;
 VAR_6.acpted_rply.ar_results.proc = VAR_4;
 return (FUNC_0(VAR_3, &VAR_6));
}
