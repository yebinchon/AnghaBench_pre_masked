
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct outbound_entry {int dummy; } ;
struct TYPE_4__ {scalar_t__ qname; } ;
struct module_qstate {scalar_t__* minfo; TYPE_2__ qinfo; int * ext_state; TYPE_1__* env; } ;
struct iter_qstate {TYPE_2__ qchase; } ;
struct iter_env {int dummy; } ;
typedef enum module_ev { ____Placeholder_module_ev } module_ev ;
struct TYPE_3__ {scalar_t__* modinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct module_qstate*,char*) ;
 int FUNC_1 (struct module_qstate*,int,int ) ;
 int FUNC_2 (struct module_qstate*,struct iter_qstate*,struct iter_env*,int) ;
 int FUNC_3 (struct module_qstate*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct module_qstate*,struct iter_qstate*,struct iter_env*,int) ;
 int FUNC_7 (struct module_qstate*,struct iter_qstate*,struct iter_env*,int,struct outbound_entry*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,char*,...) ;

void
FUNC_11(struct module_qstate* VAR_6, enum module_ev VAR_7, int VAR_8,
 struct outbound_entry* VAR_9)
{
 struct iter_env* VAR_10 = (struct iter_env*)VAR_6->env->modinfo[VAR_8];
 struct iter_qstate* VAR_11 = (struct iter_qstate*)VAR_6->minfo[VAR_8];
 FUNC_10(VAR_2, "iterator[module %d] operate: extstate:%s event:%s",
  VAR_8, FUNC_8(VAR_6->ext_state[VAR_8]), FUNC_9(VAR_7));
 if(VAR_11) FUNC_5(VAR_2, "iterator operate: query",
  &VAR_6->qinfo);
 if(VAR_11 && VAR_6->qinfo.qname != VAR_11->qchase.qname)
  FUNC_5(VAR_2, "iterator operate: chased to",
   &VAR_11->qchase);


 if((VAR_7 == VAR_4 || VAR_7 == VAR_5) &&
  VAR_11 == ((void*)0)) {
  if(!FUNC_3(VAR_6, VAR_8)) {
   FUNC_0(VAR_6, "malloc failure, new iterator module allocation");
   (void)FUNC_1(VAR_6, VAR_8, VAR_0);
   return;
  }
  VAR_11 = (struct iter_qstate*)VAR_6->minfo[VAR_8];
  FUNC_6(VAR_6, VAR_11, VAR_10, VAR_8);
  return;
 }
 if(VAR_11 && VAR_7 == VAR_5) {
  FUNC_2(VAR_6, VAR_11, VAR_10, VAR_8);
  return;
 }
 if(VAR_11 && VAR_9) {
  FUNC_7(VAR_6, VAR_11, VAR_10, VAR_8, VAR_9, VAR_7);
  return;
 }
 if(VAR_7 == VAR_3) {
  FUNC_10(VAR_1, "got called with event error, giving up");
  FUNC_0(VAR_6, "iterator module got the error event");
  (void)FUNC_1(VAR_6, VAR_8, VAR_0);
  return;
 }

 FUNC_4("bad event for iterator");
 FUNC_0(VAR_6, "iterator module received wrong event");
 (void)FUNC_1(VAR_6, VAR_8, VAR_0);
}
