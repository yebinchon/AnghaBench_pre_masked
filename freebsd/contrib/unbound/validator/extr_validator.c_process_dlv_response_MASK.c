
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int dname; int rrset_class; int type; } ;
struct TYPE_20__ {TYPE_1__ rk; } ;
typedef TYPE_7__ uint8_t ;
struct val_qstate {void* dlv_status; int dlv_lookup_name; int dlv_lookup_name_len; struct ub_packed_rrset_key* ds_rrset; } ;
struct val_env {int neg_cache; } ;
struct TYPE_16__ {TYPE_7__* data; struct ub_packed_rrset_key* key; } ;
struct TYPE_15__ {int dname_len; TYPE_7__* dname; } ;
struct ub_packed_rrset_key {TYPE_3__ entry; TYPE_2__ rk; } ;
struct query_info {scalar_t__ qclass; } ;
struct module_qstate {TYPE_6__* env; int region; } ;
struct dns_msg {TYPE_8__* rep; } ;
struct TYPE_21__ {scalar_t__ security; int an_numrrsets; TYPE_7__** rrsets; int flags; } ;
struct TYPE_19__ {TYPE_5__* anchors; scalar_t__* modinfo; } ;
struct TYPE_18__ {TYPE_4__* dlv_anchor; } ;
struct TYPE_17__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 TYPE_7__* FUNC_7 (int ,TYPE_7__*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,TYPE_8__*) ;
 int FUNC_10 (struct query_info*,TYPE_8__*,int *,int *) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_12(struct module_qstate* VAR_8, struct val_qstate* VAR_9,
 int VAR_10, int VAR_11, struct dns_msg* VAR_12, struct query_info* VAR_13)
{
 struct val_env* VAR_14 = (struct val_env*)VAR_8->env->modinfo[VAR_10];

 FUNC_11(VAR_2, "process dlv response to super");
 if(VAR_11 != VAR_0) {

  VAR_9->dlv_status = VAR_4;
  FUNC_11(VAR_2, "response is error");
  return;
 }
 if(VAR_12->rep->security != VAR_7) {
  VAR_9->dlv_status = VAR_4;
  FUNC_11(VAR_2, "response is not secure, %s",
   FUNC_8(VAR_12->rep->security));
  return;
 }

 if(FUNC_0(VAR_12->rep->flags) == VAR_0 &&
  VAR_12->rep->an_numrrsets == 1 &&
  VAR_12->rep->security == VAR_7 &&
  FUNC_3(VAR_12->rep->rrsets[0]->rk.type) == VAR_1 &&
  FUNC_3(VAR_12->rep->rrsets[0]->rk.rrset_class) == VAR_13->qclass &&
  FUNC_6(VAR_12->rep->rrsets[0]->rk.dname,
   VAR_9->dlv_lookup_name) == 0) {

  VAR_9->ds_rrset = (struct ub_packed_rrset_key*)
   FUNC_7(VAR_8->region,
   VAR_12->rep->rrsets[0], sizeof(*VAR_9->ds_rrset));
  if(!VAR_9->ds_rrset) {
   FUNC_2("out of memory in process_dlv");
   return;
  }
  VAR_9->ds_rrset->entry.key = VAR_9->ds_rrset;
  VAR_9->ds_rrset->rk.dname = (uint8_t*)FUNC_7(
   VAR_8->region, VAR_9->ds_rrset->rk.dname,
   VAR_9->ds_rrset->rk.dname_len);
  if(!VAR_9->ds_rrset->rk.dname) {
   FUNC_2("out of memory in process_dlv");
   VAR_9->dlv_status = VAR_4;
   return;
  }
  VAR_9->ds_rrset->entry.data = FUNC_7(VAR_8->region,
   VAR_9->ds_rrset->entry.data,
   FUNC_5(VAR_9->ds_rrset->entry.data));
  if(!VAR_9->ds_rrset->entry.data) {
   FUNC_2("out of memory in process_dlv");
   VAR_9->dlv_status = VAR_4;
   return;
  }
  FUNC_4(VAR_9->ds_rrset->entry.data);

  VAR_9->dlv_status = VAR_5;
  return;
 }

 FUNC_9(VAR_14->neg_cache, VAR_12->rep);






 if(!FUNC_10(VAR_13, VAR_12->rep, &VAR_9->dlv_lookup_name,
  &VAR_9->dlv_lookup_name_len)) {
  VAR_9->dlv_status = VAR_4;
  FUNC_11(VAR_2, "nsec error");
  return;
 }
 if(!FUNC_1(VAR_9->dlv_lookup_name,
  VAR_8->env->anchors->dlv_anchor->name)) {
  VAR_9->dlv_status = VAR_6;
  return;
 }
 VAR_9->dlv_status = VAR_3;
}
