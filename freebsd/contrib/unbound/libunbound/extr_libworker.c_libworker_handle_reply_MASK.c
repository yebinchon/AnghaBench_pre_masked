
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct outbound_entry {int * qsent; struct module_qstate* qstate; } ;
struct module_qstate {TYPE_1__* env; } ;
struct libworker {TYPE_2__* env; } ;
struct comm_reply {int dummy; } ;
struct comm_point {int buffer; } ;
struct TYPE_4__ {int mesh; } ;
struct TYPE_3__ {scalar_t__ worker; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,struct outbound_entry*,struct comm_reply*,int) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct comm_point* VAR_3, void* VAR_4, int VAR_5,
        struct comm_reply* VAR_6)
{
 struct module_qstate* VAR_7 = (struct module_qstate*)VAR_4;
 struct libworker* VAR_8 = (struct libworker*)VAR_7->env->worker;
 struct outbound_entry VAR_9;
 VAR_9.qstate = VAR_7;
 VAR_9.qsent = ((void*)0);

 if(VAR_5 != 0) {
  FUNC_3(VAR_8->env->mesh, &VAR_9, VAR_6, VAR_5);
  return 0;
 }

 if(!FUNC_2(FUNC_4(VAR_3->buffer))
  || FUNC_0(FUNC_4(VAR_3->buffer)) !=
   VAR_0
  || FUNC_1(FUNC_4(VAR_3->buffer)) > 1) {


  FUNC_3(VAR_8->env->mesh, &VAR_9, VAR_6,
   VAR_2);
  return 0;
 }
 FUNC_3(VAR_8->env->mesh, &VAR_9, VAR_6, VAR_1);
 return 0;
}
