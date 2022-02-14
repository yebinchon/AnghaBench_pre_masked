
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ qname; scalar_t__ qclass; } ;
struct val_qstate {int orig_msg; TYPE_4__ qchase; } ;
struct val_env {int dummy; } ;
struct outbound_entry {int dummy; } ;
struct module_qstate {void** ext_state; TYPE_3__* return_msg; TYPE_4__ qinfo; int return_rcode; scalar_t__* minfo; TYPE_1__* env; } ;
typedef enum module_ev { ____Placeholder_module_ev } module_ev ;
struct TYPE_8__ {TYPE_2__* rep; } ;
struct TYPE_7__ {int security; } ;
struct TYPE_6__ {scalar_t__* modinfo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,char*,TYPE_4__*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_3 (struct module_qstate*,int ,TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct module_qstate*,struct val_qstate*,struct val_env*,int) ;
 struct val_qstate* FUNC_7 (struct module_qstate*,int) ;
 int FUNC_8 (struct module_qstate*,struct val_qstate*) ;
 int FUNC_9 (int ,char*,...) ;

void
FUNC_10(struct module_qstate* VAR_11, enum module_ev VAR_12, int VAR_13,
        struct outbound_entry* VAR_14)
{
 struct val_env* VAR_15 = (struct val_env*)VAR_11->env->modinfo[VAR_13];
 struct val_qstate* VAR_16 = (struct val_qstate*)VAR_11->minfo[VAR_13];
 FUNC_9(VAR_2, "validator[module %d] operate: extstate:%s "
  "event:%s", VAR_13, FUNC_4(VAR_11->ext_state[VAR_13]),
  FUNC_5(VAR_12));
 FUNC_2(VAR_2, "validator operate: query",
  &VAR_11->qinfo);
 if(VAR_16 && VAR_11->qinfo.qname != VAR_16->qchase.qname)
  FUNC_2(VAR_2, "validator operate: chased to",
  &VAR_16->qchase);
 (void)VAR_14;
 if(VAR_12 == VAR_5 ||
  (VAR_12 == VAR_6 && VAR_16 == ((void*)0))) {


  FUNC_9(VAR_1, "validator: pass to next module");
  VAR_11->ext_state[VAR_13] = VAR_8;
  return;
 }
 if(VAR_12 == VAR_4) {

  FUNC_9(VAR_1, "validator: nextmodule returned");

  if(!FUNC_3(VAR_11, VAR_11->return_rcode,
   VAR_11->return_msg)) {

   if(VAR_11->return_msg)
    VAR_11->return_msg->rep->security =
     VAR_10;
   VAR_11->ext_state[VAR_13] = VAR_7;
   return;
  }
  if(FUNC_0(VAR_11->return_msg)) {
   VAR_11->ext_state[VAR_13] = VAR_7;
   return;
  }


  if(VAR_11->qinfo.qclass == VAR_0) {
   FUNC_9(VAR_1, "cannot validate classANY: bogus");
   if(VAR_11->return_msg)
    VAR_11->return_msg->rep->security =
     VAR_9;
   VAR_11->ext_state[VAR_13] = VAR_7;
   return;
  }

  VAR_11->ext_state[VAR_13] = VAR_3;
  if(!VAR_16) {
   VAR_16 = FUNC_7(VAR_11, VAR_13);
   if(!VAR_16) {
    FUNC_1("validator: malloc failure");
    VAR_11->ext_state[VAR_13] = VAR_3;
    return;
   }
  } else if(!VAR_16->orig_msg) {
   if(!FUNC_8(VAR_11, VAR_16)) {
    FUNC_1("validator: malloc failure");
    VAR_11->ext_state[VAR_13] = VAR_3;
    return;
   }
  }
  FUNC_6(VAR_11, VAR_16, VAR_15, VAR_13);
  return;
 }
 if(VAR_12 == VAR_6) {
  VAR_11->ext_state[VAR_13] = VAR_3;

  FUNC_6(VAR_11, VAR_16, VAR_15, VAR_13);
  return;
 }
 FUNC_1("validator: bad event %s", FUNC_5(VAR_12));
 VAR_11->ext_state[VAR_13] = VAR_3;
 return;
}
