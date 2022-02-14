
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct outbound_entry {TYPE_2__* qstate; } ;
struct libworker {TYPE_3__* env; } ;
struct comm_reply {int dummy; } ;
struct comm_point {int buffer; } ;
struct TYPE_6__ {int mesh; } ;
struct TYPE_5__ {TYPE_1__* env; } ;
struct TYPE_4__ {scalar_t__ worker; } ;


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
 struct outbound_entry* VAR_7 = (struct outbound_entry*)VAR_4;
 struct libworker* VAR_8 = (struct libworker*)VAR_7->qstate->env->worker;

 if(VAR_5 != 0) {
  FUNC_3(VAR_8->env->mesh, VAR_7, VAR_6, VAR_5);
  return 0;
 }

 if(!FUNC_2(FUNC_4(VAR_3->buffer))
  || FUNC_0(FUNC_4(VAR_3->buffer)) !=
   VAR_0
  || FUNC_1(FUNC_4(VAR_3->buffer)) > 1) {


  FUNC_3(VAR_8->env->mesh, VAR_7, VAR_6,
   VAR_2);
  return 0;
 }
 FUNC_3(VAR_8->env->mesh, VAR_7, VAR_6, VAR_1);
 return 0;
}
