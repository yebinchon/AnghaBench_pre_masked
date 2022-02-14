
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct TYPE_13__ {scalar_t__* now; int rrset_cache; TYPE_7__* cfg; scalar_t__ need_to_validate; } ;
struct TYPE_12__ {int ans_secure; scalar_t__ extended; int * ans_rcode; int ans_bogus; int zero_ttl_responses; } ;
struct worker {int scratchpad; TYPE_5__ env; TYPE_4__ stats; TYPE_3__* daemon; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct respip_client_info {int dummy; } ;
struct reply_info {scalar_t__ serve_expired_ttl; scalar_t__ ttl; scalar_t__ an_numrrsets; scalar_t__ security; int rrset_count; int ref; TYPE_2__** rrsets; } ;
struct query_info {int dummy; } ;
struct edns_data {int udp_size; int bits; int * opt_list; scalar_t__ ext_rcode; void* edns_version; } ;
struct comm_reply {TYPE_8__* c; } ;
struct TYPE_15__ {int buffer; } ;
struct TYPE_14__ {scalar_t__ serve_expired_ttl; scalar_t__ serve_expired; scalar_t__ ignore_cd; } ;
struct TYPE_11__ {scalar_t__ use_response_ip; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_10__ {TYPE_1__ rk; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct edns_data*,struct edns_data*,TYPE_7__*,TYPE_8__*,int ) ;
 int FUNC_1 (struct worker*,struct query_info*,struct respip_client_info*,struct reply_info*,struct comm_reply*,struct ub_packed_rrset_key**,struct reply_info**) ;
 int FUNC_2 (int ,size_t,struct query_info*,int,int,struct edns_data*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,struct query_info*,int *,struct reply_info*,int,struct edns_data*,struct comm_reply*,int ) ;
 int FUNC_5 (TYPE_5__*,struct query_info*,int *,struct reply_info*,size_t,struct edns_data*,struct comm_reply*,int ) ;
 scalar_t__ FUNC_6 (struct reply_info*) ;
 int FUNC_7 (struct query_info*,struct reply_info*) ;
 int FUNC_8 (struct query_info*,struct reply_info*,int,int,int ,scalar_t__,int,int ,int,struct edns_data*,int,int) ;
 struct reply_info* FUNC_9 (struct reply_info*,int *,int ) ;
 int FUNC_10 (struct reply_info*,struct query_info*,struct reply_info*,struct respip_client_info*,int,struct reply_info**,int ) ;
 int FUNC_11 (int ,int ,scalar_t__) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*) ;

__attribute__((used)) static int
FUNC_17(struct worker* VAR_13, struct query_info* VAR_14,
 struct respip_client_info* VAR_15, int* VAR_16,
 struct ub_packed_rrset_key** VAR_17,
 struct reply_info** VAR_18,
 struct reply_info* VAR_19, uint16_t VAR_20, uint16_t VAR_21,
 struct comm_reply* VAR_22, struct edns_data* VAR_23)
{
 struct edns_data VAR_24;
 time_t VAR_25 = *VAR_13->env.now;
 uint16_t VAR_26 = VAR_23->udp_size;
 struct reply_info* VAR_27 = VAR_19;
 struct reply_info* VAR_28 = *VAR_18;
 int VAR_29;
 int VAR_30 = (!(VAR_21&VAR_0) || VAR_13->env.cfg->ignore_cd)
  && VAR_13->env.need_to_validate;
 *VAR_18 = ((void*)0);
 if(VAR_13->env.cfg->serve_expired) {
  if(VAR_13->env.cfg->serve_expired_ttl &&
   VAR_19->serve_expired_ttl < VAR_25)
   return 0;
  if(!FUNC_11(VAR_19->ref, VAR_19->rrset_count, 0))
   return 0;



  if (VAR_25 >= VAR_19->ttl) {
   VAR_13->stats.zero_ttl_responses++;
  }
 } else {

  if(VAR_19->ttl < VAR_25) {




   return 0;
  }
  if(!FUNC_11(VAR_19->ref, VAR_19->rrset_count, VAR_25))
   return 0;

 }

 if(VAR_19->an_numrrsets > 0 && (VAR_19->rrsets[0]->rk.type ==
  FUNC_3(VAR_6) || VAR_19->rrsets[0]->rk.type ==
  FUNC_3(VAR_7))) {
  if(!FUNC_7(VAR_14, VAR_19)) {

   FUNC_16(VAR_8, "Cache reply: cname chain broken");
   goto bail_out;
  }
 }

