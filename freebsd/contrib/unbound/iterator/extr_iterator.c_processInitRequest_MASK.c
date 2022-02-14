
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {scalar_t__ qclass; int qname; } ;
struct module_qstate {int no_cache_lookup; int no_cache_store; int was_ratelimited; int region; TYPE_7__* env; int query_flags; TYPE_4__ qinfo; int reply; scalar_t__ prefetch_leeway; scalar_t__ reply_origin; scalar_t__ blacklist; } ;
struct TYPE_14__ {size_t qname_len; scalar_t__ qclass; int qtype; int * qname; } ;
struct iter_qstate {scalar_t__ query_restart_count; scalar_t__ depth; int ratelimit_ok; struct delegpt* dp; TYPE_1__ qchase; int deleg_msg; scalar_t__ refetch_glue; int minimisation_state; struct dns_msg* response; scalar_t__ sent_count; } ;
struct iter_env {scalar_t__ max_dependency_depth; int queries_ratelimit_lock; int num_queries_ratelimited; } ;
struct dns_msg {TYPE_5__* rep; int qinfo; } ;
struct delegpt {size_t namelen; int * name; } ;
typedef enum response_type { ____Placeholder_response_type } response_type ;
struct TYPE_18__ {int hints; TYPE_2__* cfg; int rnd; scalar_t__* now; int infra_cache; int fwds; int scratch_buffer; int rrset_cache; scalar_t__ neg_cache; int scratch; } ;
struct TYPE_17__ {int flags; scalar_t__ prefetch_ttl; scalar_t__ ttl; int security; } ;
struct TYPE_15__ {scalar_t__ ratelimit_factor; scalar_t__ qname_minimisation; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (struct module_qstate*,struct iter_qstate*,int *,size_t) ;
 scalar_t__ FUNC_2 (TYPE_7__*,int *,size_t,scalar_t__,struct delegpt**) ;
 void* FUNC_3 (struct delegpt*,int ) ;
 int FUNC_4 (scalar_t__,struct delegpt*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int **,size_t*) ;
 struct delegpt* FUNC_7 (TYPE_7__*,int *,size_t,int ,scalar_t__,int ,int *,scalar_t__) ;
 struct dns_msg* FUNC_8 (TYPE_7__*,int *,size_t,int ,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_9 (struct module_qstate*,char*) ;
 int FUNC_10 (struct module_qstate*,char*,int *) ;
 int FUNC_11 (struct module_qstate*,int,scalar_t__) ;
 int FUNC_12 (struct iter_qstate*) ;
 scalar_t__ FUNC_13 (struct module_qstate*,struct iter_qstate*) ;
 scalar_t__ FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (struct module_qstate*,struct iter_qstate*,struct dns_msg*,int **,size_t*) ;
 void* FUNC_16 (int ,scalar_t__) ;
 scalar_t__ FUNC_17 (int ,int *,size_t,scalar_t__) ;
 int FUNC_18 (int ,int *,size_t,scalar_t__,TYPE_4__*,int ) ;
 scalar_t__ FUNC_19 (TYPE_4__*,int ,struct delegpt*) ;
 scalar_t__ FUNC_20 (TYPE_7__*,TYPE_1__*) ;
 scalar_t__ FUNC_21 (struct module_qstate*,TYPE_1__*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (char*,int *,TYPE_5__*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (scalar_t__,char*,int *,int ,int ) ;
 int FUNC_27 (int ,char*,TYPE_4__*) ;
 int FUNC_28 (struct iter_qstate*,int ) ;
 int FUNC_29 (struct module_qstate*,struct iter_qstate*,int,scalar_t__) ;
 int FUNC_30 (struct module_qstate*,struct iter_qstate*,int,int *,scalar_t__) ;
 scalar_t__ FUNC_31 (int ,int *) ;
 int FUNC_32 (struct dns_msg*,TYPE_1__*) ;
 int VAR_17 ;
 int FUNC_33 (scalar_t__*,int *,int ,int ) ;
 int FUNC_34 (int ,scalar_t__) ;
 struct dns_msg* FUNC_35 (scalar_t__,TYPE_1__*,int ,int ,int ,scalar_t__,int,int *,TYPE_2__*) ;
 int FUNC_36 (scalar_t__,char*,...) ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static int
FUNC_37(struct module_qstate* VAR_19, struct iter_qstate* VAR_20,
 struct iter_env* VAR_21, int VAR_22)
{
 uint8_t* VAR_23;
 size_t VAR_24;
 struct dns_msg* VAR_25 = ((void*)0);

 FUNC_27(VAR_15, "resolving", &VAR_19->qinfo);




 if(VAR_20->query_restart_count > VAR_11) {
  FUNC_36(VAR_16, "request has exceeded the maximum number"
   " of query restarts with %d", VAR_20->query_restart_count);
  FUNC_9(VAR_19, "request has exceeded the maximum number "
   "restarts (eg. indirections)");
  if(VAR_20->qchase.qname)
   FUNC_10(VAR_19, "stop at", VAR_20->qchase.qname);
  return FUNC_11(VAR_19, VAR_22, VAR_6);
 }





 FUNC_36(VAR_14, "request has dependency depth of %d", VAR_20->depth);
 if(VAR_20->depth > VAR_21->max_dependency_depth) {
  FUNC_36(VAR_16, "request has exceeded the maximum "
   "dependency depth with depth of %d", VAR_20->depth);
  FUNC_9(VAR_19, "request has exceeded the maximum dependency "
   "depth (eg. nameserver lookup recursion)");
  return FUNC_11(VAR_19, VAR_22, VAR_6);
 }


 if(VAR_19->qinfo.qclass == VAR_7) {
  VAR_20->qchase.qclass = 0;
  return FUNC_28(VAR_20, VAR_0);
 }






 if (VAR_20->refetch_glue &&
         VAR_20->dp &&
         !FUNC_2(VAR_19->env, VAR_20->dp->name,
              VAR_20->dp->namelen, VAR_20->qchase.qclass, ((void*)0))) {
     VAR_20->refetch_glue = 0;
 }






 if (FUNC_21(VAR_19, &VAR_20->qchase)) {

  FUNC_36(VAR_14, "no-cache set, going to the network");
  VAR_19->no_cache_lookup = 1;
  VAR_19->no_cache_store = 1;
  VAR_25 = ((void*)0);
 } else if(VAR_19->blacklist) {


  FUNC_36(VAR_14, "cache blacklisted, going to the network");
  VAR_25 = ((void*)0);
 } else if(!VAR_19->no_cache_lookup) {
  VAR_25 = FUNC_8(VAR_19->env, VAR_20->qchase.qname,
   VAR_20->qchase.qname_len, VAR_20->qchase.qtype,
   VAR_20->qchase.qclass, VAR_19->query_flags,
   VAR_19->region, VAR_19->env->scratch, 0);
  if(!VAR_25 && VAR_19->env->neg_cache &&
   FUNC_20(VAR_19->env, &VAR_20->qchase)) {


   VAR_25 = FUNC_35(VAR_19->env->neg_cache, &VAR_20->qchase,
    VAR_19->region, VAR_19->env->rrset_cache,
    VAR_19->env->scratch_buffer,
    *VAR_19->env->now, 1 , ((void*)0),
    VAR_19->env->cfg);
  }


  if(VAR_25 && FUNC_31(VAR_19->qinfo.qname,
   VAR_20->qchase.qname) != 0)
   VAR_25->rep->security = VAR_17;
 }
 if(VAR_25) {

  enum response_type VAR_26 = FUNC_32(VAR_25,
   &VAR_20->qchase);
  if(VAR_18 >= VAR_14) {
   FUNC_24("msg from cache lookup", &VAR_25->qinfo,
    VAR_25->rep);
   FUNC_36(VAR_14, "msg ttl is %d, prefetch ttl %d",
    (int)VAR_25->rep->ttl,
    (int)VAR_25->rep->prefetch_ttl);
  }

  if(VAR_26 == VAR_13) {
   uint8_t* VAR_27 = 0;
   size_t VAR_28 = 0;
   FUNC_36(VAR_14, "returning CNAME response from "
    "cache");
   if(!FUNC_15(VAR_19, VAR_20, VAR_25,
    &VAR_27, &VAR_28)) {
    FUNC_9(VAR_19, "failed to prepend CNAME "
     "components, malloc failure");
    return FUNC_11(VAR_19, VAR_22,
     VAR_6);
   }
   VAR_20->qchase.qname = VAR_27;
   VAR_20->qchase.qname_len = VAR_28;


   VAR_20->dp = ((void*)0);
   VAR_20->refetch_glue = 0;
   VAR_20->query_restart_count++;
   VAR_20->sent_count = 0;
   FUNC_33(&VAR_19->reply_origin, ((void*)0), 0, VAR_19->region);
   if(VAR_19->env->cfg->qname_minimisation)
    VAR_20->minimisation_state = VAR_2;
   return FUNC_28(VAR_20, VAR_4);
  }


  if(VAR_19->reply_origin)
   FUNC_33(&VAR_19->reply_origin, ((void*)0), 0, VAR_19->region);
  if(FUNC_0(VAR_25->rep->flags) == VAR_6)
   FUNC_9(VAR_19, "SERVFAIL in cache");

  FUNC_36(VAR_14, "returning answer from cache.");
  VAR_20->response = VAR_25;
  return FUNC_12(VAR_20);
 }


 if(FUNC_13(VAR_19, VAR_20))
 {
  if(!VAR_20->dp) {
   FUNC_25("alloc failure for forward dp");
   FUNC_9(VAR_19, "malloc failure for forward zone");
   return FUNC_11(VAR_19, VAR_22, VAR_6);
  }
  VAR_20->refetch_glue = 0;
  VAR_20->minimisation_state = VAR_1;



  return FUNC_28(VAR_20, VAR_12);
 }







 if(VAR_20->refetch_glue) {
  if(!VAR_20->dp) {
   FUNC_25("internal or malloc fail: no dp for refetch");
   FUNC_9(VAR_19, "malloc failure, for delegation info");
   return FUNC_11(VAR_19, VAR_22, VAR_6);
  }
  VAR_23 = VAR_20->dp->name;
  VAR_24 = VAR_20->dp->namelen;
 } else {
  VAR_23 = VAR_20->qchase.qname;
  VAR_24 = VAR_20->qchase.qname_len;
 }
 if(VAR_20->qchase.qtype == VAR_9 || VAR_20->refetch_glue ||
    (VAR_20->qchase.qtype == VAR_10 && VAR_19->prefetch_leeway
    && FUNC_2(VAR_19->env, VAR_23, VAR_24, VAR_20->qchase.qclass, ((void*)0)))) {





  if(FUNC_5(VAR_23) && (VAR_20->refetch_glue ||
   (VAR_20->qchase.qtype == VAR_10 &&
   VAR_19->prefetch_leeway)))
   VAR_23 = ((void*)0);
  else FUNC_6(&VAR_23, &VAR_24);
 }

 while(1) {



  if(VAR_23)
       VAR_20->dp = FUNC_7(VAR_19->env, VAR_23,
   VAR_24, VAR_20->qchase.qtype, VAR_20->qchase.qclass,
   VAR_19->region, &VAR_20->deleg_msg,
   *VAR_19->env->now+VAR_19->prefetch_leeway);
  else VAR_20->dp = ((void*)0);



  if(VAR_20->dp == ((void*)0)) {
   int VAR_29;

   if(!FUNC_1(VAR_19, VAR_20, VAR_23, VAR_24))
    return FUNC_11(VAR_19, VAR_22,
     VAR_6);
   if(VAR_20->dp)
    return FUNC_28(VAR_20, VAR_3);

   VAR_29 = FUNC_30(VAR_19, VAR_20, VAR_22, VAR_23,
    VAR_20->qchase.qclass);
   if(VAR_29 == 2)
    break;
   else if(VAR_29)
    return 0;
   if(FUNC_14(VAR_19->env->fwds,
    VAR_20->qchase.qclass)) {


    VAR_20->dp = FUNC_16(VAR_19->env->hints,
     VAR_20->qchase.qclass);
    if(!VAR_20->dp) {
     FUNC_25("internal error: no hints dp");
     FUNC_9(VAR_19, "no hints for this class");
     return FUNC_11(VAR_19, VAR_22,
      VAR_6);
    }
    VAR_20->dp = FUNC_3(VAR_20->dp, VAR_19->region);
    if(!VAR_20->dp) {
     FUNC_25("out of memory in safety belt");
     FUNC_9(VAR_19, "malloc failure, in safety belt");
     return FUNC_11(VAR_19, VAR_22,
      VAR_6);
    }
    return FUNC_28(VAR_20, VAR_3);
   }


   if(!FUNC_29(VAR_19, VAR_20, VAR_22, VAR_20->qchase.qclass))
    return FUNC_11(VAR_19, VAR_22,
     VAR_5);





   return 0;
  }
  if(!VAR_20->ratelimit_ok && VAR_19->prefetch_leeway)
   VAR_20->ratelimit_ok = 1;

  if(!VAR_20->ratelimit_ok && FUNC_17(
   VAR_19->env->infra_cache, VAR_20->dp->name,
   VAR_20->dp->namelen, *VAR_19->env->now)) {


   (void)FUNC_18(VAR_19->env->infra_cache,
    VAR_20->dp->name, VAR_20->dp->namelen,
    *VAR_19->env->now, &VAR_19->qinfo,
    VAR_19->reply);

   if(VAR_19->env->cfg->ratelimit_factor != 0 &&
    FUNC_34(VAR_19->env->rnd,
        VAR_19->env->cfg->ratelimit_factor) == 1) {
    VAR_20->ratelimit_ok = 1;
    FUNC_26(VAR_14, "ratelimit allowed through for "
     "delegation point", VAR_20->dp->name,
     VAR_10, VAR_8);
   } else {
    FUNC_22(&VAR_21->queries_ratelimit_lock);
    VAR_21->num_queries_ratelimited++;
    FUNC_23(&VAR_21->queries_ratelimit_lock);
    FUNC_26(VAR_14, "ratelimit exceeded with "
     "delegation point", VAR_20->dp->name,
     VAR_10, VAR_8);
    VAR_19->was_ratelimited = 1;
    FUNC_9(VAR_19, "query was ratelimited");
    FUNC_10(VAR_19, "for zone", VAR_20->dp->name);
    return FUNC_11(VAR_19, VAR_22, VAR_6);
   }
  }
  if(FUNC_19(&VAR_19->qinfo, VAR_19->query_flags,
   VAR_20->dp)) {
   struct delegpt* VAR_30 = ((void*)0);
   if(!FUNC_2(VAR_19->env, VAR_20->dp->name, VAR_20->dp->namelen, VAR_20->qchase.qclass, &VAR_30)) {
    if(VAR_30) {
     FUNC_36(VAR_16, "cache has stub "
      "or fwd but no addresses, "
      "fallback to config");
     VAR_20->dp = FUNC_3(VAR_30,
      VAR_19->region);
     if(!VAR_20->dp) {
      FUNC_25("out of memory in "
       "stub/fwd fallback");
      FUNC_9(VAR_19, "malloc failure, for fallback to config");
      return FUNC_11(VAR_19,
          VAR_22, VAR_6);
     }
     break;
    }
    FUNC_36(VAR_14, "useless dp "
     "but cannot go up, servfail");
    FUNC_4(VAR_14, VAR_20->dp);
    FUNC_9(VAR_19, "no useful nameservers, "
     "and cannot go up");
    FUNC_10(VAR_19, "for zone", VAR_20->dp->name);
    return FUNC_11(VAR_19, VAR_22,
     VAR_6);
   }
   if(FUNC_5(VAR_20->dp->name)) {

    FUNC_36(VAR_16, "Cache has root NS but "
    "no addresses. Fallback to the safety belt.");
    VAR_20->dp = FUNC_16(VAR_19->env->hints,
     VAR_20->qchase.qclass);


    if(!VAR_20->dp) {
     FUNC_25("internal error: no hints dp");
     return FUNC_11(VAR_19, VAR_22,
      VAR_5);
    }
    VAR_20->dp = FUNC_3(VAR_20->dp, VAR_19->region);
    if(!VAR_20->dp) {
     FUNC_25("out of memory in safety belt");
     FUNC_9(VAR_19, "malloc failure, in safety belt, for root");
     return FUNC_11(VAR_19, VAR_22,
      VAR_6);
    }
    break;
   } else {
    FUNC_36(VAR_14,
     "cache delegation was useless:");
    FUNC_4(VAR_14, VAR_20->dp);

    VAR_23 = VAR_20->dp->name;
    VAR_24 = VAR_20->dp->namelen;
    FUNC_6(&VAR_23, &VAR_24);
   }
  } else break;
 }

 FUNC_36(VAR_14, "cache delegation returns delegpt");
 FUNC_4(VAR_14, VAR_20->dp);



 return FUNC_28(VAR_20, VAR_3);
}
