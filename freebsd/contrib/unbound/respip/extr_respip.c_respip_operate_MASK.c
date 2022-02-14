
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ub_packed_rrset_key {int dummy; } ;
struct respip_qstate {scalar_t__ state; } ;
struct respip_action_info {scalar_t__ member_0; scalar_t__ action; int * member_1; } ;
struct reply_info {int dummy; } ;
struct outbound_entry {int dummy; } ;
struct TYPE_5__ {scalar_t__ qtype; } ;
struct module_qstate {int* ext_state; int is_drop; TYPE_1__* return_msg; int return_rcode; int * respip_action_info; int region; int client_info; TYPE_2__ qinfo; struct respip_qstate** minfo; } ;
typedef enum module_ext_state { ____Placeholder_module_ext_state } module_ext_state ;
typedef enum module_ev { ____Placeholder_module_ev } module_ev ;
typedef int actinfo ;
struct TYPE_4__ {struct reply_info* rep; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct module_qstate*,struct ub_packed_rrset_key*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_3 (int ,struct respip_action_info*,int) ;
 struct respip_qstate* FUNC_4 (int ,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_5 (TYPE_2__*,int ,struct reply_info*,struct reply_info**,struct respip_action_info*,struct ub_packed_rrset_key**,int ,int ) ;
 int FUNC_6 (int ,char*) ;

void
FUNC_7(struct module_qstate* VAR_17, enum module_ev VAR_18, int VAR_19,
 struct outbound_entry* VAR_20)
{
 struct respip_qstate* VAR_21 = (struct respip_qstate*)VAR_17->minfo[VAR_19];

 FUNC_2(VAR_7, "respip operate: query", &VAR_17->qinfo);
 (void)VAR_20;

 if(VAR_18 == VAR_9 || VAR_18 == VAR_10) {
  if(!VAR_21) {
   VAR_21 = FUNC_4(VAR_17->region, sizeof(*VAR_21));
   if(!VAR_21)
    goto servfail;
   VAR_21->state = VAR_4;
   VAR_17->minfo[VAR_19] = VAR_21;
  }
  if(VAR_21->state == VAR_5) {
   VAR_17->ext_state[VAR_19] = VAR_11;
   return;
  }
  FUNC_6(VAR_6, "respip: pass to next module");
  VAR_17->ext_state[VAR_19] = VAR_12;
 } else if(VAR_18 == VAR_8) {




  enum module_ext_state VAR_22 = VAR_11;

  if((VAR_17->qinfo.qtype == VAR_1 ||
   VAR_17->qinfo.qtype == VAR_2 ||
   VAR_17->qinfo.qtype == VAR_3) &&
   VAR_17->return_msg && VAR_17->return_msg->rep) {
   struct respip_action_info VAR_23 = {VAR_16, ((void*)0)};
   struct reply_info* VAR_24 = VAR_17->return_msg->rep;
   struct ub_packed_rrset_key* VAR_25 = ((void*)0);

   if(!FUNC_5(&VAR_17->qinfo,
    VAR_17->client_info, VAR_17->return_msg->rep,
    &VAR_24, &VAR_23, &VAR_25, 0,
    VAR_17->region)) {
    goto servfail;
   }
   if(VAR_23.action != VAR_16) {


    if(!(VAR_17->respip_action_info =
     FUNC_3(VAR_17->region,
      &VAR_23, sizeof(VAR_23))))
    {
     FUNC_1("out of memory");
     goto servfail;
    }
   } else {
    VAR_17->respip_action_info = ((void*)0);
   }
   if (VAR_24 == VAR_17->return_msg->rep &&
    (VAR_23.action == VAR_14 ||
    VAR_23.action == VAR_15)) {




    VAR_17->is_drop = 1;
   } else if(VAR_25) {
    if(!FUNC_0(VAR_17, VAR_25))
     goto servfail;
    VAR_22 = VAR_13;
   }
   VAR_17->return_msg->rep = VAR_24;
  }
  VAR_17->ext_state[VAR_19] = VAR_22;
 } else
  VAR_17->ext_state[VAR_19] = VAR_11;

 return;

  servfail:
 VAR_17->return_rcode = VAR_0;
 VAR_17->return_msg = ((void*)0);
}
