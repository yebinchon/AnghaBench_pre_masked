
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rj_why; int rj_stat; } ;
struct TYPE_3__ {int rp_stat; } ;
struct rpc_msg {TYPE_2__ rjcted_rply; TYPE_1__ rm_reply; int rm_direction; } ;
typedef enum auth_stat { ____Placeholder_auth_stat } auth_stat ;
typedef int SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct rpc_msg*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(SVCXPRT *VAR_3, enum auth_stat VAR_4)
{
 struct rpc_msg VAR_5;

 FUNC_1(VAR_3 != ((void*)0));

 VAR_5.rm_direction = VAR_2;
 VAR_5.rm_reply.rp_stat = VAR_1;
 VAR_5.rjcted_rply.rj_stat = VAR_0;
 VAR_5.rjcted_rply.rj_why = VAR_4;
 FUNC_0(VAR_3, &VAR_5);
}
