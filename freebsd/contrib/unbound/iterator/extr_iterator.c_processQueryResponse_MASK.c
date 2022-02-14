
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_60__ TYPE_9__ ;
typedef struct TYPE_59__ TYPE_8__ ;
typedef struct TYPE_58__ TYPE_7__ ;
typedef struct TYPE_57__ TYPE_6__ ;
typedef struct TYPE_56__ TYPE_5__ ;
typedef struct TYPE_55__ TYPE_4__ ;
typedef struct TYPE_54__ TYPE_3__ ;
typedef struct TYPE_53__ TYPE_39__ ;
typedef struct TYPE_52__ TYPE_31__ ;
typedef struct TYPE_51__ TYPE_2__ ;
typedef struct TYPE_50__ TYPE_25__ ;
typedef struct TYPE_49__ TYPE_1__ ;
typedef struct TYPE_48__ TYPE_16__ ;
typedef struct TYPE_47__ TYPE_13__ ;


typedef int uint8_t ;
struct TYPE_49__ {int * dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct TYPE_56__ {scalar_t__ qtype; int qclass; } ;
struct module_qstate {int query_flags; TYPE_5__ qinfo; TYPE_16__* env; TYPE_3__* reply; int * region; int reply_origin; int prefetch_leeway; int no_cache_store; } ;
struct TYPE_52__ {size_t qname_len; int qtype; int * qname; int qclass; } ;
struct TYPE_59__ {int qname; } ;
struct iter_qstate {scalar_t__ minimisation_state; int chase_flags; scalar_t__ sent_count; int auth_zone_avoid; TYPE_9__* dp; scalar_t__ auth_zone_response; TYPE_31__ qchase; scalar_t__ num_target_queries; scalar_t__ num_current_queries; int outlist; int query_restart_count; int * dsns_point; TYPE_7__* deleg_msg; TYPE_7__* response; scalar_t__ dnssec_expected; int referral_count; TYPE_25__* store_parent_NS; scalar_t__ pside_glue; scalar_t__ query_for_pside_glue; int ratelimit_ok; TYPE_8__ qinfo_out; scalar_t__ dnssec_lame_query; scalar_t__ chase_to_rd; int minimise_timeout_count; } ;
struct delegpt_addr {int dnsseclame; } ;
typedef enum response_type { ____Placeholder_response_type } response_type ;
struct TYPE_60__ {scalar_t__ auth_dp; int * name; int namelen; scalar_t__ has_parent_side_NS; } ;
struct TYPE_47__ {int qclass; int qtype; int qname_len; int qname; } ;
struct TYPE_58__ {TYPE_6__* rep; TYPE_13__ qinfo; } ;
struct TYPE_57__ {int an_numrrsets; int ns_numrrsets; int flags; TYPE_39__** rrsets; } ;
struct TYPE_55__ {scalar_t__ qname_minimisation_strict; scalar_t__ qname_minimisation; scalar_t__ harden_referral_path; scalar_t__ prefetch_key; scalar_t__ harden_below_nxdomain; int disable_dnssec_lame_check; } ;
struct TYPE_54__ {int addrlen; int addr; } ;
struct TYPE_51__ {int * dname; int type; } ;
struct TYPE_53__ {TYPE_2__ rk; } ;
struct TYPE_50__ {int name; } ;
struct TYPE_48__ {int auth_zones; TYPE_4__* cfg; int * now; int infra_cache; int (* detach_subs ) (struct module_qstate*) ;scalar_t__ neg_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (TYPE_16__*,int ,int *,TYPE_9__*) ;
 struct delegpt_addr* FUNC_3 (TYPE_9__*,int *,int ) ;
 TYPE_9__* FUNC_4 (TYPE_7__*,int *) ;
 int FUNC_5 (scalar_t__,TYPE_9__*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (struct module_qstate*,char*) ;
 int FUNC_9 (struct module_qstate*,char*,int *) ;
 int FUNC_10 (struct module_qstate*,int,int ) ;
 int FUNC_11 (struct iter_qstate*) ;
 struct ub_packed_rrset_key* FUNC_12 (TYPE_6__*,int,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int (*) (struct module_qstate*)) ;
 int FUNC_15 (struct module_qstate*,struct iter_qstate*,int) ;
 int FUNC_16 (struct module_qstate*,struct iter_qstate*,int) ;
 int FUNC_17 (int ,int ,int ,int ,struct module_qstate*,int,struct iter_qstate*,int ,int ,struct module_qstate**,int) ;
 int FUNC_18 (TYPE_39__*,int **,size_t*) ;
 int FUNC_19 (struct module_qstate*,struct iter_qstate*,TYPE_7__*,int **,size_t*) ;
 int FUNC_20 (int ,int *,int ,int ) ;
 int FUNC_21 (int ,int *,int ,int *,int ,int ,int,int,int ) ;
 int FUNC_22 (TYPE_16__*,struct module_qstate*,TYPE_7__*) ;
 int FUNC_23 (TYPE_16__*,TYPE_13__*,TYPE_6__*,int,int ,int,int *,int) ;
 scalar_t__ FUNC_24 (TYPE_31__*,TYPE_9__*) ;
 scalar_t__ FUNC_25 (TYPE_7__*,TYPE_9__*) ;
 scalar_t__ FUNC_26 (TYPE_16__*,TYPE_9__*,TYPE_7__*,int ) ;
 int FUNC_27 (TYPE_9__*,TYPE_25__*) ;
 int FUNC_28 (TYPE_7__*,TYPE_9__*,int,int ) ;
 int FUNC_29 (TYPE_7__*) ;
 int FUNC_30 (TYPE_7__*,struct ub_packed_rrset_key*,int *) ;
 int FUNC_31 (TYPE_7__*) ;
 int FUNC_32 (TYPE_16__*,TYPE_6__*) ;
 int FUNC_33 (TYPE_16__*,scalar_t__) ;
 int FUNC_34 (char*,TYPE_13__*,TYPE_6__*) ;
 int FUNC_35 (char*) ;
 int FUNC_36 (int ,char*,TYPE_13__*) ;
 int FUNC_37 (scalar_t__,char*,scalar_t__) ;
 int FUNC_38 (char*,int) ;
 int FUNC_39 (struct iter_qstate*,int ) ;
 scalar_t__ FUNC_40 (int ) ;
 int FUNC_41 (int *) ;
 int FUNC_42 (struct module_qstate*,struct iter_qstate*,int) ;
 scalar_t__ FUNC_43 (int *,int ) ;
 scalar_t__ FUNC_44 (TYPE_6__*,int *,size_t,int ,int ) ;
 scalar_t__ FUNC_45 (TYPE_6__*,int *,size_t,scalar_t__,int ) ;
 scalar_t__ FUNC_46 (TYPE_6__*,int *,size_t,scalar_t__,int ) ;
 int FUNC_47 (int,TYPE_7__*,TYPE_8__*,TYPE_9__*) ;
 int FUNC_48 (int *,int *,int ,int *) ;
 int FUNC_49 (struct module_qstate*) ;
 int FUNC_50 (struct module_qstate*) ;
 int FUNC_51 (struct module_qstate*) ;
 int FUNC_52 (struct module_qstate*) ;
 int FUNC_53 (struct module_qstate*) ;
 int FUNC_54 (struct module_qstate*) ;
 int FUNC_55 (scalar_t__,TYPE_6__*,int *) ;
 int FUNC_56 (scalar_t__,char*,...) ;
 scalar_t__ VAR_28 ;

__attribute__((used)) static int
FUNC_57(struct module_qstate* VAR_29, struct iter_qstate* VAR_30,
 int VAR_31)
{
 int VAR_32 = 0;
 enum response_type VAR_33;
 VAR_30->num_current_queries--;

 if(!FUNC_22(VAR_29->env, VAR_29, VAR_30->response))
  FUNC_35("unable to call query_response callback");

 if(VAR_30->response == ((void*)0)) {

  if(VAR_29->env->cfg->qname_minimisation) {
   VAR_30->minimise_timeout_count++;
   VAR_30->minimisation_state = VAR_24;
  }
  VAR_30->chase_to_rd = 0;
  VAR_30->dnssec_lame_query = 0;
  FUNC_56(VAR_25, "query response was timeout");
  return FUNC_39(VAR_30, VAR_16);
 }
 VAR_33 = FUNC_47(
  (int)((VAR_30->chase_flags&VAR_1) || VAR_30->chase_to_rd),
  VAR_30->response, &VAR_30->qinfo_out, VAR_30->dp);
 VAR_30->chase_to_rd = 0;
 if(VAR_33 == VAR_21 && (VAR_30->chase_flags&VAR_1) &&
  !VAR_30->auth_zone_response) {


  VAR_33 = VAR_17;
 }
 if(!VAR_29->env->cfg->disable_dnssec_lame_check && VAR_30->dnssec_expected
                && !VAR_30->dnssec_lame_query &&
  !(VAR_30->chase_flags&VAR_1)
  && VAR_30->sent_count < VAR_2
  && VAR_33 != VAR_19
  && VAR_33 != VAR_20
  && VAR_33 != VAR_22
  && VAR_33 != VAR_23) {


  if(!FUNC_29(VAR_30->response)) {




   if(VAR_29->reply) {
    struct delegpt_addr* VAR_34 = FUNC_3(
     VAR_30->dp, &VAR_29->reply->addr,
     VAR_29->reply->addrlen);
    if(VAR_34) VAR_34->dnsseclame = 1;
   }



   if(!FUNC_28(VAR_30->response, VAR_30->dp, VAR_33,
    VAR_30->qchase.qclass))
    VAR_29->reply = ((void*)0);
   VAR_33 = VAR_19;
   VAR_32 = 1;
  }
 } else VAR_30->dnssec_lame_query = 0;

 if(VAR_33 == VAR_21) {
  struct ub_packed_rrset_key* VAR_35 = FUNC_12(
   VAR_30->response->rep, VAR_30->response->rep->an_numrrsets,
   VAR_30->response->rep->an_numrrsets
   + VAR_30->response->rep->ns_numrrsets);
  if(!VAR_35) VAR_35 = FUNC_12(VAR_30->response->rep, 0,
    VAR_30->response->rep->an_numrrsets);
  if(!VAR_35 || !FUNC_6(VAR_35->rk.dname, VAR_30->dp->name)
   || !FUNC_7(VAR_30->qchase.qname, VAR_35->rk.dname)){
   FUNC_56(VAR_25, "bad referral, throwaway");
   VAR_33 = VAR_22;
  } else
   FUNC_30(VAR_30->response, VAR_35, VAR_30->dp->name);
 } else FUNC_30(VAR_30->response, ((void*)0), ((void*)0));
 if(VAR_33 == VAR_22 &&
  FUNC_0(VAR_30->response->rep->flags) == VAR_10) {

  VAR_33 = VAR_17;
 }
 if(VAR_33 == VAR_18 && VAR_30->response->rep->an_numrrsets >= 1
  && FUNC_40(VAR_30->response->rep->rrsets[0]->rk.type) == VAR_12) {
  uint8_t* VAR_36 = ((void*)0);
  size_t VAR_37 = 0;
  FUNC_18(VAR_30->response->rep->rrsets[0], &VAR_36,
   &VAR_37);
  if(VAR_37 && FUNC_7(VAR_36, VAR_30->response->rep->rrsets[0]->rk.dname)) {

   VAR_33 = VAR_17;
  }
 } else if(VAR_33 == VAR_18 &&
  VAR_30->qchase.qtype == VAR_11 &&
  VAR_30->minimisation_state == VAR_15 &&
  FUNC_43(VAR_30->qchase.qname, VAR_30->qinfo_out.qname) == 0) {




  VAR_33 = VAR_17;
 }


 if(VAR_33 == VAR_17) {


  if(VAR_28 >= VAR_26) {
   FUNC_56(VAR_26, "query response was %s",
    FUNC_0(VAR_30->response->rep->flags)
    ==VAR_8?"NXDOMAIN ANSWER":
    (VAR_30->response->rep->an_numrrsets?"ANSWER":
    "nodata ANSWER"));
  }


  if(VAR_30->qchase.qtype == VAR_13 && !VAR_30->dsns_point
   && !(VAR_30->chase_flags&VAR_1)
   && FUNC_25(VAR_30->response, VAR_30->dp)
   && FUNC_24(&VAR_30->qchase, VAR_30->dp)) {

   FUNC_41(&VAR_30->outlist);
   VAR_30->num_current_queries = 0;
   FUNC_13(FUNC_14(
    VAR_29->env->detach_subs));
   (*VAR_29->env->detach_subs)(VAR_29);
   VAR_30->num_target_queries = 0;
   return FUNC_42(VAR_29, VAR_30, VAR_31);
  }
  if(!VAR_29->no_cache_store)
   FUNC_23(VAR_29->env, &VAR_30->response->qinfo,
    VAR_30->response->rep, 0, VAR_29->prefetch_leeway,
    VAR_30->dp&&VAR_30->dp->has_parent_side_NS,
    VAR_29->region, VAR_29->query_flags);

  FUNC_41(&VAR_30->outlist);
  VAR_30->num_current_queries = 0;
  FUNC_13(FUNC_14(
   VAR_29->env->detach_subs));
  (*VAR_29->env->detach_subs)(VAR_29);
  VAR_30->num_target_queries = 0;
  if(VAR_29->reply)
   FUNC_48(&VAR_29->reply_origin,
    &VAR_29->reply->addr, VAR_29->reply->addrlen,
    VAR_29->region);
  if(VAR_30->minimisation_state != VAR_3
   && !(VAR_30->chase_flags & VAR_1)) {
   if(FUNC_0(VAR_30->response->rep->flags) !=
    VAR_7) {
    if(VAR_29->env->cfg->qname_minimisation_strict) {
     if(FUNC_0(VAR_30->response->rep->flags) ==
      VAR_8) {
      FUNC_31(VAR_30->response);
      return FUNC_11(VAR_30);
     }
     return FUNC_10(VAR_29, VAR_31,
      VAR_9);
    }



    VAR_30->minimisation_state = VAR_3;
   }
   if(FUNC_0(VAR_30->response->rep->flags) ==
    VAR_8) {




    if(VAR_30->dnssec_expected)
     return FUNC_11(VAR_30);



    if(VAR_29->env->cfg->harden_below_nxdomain) {
     struct module_qstate* VAR_38 = ((void*)0);
     FUNC_36(VAR_27,
      "schedule NXDOMAIN validation:",
      &VAR_30->response->qinfo);
     if(!FUNC_17(
      VAR_30->response->qinfo.qname,
      VAR_30->response->qinfo.qname_len,
      VAR_30->response->qinfo.qtype,
      VAR_30->response->qinfo.qclass,
      VAR_29, VAR_31, VAR_30,
      VAR_6,
      VAR_4, &VAR_38, 1))
      FUNC_56(VAR_25,
      "could not validate NXDOMAIN "
      "response");
     FUNC_41(&VAR_30->outlist);
     VAR_30->num_current_queries = 0;
     FUNC_13(FUNC_14(
      VAR_29->env->detach_subs));
     (*VAR_29->env->detach_subs)(VAR_29);
     VAR_30->num_target_queries = 0;
    }
   }
   return FUNC_39(VAR_30, VAR_16);
  }
  return FUNC_11(VAR_30);
 } else if(VAR_33 == VAR_21) {


  FUNC_56(VAR_26, "query response was REFERRAL");

  if(!(VAR_30->chase_flags & VAR_1) && !VAR_30->ratelimit_ok) {


   FUNC_20(VAR_29->env->infra_cache,
    VAR_30->dp->name, VAR_30->dp->namelen,
    *VAR_29->env->now);
  }


  if(!VAR_29->no_cache_store &&
  (!VAR_29->env->cfg->harden_referral_path ||
      ( VAR_29->qinfo.qtype == VAR_14
   && (VAR_29->query_flags&VAR_1)
   && !(VAR_29->query_flags&VAR_0)



   && (
     FUNC_46(VAR_30->response->rep,
    VAR_30->qchase.qname, VAR_30->qchase.qname_len,
    VAR_14, VAR_30->qchase.qclass)
     || FUNC_45(VAR_30->response->rep,
    VAR_30->qchase.qname, VAR_30->qchase.qname_len,
    VAR_14, VAR_30->qchase.qclass)
     )
      ))) {


   FUNC_23(VAR_29->env, &VAR_30->response->qinfo,
    VAR_30->response->rep, 1, 0, 0, ((void*)0), 0);
   if(VAR_30->store_parent_NS)
    FUNC_32(VAR_29->env,
     VAR_30->response->rep);
   if(VAR_29->env->neg_cache)
    FUNC_55(VAR_29->env->neg_cache,
     VAR_30->response->rep, VAR_30->dp->name);
  }

  if(!VAR_29->no_cache_store && VAR_30->query_for_pside_glue
   && !VAR_30->pside_glue) {
    VAR_30->pside_glue = FUNC_44(VAR_30->response->rep,
     VAR_30->qchase.qname, VAR_30->qchase.qname_len,
     VAR_30->qchase.qtype, VAR_30->qchase.qclass);
    if(VAR_30->pside_glue) {
     FUNC_37(VAR_25, "found parent-side "
      "glue", VAR_30->pside_glue);
     FUNC_33(VAR_29->env,
      VAR_30->pside_glue);
    }
  }



  VAR_30->deleg_msg = VAR_30->response;
  VAR_30->dp = FUNC_4(VAR_30->response, VAR_29->region);
  if (VAR_29->env->cfg->qname_minimisation)
   VAR_30->minimisation_state = VAR_5;
  if(!VAR_30->dp) {
   FUNC_8(VAR_29, "malloc failure, for delegation point");
   return FUNC_10(VAR_29, VAR_31, VAR_9);
  }
  if(!FUNC_2(VAR_29->env, VAR_30->qchase.qclass,
   VAR_29->region, VAR_30->dp)) {
   FUNC_8(VAR_29, "malloc failure, copy extra info into delegation point");
   return FUNC_10(VAR_29, VAR_31, VAR_9);
  }
  if(VAR_30->store_parent_NS && FUNC_43(VAR_30->dp->name,
   VAR_30->store_parent_NS->name) == 0)
   FUNC_27(VAR_30->dp, VAR_30->store_parent_NS);
  FUNC_5(VAR_25, VAR_30->dp);

  VAR_30->referral_count++;
  VAR_30->sent_count = 0;


  VAR_30->dnssec_expected = FUNC_26(VAR_29->env,
   VAR_30->dp, VAR_30->response, VAR_30->qchase.qclass);

  if(VAR_30->dnssec_expected && VAR_29->env->cfg->prefetch_key &&
   !(VAR_29->query_flags&VAR_0))
   FUNC_15(VAR_29, VAR_30, VAR_31);





  if(VAR_29->env->cfg->harden_referral_path)
   FUNC_16(VAR_29, VAR_30, VAR_31);





  FUNC_41(&VAR_30->outlist);
  VAR_30->num_current_queries = 0;
  FUNC_13(FUNC_14(
   VAR_29->env->detach_subs));
  (*VAR_29->env->detach_subs)(VAR_29);
  VAR_30->num_target_queries = 0;
  FUNC_56(VAR_25, "cleared outbound list for next round");
  return FUNC_39(VAR_30, VAR_16);
 } else if(VAR_33 == VAR_18) {
  uint8_t* VAR_39 = ((void*)0);
  size_t VAR_40 = 0;



  FUNC_56(VAR_26, "query response was CNAME");
  if(VAR_28 >= VAR_25)
   FUNC_34("cname msg", &VAR_30->response->qinfo,
    VAR_30->response->rep);


  if(VAR_30->qchase.qtype == VAR_13 && !VAR_30->dsns_point
   && !(VAR_30->chase_flags&VAR_1)
   && FUNC_25(VAR_30->response, VAR_30->dp)
   && FUNC_24(&VAR_30->qchase, VAR_30->dp)) {
   FUNC_41(&VAR_30->outlist);
   VAR_30->num_current_queries = 0;
   FUNC_13(FUNC_14(
    VAR_29->env->detach_subs));
   (*VAR_29->env->detach_subs)(VAR_29);
   VAR_30->num_target_queries = 0;
   return FUNC_42(VAR_29, VAR_30, VAR_31);
  }

  if(!FUNC_19(VAR_29, VAR_30, VAR_30->response,
   &VAR_39, &VAR_40)) {
   FUNC_8(VAR_29, "malloc failure, CNAME info");
   return FUNC_10(VAR_29, VAR_31, VAR_9);
  }




  if(!VAR_29->no_cache_store)
   FUNC_23(VAR_29->env, &VAR_30->response->qinfo,
    VAR_30->response->rep, 1, VAR_29->prefetch_leeway,
    VAR_30->dp&&VAR_30->dp->has_parent_side_NS, ((void*)0),
    VAR_29->query_flags);

  VAR_30->qchase.qname = VAR_39;
  VAR_30->qchase.qname_len = VAR_40;

  VAR_30->deleg_msg = ((void*)0);
  VAR_30->dp = ((void*)0);
  VAR_30->dsns_point = ((void*)0);
  VAR_30->auth_zone_response = 0;
  VAR_30->sent_count = 0;
  if(VAR_30->minimisation_state != VAR_15)


   VAR_30->query_restart_count++;
  if(VAR_29->env->cfg->qname_minimisation)
   VAR_30->minimisation_state = VAR_5;





  FUNC_41(&VAR_30->outlist);
  VAR_30->num_current_queries = 0;
  FUNC_13(FUNC_14(
   VAR_29->env->detach_subs));
  (*VAR_29->env->detach_subs)(VAR_29);
  VAR_30->num_target_queries = 0;
  if(VAR_29->reply)
   FUNC_48(&VAR_29->reply_origin,
    &VAR_29->reply->addr, VAR_29->reply->addrlen,
    VAR_29->region);
  FUNC_56(VAR_25, "cleared outbound list for query restart");

  return FUNC_39(VAR_30, VAR_6);
 } else if(VAR_33 == VAR_19) {

  FUNC_56(VAR_26, "query response was %sLAME",
   VAR_32?"DNSSEC ":"");
  if(!FUNC_7(VAR_30->qchase.qname, VAR_30->dp->name)) {
   FUNC_35("mark lame: mismatch in qname and dpname");

  } else if(VAR_29->reply) {


   if(!FUNC_21(VAR_29->env->infra_cache,
    &VAR_29->reply->addr, VAR_29->reply->addrlen,
    VAR_30->dp->name, VAR_30->dp->namelen,
    *VAR_29->env->now, VAR_32, 0,
    VAR_30->qchase.qtype))
    FUNC_35("mark host lame: out of memory");
  }
 } else if(VAR_33 == VAR_20) {

  FUNC_56(VAR_26, "query response REC_LAME: "
   "recursive but not authoritative server");
  if(!FUNC_7(VAR_30->qchase.qname, VAR_30->dp->name)) {
   FUNC_35("mark rec_lame: mismatch in qname and dpname");

  } else if(VAR_29->reply) {


   FUNC_56(VAR_26, "mark as REC_LAME");
   if(!FUNC_21(VAR_29->env->infra_cache,
    &VAR_29->reply->addr, VAR_29->reply->addrlen,
    VAR_30->dp->name, VAR_30->dp->namelen,
    *VAR_29->env->now, 0, 1, VAR_30->qchase.qtype))
    FUNC_35("mark host lame: out of memory");
  }
 } else if(VAR_33 == VAR_22) {




  FUNC_56(VAR_26, "query response was THROWAWAY");
 } else {
  FUNC_38("A query response came back with an unknown type: %d",
   (int)VAR_33);
 }




 if (VAR_29->env->cfg->qname_minimisation &&
  !VAR_29->env->cfg->qname_minimisation_strict)
  VAR_30->minimisation_state = VAR_3;
 if(VAR_30->auth_zone_response) {

  VAR_30->auth_zone_response = 0;
  if(!FUNC_1(VAR_29->env->auth_zones,
   VAR_30->dp->name, VAR_30->dp->namelen, VAR_29->qinfo.qclass)) {
   FUNC_56(VAR_25, "auth zone response bad, and no"
    " fallback possible, servfail");
   FUNC_9(VAR_29, "response is bad, no fallback, "
    "for auth zone", VAR_30->dp->name);
   return FUNC_10(VAR_29, VAR_31, VAR_9);
  }
  FUNC_56(VAR_25, "auth zone response was bad, "
   "fallback enabled");
  VAR_30->auth_zone_avoid = 1;
  if(VAR_30->dp->auth_dp) {


   VAR_30->dp = ((void*)0);
   return FUNC_39(VAR_30, VAR_6);
  }
 }
 return FUNC_39(VAR_30, VAR_16);
}
