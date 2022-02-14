
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int uint16_t ;
typedef int time_t ;
struct TYPE_16__ {int ans_secure; scalar_t__ extended; int * ans_rcode; int ans_bogus; } ;
struct TYPE_19__ {TYPE_12__* cfg; scalar_t__ need_to_validate; int * now; } ;
struct worker {TYPE_1__ stats; int scratchpad; TYPE_4__ env; } ;
struct query_info {int local_alias; int qclass; int qtype; int qname_len; int qname; } ;
struct edns_data {int udp_size; int bits; int * opt_list; scalar_t__ ext_rcode; void* edns_version; } ;
struct TYPE_17__ {int local_alias; } ;
struct dns_msg {TYPE_2__ qinfo; TYPE_3__* rep; } ;
struct delegpt {int dummy; } ;
struct comm_reply {TYPE_13__* c; } ;
struct TYPE_18__ {int flags; } ;
struct TYPE_15__ {int buffer; } ;
struct TYPE_14__ {int val_clean_additional; scalar_t__ ignore_cd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct edns_data*,struct edns_data*,TYPE_12__*,TYPE_13__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 struct delegpt* FUNC_3 (TYPE_4__*,int ,int ,int ,int ,int ,struct dns_msg**,int ) ;
 int FUNC_4 (int ,size_t,TYPE_2__*,int,int,struct edns_data*) ;
 int FUNC_5 (TYPE_4__*,struct query_info*,int *,TYPE_3__*,int,struct edns_data*,struct comm_reply*,int ) ;
 int FUNC_6 (TYPE_4__*,struct query_info*,int *,TYPE_3__*,size_t,struct edns_data*,struct comm_reply*,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*,int,int,int ,int ,int,int ,int,struct edns_data*,int,int) ;






 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_9(struct worker* VAR_8, struct query_info* VAR_9,
 uint16_t VAR_10, uint16_t VAR_11, struct comm_reply* VAR_12,
 struct edns_data* VAR_13)
{
 struct edns_data VAR_14;
 uint16_t VAR_15 = VAR_13->udp_size;
 int VAR_16 = 0;
 time_t VAR_17 = *VAR_8->env.now;
 int VAR_18 = (!(VAR_11&VAR_0) || VAR_8->env.cfg->ignore_cd)
  && VAR_8->env.need_to_validate;
 struct dns_msg *VAR_19 = ((void*)0);
 struct delegpt *VAR_20;

 VAR_20 = FUNC_3(&VAR_8->env, VAR_9->qname,
  VAR_9->qname_len, VAR_9->qtype, VAR_9->qclass,
  VAR_8->scratchpad, &VAR_19, VAR_17);
 if(!VAR_20) {
  return 0;
 }



 VAR_19->qinfo.local_alias = VAR_9->local_alias;
 if(VAR_18) {
  switch(FUNC_1(VAR_19->rep)) {
  case 128:


   return 0;
  case 133:
  case 129:

   VAR_13->edns_version = VAR_4;
   VAR_13->udp_size = VAR_3;
   VAR_13->ext_rcode = 0;
   VAR_13->bits &= VAR_5;
   if(!FUNC_6(&VAR_8->env, VAR_9, ((void*)0),
    VAR_19->rep, VAR_7, VAR_13, VAR_12, VAR_8->scratchpad))
     return 0;
   FUNC_4(VAR_12->c->buffer, VAR_7,
    &VAR_19->qinfo, VAR_10, VAR_11, VAR_13);
   if(VAR_8->stats.extended) {
    VAR_8->stats.ans_bogus++;
    VAR_8->stats.ans_rcode[VAR_7]++;
   }
   return 1;
  case 130:


   if(VAR_8->env.cfg->val_clean_additional)
    FUNC_2(VAR_19->rep);
   VAR_16 = 1;
   break;
  case 132:
  case 131:
  default:

   VAR_16 = 0;
   break;
  }
 }

 VAR_14 = *VAR_13;
 VAR_13->edns_version = VAR_4;
 VAR_13->udp_size = VAR_3;
 VAR_13->ext_rcode = 0;
 VAR_13->bits &= VAR_5;
 if(!FUNC_5(&VAR_8->env, VAR_9, ((void*)0), VAR_19->rep,
  (int)(VAR_11&VAR_6), VAR_13, VAR_12, VAR_8->scratchpad))
   return 0;
 VAR_19->rep->flags |= VAR_1|VAR_2;
 if(!FUNC_0(VAR_13, &VAR_14, VAR_8->env.cfg,
  VAR_12->c, VAR_8->scratchpad) ||
  !FUNC_7(&VAR_19->qinfo, VAR_19->rep, VAR_10, VAR_11,
  VAR_12->c->buffer, 0, 1, VAR_8->scratchpad,
  VAR_15, VAR_13, (int)(VAR_13->bits & VAR_5), VAR_16)) {
  if(!FUNC_6(&VAR_8->env, VAR_9, ((void*)0), ((void*)0),
   VAR_7, VAR_13, VAR_12, VAR_8->scratchpad))
    VAR_13->opt_list = ((void*)0);
  FUNC_4(VAR_12->c->buffer, VAR_7,
   &VAR_19->qinfo, VAR_10, VAR_11, VAR_13);
 }
 if(VAR_8->stats.extended) {
  if(VAR_16) VAR_8->stats.ans_secure++;
  FUNC_8(&VAR_8->stats, VAR_12->c->buffer);
 }
 return 1;
}
