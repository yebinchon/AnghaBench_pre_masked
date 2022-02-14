
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_27__ {int qname; } ;
struct module_qstate {TYPE_7__ qinfo; TYPE_6__* env; int no_cache_store; void** ext_state; int region; } ;
struct TYPE_24__ {int qclass; } ;
struct iter_qstate {int refetch_glue; int num_target_queries; scalar_t__ depth; scalar_t__* target_count; TYPE_5__* dp; TYPE_3__* response; TYPE_2__* deleg_msg; int pside_glue; scalar_t__ query_for_pside_glue; TYPE_4__ qchase; int minimisation_state; scalar_t__ sent_count; int query_restart_count; int chase_flags; TYPE_5__* store_parent_NS; } ;
struct iter_env {scalar_t__ max_dependency_depth; scalar_t__ supports_ipv4; scalar_t__ supports_ipv6; } ;
struct delegpt_ns {int done_pside6; int done_pside4; int name; int namelen; struct delegpt_ns* next; int lame; } ;
struct delegpt_addr {int tls_auth_name; int lame; int bogus; int addrlen; int addr; struct delegpt_addr* next_target; } ;
struct delegpt {struct delegpt_addr* target_list; struct delegpt_ns* nslist; } ;
struct TYPE_26__ {TYPE_1__* cfg; int hints; } ;
struct TYPE_25__ {int has_parent_side_NS; int name; struct delegpt_ns* nslist; scalar_t__ usable_list; int namelen; } ;
struct TYPE_23__ {int * rep; } ;
struct TYPE_22__ {int * rep; } ;
struct TYPE_21__ {scalar_t__ qname_minimisation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_6__*,int ,int ,TYPE_5__*) ;
 int FUNC_1 (TYPE_6__*,int ,int ,int ,int *) ;
 int FUNC_2 (TYPE_5__*,int ,int *,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_5__*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct module_qstate*,char*) ;
 int FUNC_8 (struct module_qstate*,char*,int ) ;
 int FUNC_9 (struct module_qstate*,int,int ) ;
 int FUNC_10 (struct module_qstate*,int,int ) ;
 int FUNC_11 (struct module_qstate*,struct iter_qstate*,int,int ,int ,int ,int ) ;
 struct delegpt* FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_6__*,TYPE_5__*,int ,TYPE_7__*) ;
 scalar_t__ FUNC_14 (TYPE_6__*,TYPE_5__*,int ,TYPE_7__*) ;
 int FUNC_15 (struct module_qstate*,TYPE_5__*) ;
 int FUNC_16 (TYPE_6__*,TYPE_7__*,int *) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,char*,int ,int ,int ) ;
 void* VAR_12 ;
 int FUNC_20 (struct iter_qstate*,int ) ;
 int FUNC_21 (struct module_qstate*,struct iter_qstate*,struct iter_env*,int,int,int*) ;
 int FUNC_22 (struct iter_qstate*,int) ;
 int FUNC_23 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_24(struct module_qstate* VAR_13, struct iter_qstate* VAR_14,
 struct iter_env* VAR_15, int VAR_16)
{
 struct delegpt_ns* VAR_17;
 int VAR_18 = 0;
 FUNC_23(VAR_10, "No more query targets, attempting last resort");
 FUNC_17(VAR_14->dp);

 if(!FUNC_1(VAR_13->env, VAR_14->dp->name, VAR_14->dp->namelen,
  VAR_14->qchase.qclass, ((void*)0))) {


  FUNC_7(VAR_13, "all the configured stub or forward servers failed,");
  FUNC_8(VAR_13, "at zone", VAR_14->dp->name);
  FUNC_23(VAR_11, "configured stub or forward servers failed -- returning SERVFAIL");
  return FUNC_10(VAR_13, VAR_16, VAR_4);
 }
 if(!VAR_14->dp->has_parent_side_NS && FUNC_5(VAR_14->dp->name)) {
  struct delegpt* VAR_19 = FUNC_12(VAR_13->env->hints,
   VAR_14->qchase.qclass);
  if(VAR_19) {
   struct delegpt_addr* VAR_20;
   VAR_14->chase_flags &= ~VAR_0;
   for(VAR_17 = VAR_19->nslist; VAR_17; VAR_17=VAR_17->next) {
    (void)FUNC_3(VAR_14->dp, VAR_13->region,
     VAR_17->name, VAR_17->lame);
   }
   for(VAR_20 = VAR_19->target_list; VAR_20; VAR_20=VAR_20->next_target) {
    (void)FUNC_2(VAR_14->dp, VAR_13->region,
     &VAR_20->addr, VAR_20->addrlen, VAR_20->bogus,
     VAR_20->lame, VAR_20->tls_auth_name);
   }
  }
  VAR_14->dp->has_parent_side_NS = 1;
 } else if(!VAR_14->dp->has_parent_side_NS) {
  if(!FUNC_13(VAR_13->env, VAR_14->dp,
   VAR_13->region, &VAR_13->qinfo)
   || !VAR_14->dp->has_parent_side_NS) {


   FUNC_23(VAR_10, "try to grab parent NS");
   VAR_14->store_parent_NS = VAR_14->dp;
   VAR_14->chase_flags &= ~VAR_0;
   VAR_14->deleg_msg = ((void*)0);
   VAR_14->refetch_glue = 1;
   VAR_14->query_restart_count++;
   VAR_14->sent_count = 0;
   if(VAR_13->env->cfg->qname_minimisation)
    VAR_14->minimisation_state = VAR_1;
   return FUNC_20(VAR_14, VAR_2);
  }
 }

