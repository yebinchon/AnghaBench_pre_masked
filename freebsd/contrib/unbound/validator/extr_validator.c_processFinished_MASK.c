
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_22__ {scalar_t__ qtype; scalar_t__* qname; int qclass; } ;
struct val_qstate {scalar_t__ rrset_skip; int dlv_checked; int restart_count; TYPE_2__* orig_msg; TYPE_6__ qchase; void* state; TYPE_3__* chase_reply; } ;
struct val_env {scalar_t__ bogus_ttl; } ;
struct module_qstate {int query_flags; int * ext_state; TYPE_2__* return_msg; int return_rcode; TYPE_9__* env; int prefetch_leeway; int no_cache_store; TYPE_6__ qinfo; int * errinf; int * reply_origin; int region; int blacklist; } ;
typedef enum val_classification { ____Placeholder_val_classification } val_classification ;
struct TYPE_23__ {TYPE_16__* anchors; TYPE_1__* cfg; int neg_cache; } ;
struct TYPE_21__ {scalar_t__ security; scalar_t__ an_numrrsets; scalar_t__ ns_numrrsets; scalar_t__ rrset_count; scalar_t__ ttl; scalar_t__ serve_expired_ttl; int prefetch_ttl; } ;
struct TYPE_20__ {scalar_t__ security; } ;
struct TYPE_19__ {TYPE_4__* rep; int qinfo; } ;
struct TYPE_18__ {int val_log_level; scalar_t__ root_key_sentinel; scalar_t__ val_permissive_mode; scalar_t__ log_servfail; int val_log_squelch; scalar_t__ serve_expired_ttl; } ;
struct TYPE_17__ {scalar_t__ dlv_anchor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (TYPE_16__*,int *,int,int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,char**) ;
 int FUNC_3 (TYPE_9__*,int *,TYPE_4__*,int,int ,int ,int *,int) ;
 char* FUNC_4 (struct module_qstate*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*,TYPE_6__*) ;
 int FUNC_9 (struct val_qstate*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 scalar_t__ FUNC_10 (char*,int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,int *,int ) ;
 int FUNC_13 (TYPE_6__*,TYPE_4__*,scalar_t__*) ;
 int FUNC_14 (TYPE_9__*,TYPE_4__*) ;
 int FUNC_15 (int,TYPE_6__*,TYPE_6__*,TYPE_4__*,scalar_t__) ;
 int FUNC_16 (struct module_qstate*,struct val_qstate*,struct val_env*,int) ;
 int FUNC_17 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_18 (TYPE_4__*,scalar_t__) ;
 int FUNC_19 (int ,char*) ;

__attribute__((used)) static int
FUNC_20(struct module_qstate* VAR_21, struct val_qstate* VAR_22,
 struct val_env* VAR_23, int VAR_24)
{
 enum val_classification VAR_25 = FUNC_15(
  VAR_21->query_flags, &VAR_21->qinfo, &VAR_22->qchase,
  VAR_22->orig_msg->rep, VAR_22->rrset_skip);



 if((VAR_22->chase_reply->security == VAR_17 ||
  VAR_22->chase_reply->security == VAR_16) &&
  VAR_21->env->anchors->dlv_anchor && !VAR_22->dlv_checked) {
  VAR_22->dlv_checked = 1;
  if(!FUNC_16(VAR_21, VAR_22, VAR_23, VAR_24))
   return 0;
 }


 if(VAR_22->rrset_skip == 0)
  VAR_22->orig_msg->rep->security = VAR_22->chase_reply->security;
 else if(VAR_25 != VAR_8 ||
  VAR_22->rrset_skip < VAR_22->orig_msg->rep->an_numrrsets +
  VAR_22->orig_msg->rep->ns_numrrsets) {



  if(VAR_22->chase_reply->security < VAR_22->orig_msg->rep->security)
   VAR_22->orig_msg->rep->security =
    VAR_22->chase_reply->security;
 }

 if(VAR_25 == VAR_8) {

  VAR_22->rrset_skip = FUNC_18(VAR_22->orig_msg->rep,
   VAR_22->rrset_skip);
  if(VAR_22->rrset_skip < VAR_22->orig_msg->rep->rrset_count) {

   FUNC_19(VAR_11, "validator: go to next rrset");
   VAR_22->chase_reply->security = VAR_20;
   VAR_22->dlv_checked = 0;
   VAR_22->state = VAR_9;
   return 1;
  }

 }
 if(VAR_22->chase_reply->security != VAR_15 &&
  VAR_25 == VAR_7) {

  if(!FUNC_13(&VAR_22->qchase, VAR_22->orig_msg->rep,
   &VAR_22->rrset_skip)) {
   FUNC_19(VAR_11, "validator: failed to chase CNAME");
   VAR_22->orig_msg->rep->security = VAR_15;
  } else {

   FUNC_8(VAR_11, "validator: chased to",
    &VAR_22->qchase);
   VAR_22->chase_reply->security = VAR_20;
   VAR_22->dlv_checked = 0;
   VAR_22->state = VAR_9;
   return 1;
  }
 }

 if(VAR_22->orig_msg->rep->security == VAR_18) {





  FUNC_14(VAR_21->env, VAR_22->orig_msg->rep);
  if(VAR_22->orig_msg->rep->security == VAR_18) {
   FUNC_8(VAR_12, "validation success",
    &VAR_21->qinfo);
   if(!VAR_21->no_cache_store) {
    FUNC_17(VAR_21->env->neg_cache,
     VAR_22->orig_msg->rep);
   }
  }
 }



 if(VAR_22->orig_msg->rep->security == VAR_15) {

  if(VAR_22->restart_count < VAR_10) {
   int VAR_26 = VAR_22->restart_count+1;
   FUNC_19(VAR_11, "validation failed, "
    "blacklist and retry to fetch data");
   FUNC_12(&VAR_21->blacklist, VAR_21->region,
    VAR_21->reply_origin, 0);
   VAR_21->reply_origin = ((void*)0);
   VAR_21->errinf = ((void*)0);
   FUNC_9(VAR_22, 0, sizeof(*VAR_22));
   VAR_22->restart_count = VAR_26;
   VAR_22->state = VAR_9;
   FUNC_19(VAR_11, "pass back to next module");
   VAR_21->ext_state[VAR_24] = VAR_14;
   return 0;
  }

  VAR_22->orig_msg->rep->ttl = VAR_23->bogus_ttl;
  VAR_22->orig_msg->rep->prefetch_ttl =
   FUNC_0(VAR_22->orig_msg->rep->ttl);
  VAR_22->orig_msg->rep->serve_expired_ttl =
   VAR_22->orig_msg->rep->ttl + VAR_21->env->cfg->serve_expired_ttl;
  if((VAR_21->env->cfg->val_log_level >= 1 ||
   VAR_21->env->cfg->log_servfail) &&
   !VAR_21->env->cfg->val_log_squelch) {
   if(VAR_21->env->cfg->val_log_level < 2 &&
    !VAR_21->env->cfg->log_servfail)
    FUNC_8(0, "validation failure",
     &VAR_21->qinfo);
   else {
    char* VAR_27 = FUNC_4(VAR_21);
    if(VAR_27) FUNC_7("%s", VAR_27);
    FUNC_5(VAR_27);
   }
  }







  if(VAR_21->env->cfg->val_permissive_mode)
   VAR_22->orig_msg->rep->security = VAR_16;
 }

 if(VAR_22->orig_msg->rep->security == VAR_18 &&
  VAR_21->env->cfg->root_key_sentinel &&
  (VAR_21->qinfo.qtype == VAR_2 ||
  VAR_21->qinfo.qtype == VAR_3)) {
  char* VAR_28;
  uint16_t VAR_29;
  if(*VAR_21->qinfo.qname == FUNC_11(VAR_4) +
   VAR_5 &&
   FUNC_2(VAR_21->qinfo.qname, VAR_4,
   &VAR_28)) {
   if(FUNC_10(VAR_28, &VAR_29) &&
    !FUNC_1(VAR_21->env->anchors,
    (uint8_t*)"", 1, 0, VAR_22->qchase.qclass, VAR_29)) {
    VAR_22->orig_msg->rep->security =
     VAR_19;
   }
  } else if(*VAR_21->qinfo.qname == FUNC_11(VAR_6) +
   VAR_5 &&
   FUNC_2(VAR_21->qinfo.qname, VAR_6,
   &VAR_28)) {
   if(FUNC_10(VAR_28, &VAR_29) &&
    FUNC_1(VAR_21->env->anchors,
    (uint8_t*)"", 1, 0, VAR_22->qchase.qclass, VAR_29)) {
    VAR_22->orig_msg->rep->security =
     VAR_19;
   }
  }
 }

 if(VAR_21->query_flags&VAR_0) {


  if(!VAR_21->no_cache_store) {
   if(!FUNC_3(VAR_21->env, &VAR_22->orig_msg->qinfo,
    VAR_22->orig_msg->rep, 0, VAR_21->prefetch_leeway, 0, ((void*)0),
    VAR_21->query_flags)) {
    FUNC_6("out of memory caching validator results");
   }
  }
 } else {


  if(!FUNC_3(VAR_21->env, &VAR_22->orig_msg->qinfo,
   VAR_22->orig_msg->rep, 1, 0, 0, ((void*)0),
   VAR_21->query_flags)) {
   FUNC_6("out of memory caching validator results");
  }
 }
 VAR_21->return_rcode = VAR_1;
 VAR_21->return_msg = VAR_22->orig_msg;
 VAR_21->ext_state[VAR_24] = VAR_13;
 return 0;
}
