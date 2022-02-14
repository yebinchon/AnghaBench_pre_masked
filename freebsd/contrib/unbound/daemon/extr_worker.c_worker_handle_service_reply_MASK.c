
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mesh; } ;
struct worker {TYPE_3__ env; } ;
struct serviced_query {int dummy; } ;
struct outbound_entry {TYPE_2__* qstate; struct serviced_query* qsent; } ;
struct comm_reply {int dummy; } ;
struct comm_point {int buffer; } ;
struct TYPE_5__ {TYPE_1__* env; } ;
struct TYPE_4__ {struct worker* worker; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,struct outbound_entry*,struct comm_reply*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct worker*,struct serviced_query*) ;

int
FUNC_7(struct comm_point* VAR_4, void* VAR_5, int VAR_6,
 struct comm_reply* VAR_7)
{
 struct outbound_entry* VAR_8 = (struct outbound_entry*)VAR_5;
 struct worker* VAR_9 = VAR_8->qstate->env->worker;
 struct serviced_query *VAR_10 = VAR_8->qsent;

 FUNC_5(VAR_3, "worker svcd callback for qstate %p", VAR_8->qstate);
 if(VAR_6 != 0) {
  FUNC_3(VAR_9->env.mesh, VAR_8, VAR_7, VAR_6);
  FUNC_6(VAR_9, VAR_10);
  return 0;
 }

 if(!FUNC_2(FUNC_4(VAR_4->buffer))
  || FUNC_0(FUNC_4(VAR_4->buffer)) !=
   VAR_0
  || FUNC_1(FUNC_4(VAR_4->buffer)) > 1) {


  FUNC_5(VAR_3, "worker: bad reply handled as timeout");
  FUNC_3(VAR_9->env.mesh, VAR_8, VAR_7,
   VAR_2);
  FUNC_6(VAR_9, VAR_10);
  return 0;
 }
 FUNC_3(VAR_9->env.mesh, VAR_8, VAR_7, VAR_1);
 FUNC_6(VAR_9, VAR_10);
 return 0;
}