 if(!FUNC_0(VAR_13->env, VAR_14->qchase.qclass,
  VAR_13->region, VAR_14->dp))
  FUNC_18("out of memory in cache_fill_missing");
 if(VAR_14->dp->usable_list) {
  FUNC_23(VAR_10, "try parent-side-name, w. glue from cache");
  return FUNC_20(VAR_14, VAR_9);
 }

 if(FUNC_14(VAR_13->env, VAR_14->dp,
  VAR_13->region, &VAR_13->qinfo)) {

  FUNC_23(VAR_10, "try parent-side glue from cache");
  return FUNC_20(VAR_14, VAR_9);
 }

 if(FUNC_4(VAR_14->dp) > 0) {
  int VAR_21 = 0;
  FUNC_23(VAR_10, "try parent-side target name");
  if(!FUNC_21(VAR_13, VAR_14, VAR_15, VAR_16, 1, &VAR_21)) {
   FUNC_7(VAR_13, "could not fetch nameserver");
   FUNC_8(VAR_13, "at zone", VAR_14->dp->name);
   return FUNC_9(VAR_13, VAR_16, VAR_4);
  }
  VAR_14->num_target_queries += VAR_21;
  FUNC_22(VAR_14, VAR_21);
  if(VAR_21 != 0) {
   VAR_13->ext_state[VAR_16] = VAR_12;
   return 0;
  }
 }
 if(VAR_14->depth == VAR_15->max_dependency_depth) {
  FUNC_23(VAR_11, "maxdepth and need more nameservers, fail");
  FUNC_7(VAR_13, "cannot fetch more nameservers because at max dependency depth");
  return FUNC_10(VAR_13, VAR_16, VAR_4);
 }
 if(VAR_14->depth > 0 && VAR_14->target_count &&
  VAR_14->target_count[1] > VAR_8) {
  char VAR_22[VAR_3+1];
  FUNC_6(VAR_13->qinfo.qname, VAR_22);
  FUNC_23(VAR_11, "request %s has exceeded the maximum "
   "number of glue fetches %d", VAR_22, VAR_14->target_count[1]);
  FUNC_7(VAR_13, "exceeded the maximum number of glue fetches");
  return FUNC_10(VAR_13, VAR_16, VAR_4);
 }

 FUNC_15(VAR_13, VAR_14->dp);


 for(VAR_17 = VAR_14->dp->nslist; VAR_17; VAR_17 = VAR_17->next) {


  if( ((VAR_15->supports_ipv6 && !VAR_17->done_pside6) ||
      (VAR_15->supports_ipv4 && !VAR_17->done_pside4)) &&
      !FUNC_1(VAR_13->env, VAR_17->name, VAR_17->namelen,
   VAR_14->qchase.qclass, ((void*)0))) {
   FUNC_19(VAR_10, "cannot pside lookup ns "
    "because it is also a stub/forward,",
    VAR_17->name, VAR_7, VAR_14->qchase.qclass);
   if(VAR_15->supports_ipv6) VAR_17->done_pside6 = 1;
   if(VAR_15->supports_ipv4) VAR_17->done_pside4 = 1;
   continue;
  }

  if(VAR_15->supports_ipv6 && !VAR_17->done_pside6) {

   if(!FUNC_11(VAR_13, VAR_14, VAR_16,
    VAR_17->name, VAR_17->namelen,
    VAR_6, VAR_14->qchase.qclass)) {
    FUNC_8(VAR_13, "could not generate nameserver AAAA lookup for", VAR_17->name);
    return FUNC_9(VAR_13, VAR_16,
     VAR_4);
   }
   VAR_17->done_pside6 = 1;
   VAR_18++;
  }
  if(VAR_15->supports_ipv4 && !VAR_17->done_pside4) {

   if(!FUNC_11(VAR_13, VAR_14, VAR_16,
    VAR_17->name, VAR_17->namelen,
    VAR_5, VAR_14->qchase.qclass)) {
    FUNC_8(VAR_13, "could not generate nameserver A lookup for", VAR_17->name);
    return FUNC_9(VAR_13, VAR_16,
     VAR_4);
   }
   VAR_17->done_pside4 = 1;
   VAR_18++;
  }
  if(VAR_18 != 0) {
   FUNC_23(VAR_10, "try parent-side glue lookup");
   VAR_14->num_target_queries += VAR_18;
   FUNC_22(VAR_14, VAR_18);
   VAR_13->ext_state[VAR_16] = VAR_12;
   return 0;
  }
 }



 if(!VAR_13->no_cache_store && VAR_14->query_for_pside_glue
  && !VAR_14->pside_glue)
   FUNC_16(VAR_13->env, &VAR_13->qinfo,
    VAR_14->deleg_msg?VAR_14->deleg_msg->rep:
    (VAR_14->response?VAR_14->response->rep:((void*)0)));

 FUNC_7(VAR_13, "all servers for this domain failed,");
 FUNC_8(VAR_13, "at zone", VAR_14->dp->name);
 FUNC_23(VAR_11, "out of query targets -- returning SERVFAIL");


 return FUNC_10(VAR_13, VAR_16, VAR_4);
}
