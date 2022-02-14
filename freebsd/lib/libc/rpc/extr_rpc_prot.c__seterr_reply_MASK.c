
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int high; int low; } ;
struct TYPE_14__ {TYPE_6__ ar_vers; int ar_stat; } ;
struct TYPE_10__ {int high; int low; } ;
struct TYPE_11__ {int rj_why; TYPE_3__ rj_vers; int rj_stat; } ;
struct TYPE_9__ {int rp_stat; } ;
struct rpc_msg {TYPE_7__ acpted_rply; TYPE_4__ rjcted_rply; TYPE_2__ rm_reply; } ;
struct TYPE_12__ {int high; int low; } ;
struct TYPE_8__ {int s1; } ;
struct rpc_err {int re_status; TYPE_5__ re_vers; int re_why; TYPE_1__ re_lb; } ;
typedef int int32_t ;
 int VAR_0 ;
 int FUNC_0 (int ,struct rpc_err*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct rpc_err*) ;

void
FUNC_3(struct rpc_msg *VAR_1, struct rpc_err *VAR_2)
{

 FUNC_1(VAR_1 != ((void*)0));
 FUNC_1(VAR_2 != ((void*)0));


 switch (VAR_1->rm_reply.rp_stat) {

 case 147:
  if (VAR_1->acpted_rply.ar_stat == VAR_0) {
   VAR_2->re_status = 133;
   return;
  }
  FUNC_0(VAR_1->acpted_rply.ar_stat, VAR_2);
  break;

 case 146:
  FUNC_2(VAR_1->rjcted_rply.rj_stat, VAR_2);
  break;

 default:
  VAR_2->re_status = 139;
  VAR_2->re_lb.s1 = (int32_t)(VAR_1->rm_reply.rp_stat);
  break;
 }
 switch (VAR_2->re_status) {

 case 128:
  VAR_2->re_vers.low = VAR_1->rjcted_rply.rj_vers.low;
  VAR_2->re_vers.high = VAR_1->rjcted_rply.rj_vers.high;
  break;

 case 145:
  VAR_2->re_why = VAR_1->rjcted_rply.rj_why;
  break;

 case 134:
  VAR_2->re_vers.low = VAR_1->acpted_rply.ar_vers.low;
  VAR_2->re_vers.high = VAR_1->acpted_rply.ar_vers.high;
  break;

 case 139:
 case 133:
 case 136:
 case 138:
 case 129:
 case 130:
 case 132:
 case 144:
 case 137:
 case 135:
 case 131:
 case 141:
 case 140:
 case 143:
 case 142:
 default:
  break;
 }
}