 if(VAR_30 && (VAR_19->security == VAR_9 ||
  VAR_19->security == VAR_11)) {

  VAR_23->edns_version = VAR_2;
  VAR_23->udp_size = VAR_1;
  VAR_23->ext_rcode = 0;
  VAR_23->bits &= VAR_3;
  if(!FUNC_5(&VAR_13->env, VAR_14, ((void*)0), VAR_19,
   VAR_5, VAR_23, VAR_22, VAR_13->scratchpad))
   goto bail_out;
  FUNC_2(VAR_22->c->buffer, VAR_5,
   VAR_14, VAR_20, VAR_21, VAR_23);
  FUNC_12(VAR_13->env.rrset_cache,
   VAR_13->scratchpad, VAR_19->ref, VAR_19->rrset_count);
  if(VAR_13->stats.extended) {
   VAR_13->stats.ans_bogus ++;
   VAR_13->stats.ans_rcode[VAR_5] ++;
  }
  return 1;
 } else if( VAR_19->security == VAR_12 && VAR_30) {
  FUNC_16(VAR_8, "Cache reply: unchecked entry needs "
   "validation");
  goto bail_out;
 } else if(VAR_19->security == VAR_10) {
  if(FUNC_6(VAR_19))
   VAR_29 = 1;
  else {
   if(VAR_30) {
    FUNC_16(VAR_8, "Cache reply: secure entry"
     " changed status");
    goto bail_out;
   }
   VAR_29 = 0;
  }
 } else VAR_29 = 0;

 VAR_24 = *VAR_23;
 VAR_23->edns_version = VAR_2;
 VAR_23->udp_size = VAR_1;
 VAR_23->ext_rcode = 0;
 VAR_23->bits &= VAR_3;
 if(!FUNC_4(&VAR_13->env, VAR_14, ((void*)0), VAR_19,
  (int)(VAR_21&VAR_4), VAR_23, VAR_22, VAR_13->scratchpad))
  goto bail_out;
 *VAR_17 = ((void*)0);
 if(VAR_13->daemon->use_response_ip && !VAR_28 &&
    !FUNC_1(VAR_13, VAR_14, VAR_15, VAR_19, VAR_22, VAR_17,
   &VAR_27)) {
  goto bail_out;
 } else if(VAR_28 &&
  !FUNC_10(VAR_28, VAR_14, VAR_19, VAR_15,
  VAR_30, &VAR_27, VAR_13->scratchpad)) {
  goto bail_out;
 }
 if(VAR_27 != VAR_19)
  VAR_29 = 0;
 if(!VAR_27 || *VAR_17) {
  FUNC_14(VAR_22->c->buffer);
  FUNC_15(VAR_22->c->buffer);
  if(!VAR_27)
   *VAR_16 = 1;
  else {



   *VAR_18 = FUNC_9(VAR_27, ((void*)0),
    VAR_13->scratchpad);
   if(!*VAR_18)
    goto bail_out;
  }
 } else if(!FUNC_0(VAR_23, &VAR_24, VAR_13->env.cfg,
  VAR_22->c, VAR_13->scratchpad) ||
  !FUNC_8(VAR_14, VAR_27, VAR_20, VAR_21,
  VAR_22->c->buffer, VAR_25, 1, VAR_13->scratchpad,
  VAR_26, VAR_23, (int)(VAR_23->bits & VAR_3), VAR_29)) {
  if(!FUNC_5(&VAR_13->env, VAR_14, ((void*)0), ((void*)0),
   VAR_5, VAR_23, VAR_22, VAR_13->scratchpad))
    VAR_23->opt_list = ((void*)0);
  FUNC_2(VAR_22->c->buffer, VAR_5,
   VAR_14, VAR_20, VAR_21, VAR_23);
 }


 FUNC_12(VAR_13->env.rrset_cache, VAR_13->scratchpad,
  VAR_19->ref, VAR_19->rrset_count);
 if(VAR_13->stats.extended) {
  if(VAR_29) VAR_13->stats.ans_secure++;
  FUNC_13(&VAR_13->stats, VAR_22->c->buffer);
 }

 return 1;

bail_out:
 FUNC_12(VAR_13->env.rrset_cache,
  VAR_13->scratchpad, VAR_19->ref, VAR_19->rrset_count);
 return 0;
}
