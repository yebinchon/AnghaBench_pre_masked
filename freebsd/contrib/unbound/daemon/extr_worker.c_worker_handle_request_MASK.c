
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct TYPE_17__ {scalar_t__* now; TYPE_4__* cfg; int mesh; int msg_cache; scalar_t__ auth_zones; int rnd; int infra_cache; } ;
struct TYPE_18__ {scalar_t__ log_client_response_messages; scalar_t__ log_client_query_messages; } ;
struct TYPE_27__ {scalar_t__ extended; int * qtype; int num_queries_ip_ratelimited; int num_queries; int num_query_dnscrypt_crypted; int num_query_dnscrypt_cert; int num_query_dnscrypt_cleartext; int num_query_dnscrypt_crypted_malformed; } ;
struct worker {TYPE_11__ env; TYPE_13__ dtenv; int scratchpad; TYPE_8__ stats; TYPE_3__* daemon; } ;
struct TYPE_24__ {scalar_t__ type; scalar_t__ dname; } ;
struct TYPE_21__ {struct packed_rrset_data* data; } ;
struct ub_packed_rrset_key {TYPE_5__ rk; TYPE_2__ entry; } ;
struct timeval {int member_1; int member_0; } ;
struct respip_client_info {int respip_set; int view; int tag_datas_size; int tag_datas; int tag_actions_size; int tag_actions; int taglen; int taglist; } ;
struct reply_info {scalar_t__ prefetch_ttl; scalar_t__ ttl; } ;
struct query_info {size_t qtype; scalar_t__ qclass; int edns_present; int udp_size; scalar_t__ edns_version; TYPE_6__* local_alias; scalar_t__ qname; scalar_t__ qname_len; int * opt_list; int bits; scalar_t__ ext_rcode; } ;
struct packed_rrset_data {int count; scalar_t__* rr_len; scalar_t__* rr_data; } ;
struct lruhash_entry {int lock; scalar_t__ data; } ;
struct edns_option {scalar_t__ opt_len; } ;
struct edns_data {size_t qtype; scalar_t__ qclass; int edns_present; int udp_size; scalar_t__ edns_version; TYPE_6__* local_alias; scalar_t__ qname; scalar_t__ qname_len; int * opt_list; int bits; scalar_t__ ext_rcode; } ;
struct comm_reply {int max_udp_size; int addrlen; int addr; scalar_t__ is_dnscrypted; } ;
struct comm_point {int buffer; int type; scalar_t__ dnscrypt; } ;
struct acl_addr {int view; int tag_datas_size; int tag_datas; int tag_actions_size; int tag_actions; int taglen; int taglist; } ;
typedef int reply_edns ;
typedef int qinfo_tmp ;
typedef int qinfo ;
typedef int ip ;
typedef int hashvalue_type ;
typedef enum acl_access { ____Placeholder_acl_access } acl_access ;
typedef int addrbuf ;
struct TYPE_26__ {int _name; } ;
struct TYPE_25__ {struct ub_packed_rrset_key* rrset; scalar_t__ next; } ;
struct TYPE_23__ {scalar_t__ ip_ratelimit_factor; scalar_t__ log_replies; scalar_t__ serve_expired; scalar_t__ prefetch; scalar_t__ log_queries; } ;
struct TYPE_22__ {int respip_set; scalar_t__ use_response_ip; TYPE_1__* cfg; int local_zones; int acl; TYPE_15__* dnscenv; } ;
struct TYPE_20__ {int max_udp_size; int num_tags; int tagname; scalar_t__ harden_short_bufsize; } ;
struct TYPE_19__ {int provider_name; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 struct acl_addr* FUNC_7 (int ,int *,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_8 (struct acl_addr*) ;
 int VAR_32 ;
 int FUNC_9 (int *,int ,char*,int) ;
 scalar_t__ FUNC_10 (struct worker*,struct query_info*,struct query_info*,struct comm_reply*,int ) ;
 scalar_t__ FUNC_11 (struct worker*,struct query_info*,struct respip_client_info*,int*,struct ub_packed_rrset_key**,struct reply_info**,struct reply_info*,int ,int ,struct comm_reply*,struct query_info*) ;
 scalar_t__ FUNC_12 (struct worker*,struct query_info*,int ,int ,struct comm_reply*,struct query_info*) ;
 int FUNC_13 (struct worker*,struct query_info*,struct query_info*,int ,struct comm_reply*) ;
 int FUNC_14 (int ,struct query_info*) ;
 scalar_t__ FUNC_15 (scalar_t__,TYPE_11__*,struct query_info*,struct query_info*,struct comm_reply*,int ,int ) ;
 scalar_t__ FUNC_16 (struct query_info*) ;
 int FUNC_17 (struct comm_reply*) ;
 int VAR_33 ;
 int FUNC_18 (struct comm_point*,int,struct worker*,struct comm_reply*) ;
 int FUNC_19 (struct comm_point*,int,struct worker*,struct comm_reply*) ;
 int FUNC_20 (scalar_t__,char*) ;
 int FUNC_21 (TYPE_15__*,struct comm_reply*) ;
 int FUNC_22 (struct comm_reply*) ;
 int FUNC_23 (TYPE_13__*,int *,int ,int ) ;
 int FUNC_24 (TYPE_13__*,int *,int ,int ) ;
 int FUNC_25 (int *,TYPE_11__*) ;
 struct edns_option* FUNC_26 (int *,int ) ;
 int FUNC_27 (int ,int,struct query_info*,int ,int ,struct query_info*) ;
 int FUNC_28 (struct ub_packed_rrset_key*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_29 (int ) ;
 int FUNC_30 (int ,struct comm_reply*,scalar_t__,int ) ;
 scalar_t__ FUNC_31 (int ,TYPE_11__*,struct query_info*,struct query_info*,int ,int ,struct comm_reply*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (scalar_t__,char*,int *,int ) ;
 int FUNC_34 (char*) ;
 int FUNC_35 (char*,scalar_t__,size_t,scalar_t__) ;
 int FUNC_36 (int ,struct query_info*,int *,int ,struct timeval,int,int ) ;
 int FUNC_37 (struct query_info*,int ,int) ;
 int FUNC_38 (int ,struct query_info*,struct respip_client_info*,int ,struct query_info*,struct comm_reply*,int ) ;
 int FUNC_39 (int ,struct query_info*,int ) ;
 int FUNC_40 (struct query_info*,int ) ;
 int FUNC_41 (struct query_info*,int ) ;
 int FUNC_42 (int ) ;
 int FUNC_43 (struct worker*,struct query_info*,int ,struct comm_reply*,scalar_t__) ;
 int FUNC_44 (TYPE_8__*,struct comm_point*,size_t,scalar_t__,struct query_info*,struct comm_reply*) ;
 int FUNC_45 (TYPE_8__*,int ) ;
 int FUNC_46 (TYPE_8__*,struct worker*) ;
 struct lruhash_entry* FUNC_47 (int ,int ,struct query_info*,int ) ;
 scalar_t__ FUNC_48 (int ) ;
 scalar_t__ FUNC_49 (int ) ;
 int FUNC_50 (int ) ;
 scalar_t__ FUNC_51 (int ) ;
 int FUNC_52 (int ,int) ;
 int FUNC_53 (int ) ;
 int FUNC_54 (int ,int) ;
 int FUNC_55 (int ,int,scalar_t__*,int) ;
 TYPE_7__* FUNC_56 (size_t) ;
 scalar_t__ FUNC_57 (char*,int ) ;
 scalar_t__ FUNC_58 (int ,scalar_t__) ;
 int FUNC_59 (scalar_t__,char*,...) ;
 scalar_t__ VAR_34 ;
 int FUNC_60 (int ,struct worker*) ;
 int FUNC_61 (struct worker*,int) ;
 int FUNC_62 (struct worker*,int *) ;

int
FUNC_63(struct comm_point* VAR_35, void* VAR_36, int VAR_37,
 struct comm_reply* VAR_38)
{
 struct worker* VAR_39 = (struct worker*)VAR_36;
 int VAR_40;
 hashvalue_type VAR_41;
 struct lruhash_entry* VAR_42;
 struct query_info VAR_43;
 struct edns_data VAR_44;
 enum acl_access VAR_45;
 struct acl_addr* VAR_46;
 int VAR_47 = 0;
 int VAR_48 = 0;



 struct ub_packed_rrset_key* VAR_49 = ((void*)0);
 struct reply_info* VAR_50 = ((void*)0);
 struct query_info* VAR_51 = &VAR_43;
 struct query_info VAR_52;
 struct respip_client_info* VAR_53 = ((void*)0), VAR_54;
 FUNC_37(&VAR_43, 0, sizeof(VAR_43));

 if(VAR_37 != VAR_24) {

  FUNC_59(VAR_26, "handle request called with err=%d", VAR_37);
  return 0;
 }
 VAR_46 = FUNC_7(VAR_39->daemon->acl, &VAR_38->addr,
  VAR_38->addrlen);
 VAR_45 = FUNC_8(VAR_46);
 if((VAR_40=FUNC_18(VAR_35, VAR_45, VAR_39, VAR_38)) != -1)
 {
  if(VAR_40 == 1)
   goto send_reply;
  return VAR_40;
 }
 if((VAR_40=FUNC_60(VAR_35->buffer, VAR_39)) != 0) {
  FUNC_59(VAR_26, "worker check request: bad query.");
  FUNC_33(VAR_27,"from",&VAR_38->addr, VAR_38->addrlen);
  if(VAR_40 != -1) {
   FUNC_1(FUNC_48(VAR_35->buffer));
   FUNC_3(FUNC_48(VAR_35->buffer), VAR_40);
   return 1;
  }
  FUNC_17(VAR_38);
  return 0;
 }

 VAR_39->stats.num_queries++;


 if(!FUNC_30(VAR_39->env.infra_cache, VAR_38,
   *VAR_39->env.now, VAR_35->buffer)) {

  if(VAR_39->env.cfg->ip_ratelimit_factor != 0 &&
   FUNC_58(VAR_39->env.rnd,
        VAR_39->env.cfg->ip_ratelimit_factor) == 0) {

   char VAR_55[128];
   FUNC_9(&VAR_38->addr, VAR_38->addrlen,
      VAR_55, sizeof(VAR_55));
    FUNC_59(VAR_28, "ip_ratelimit allowed through for ip address %s because of slip in ip_ratelimit_factor",
      VAR_55);
  } else {
   VAR_39->stats.num_queries_ip_ratelimited++;
   FUNC_17(VAR_38);
   return 0;
  }
 }


 if(!FUNC_41(&VAR_43, VAR_35->buffer)) {
  FUNC_59(VAR_26, "worker parse request: formerror.");
  FUNC_33(VAR_27,"from",&VAR_38->addr, VAR_38->addrlen);
  FUNC_37(&VAR_43, 0, sizeof(VAR_43));
  if(FUNC_61(VAR_39, VAR_8) == -1) {
   FUNC_17(VAR_38);
   return 0;
  }
  FUNC_53(VAR_35->buffer);
  FUNC_1(FUNC_48(VAR_35->buffer));
  FUNC_3(FUNC_48(VAR_35->buffer),
   VAR_8);
  FUNC_45(&VAR_39->stats, VAR_35->buffer);
  goto send_reply;
 }
 if(VAR_39->env.cfg->log_queries) {
  char VAR_56[128];
  FUNC_9(&VAR_38->addr, VAR_38->addrlen, VAR_56, sizeof(VAR_56));
  FUNC_35(VAR_56, VAR_43.qname, VAR_43.qtype, VAR_43.qclass);
 }
 if(VAR_43.qtype == VAR_15 ||
  VAR_43.qtype == VAR_17) {
  FUNC_59(VAR_26, "worker request: refused zone transfer.");
  FUNC_33(VAR_27,"from",&VAR_38->addr, VAR_38->addrlen);
  FUNC_53(VAR_35->buffer);
  FUNC_1(FUNC_48(VAR_35->buffer));
  FUNC_3(FUNC_48(VAR_35->buffer),
   VAR_9);
  if(VAR_39->stats.extended) {
   VAR_39->stats.qtype[VAR_43.qtype]++;
   FUNC_45(&VAR_39->stats, VAR_35->buffer);
  }
  goto send_reply;
 }
 if(VAR_43.qtype == VAR_20 ||
  VAR_43.qtype == VAR_22 ||
  VAR_43.qtype == VAR_21 ||
  VAR_43.qtype == VAR_18 ||
  VAR_43.qtype == VAR_19 ||
  (VAR_43.qtype >= 128 && VAR_43.qtype <= 248)) {
  FUNC_59(VAR_26, "worker request: formerror for meta-type.");
  FUNC_33(VAR_27,"from",&VAR_38->addr, VAR_38->addrlen);
  if(FUNC_61(VAR_39, VAR_8) == -1) {
   FUNC_17(VAR_38);
   return 0;
  }
  FUNC_53(VAR_35->buffer);
  FUNC_1(FUNC_48(VAR_35->buffer));
  FUNC_3(FUNC_48(VAR_35->buffer),
   VAR_8);
  if(VAR_39->stats.extended) {
   VAR_39->stats.qtype[VAR_43.qtype]++;
   FUNC_45(&VAR_39->stats, VAR_35->buffer);
  }
  goto send_reply;
 }
 if((VAR_40=FUNC_39(VAR_35->buffer, &VAR_44, VAR_39->scratchpad)) != 0) {
  struct edns_data VAR_57;
  FUNC_59(VAR_26, "worker parse edns: formerror.");
  FUNC_33(VAR_27,"from",&VAR_38->addr, VAR_38->addrlen);
  FUNC_37(&VAR_57, 0, sizeof(VAR_57));
  VAR_57.edns_present = 1;
  VAR_57.udp_size = VAR_0;
  FUNC_3(FUNC_48(VAR_35->buffer), VAR_40);
  FUNC_27(VAR_35->buffer, VAR_40, &VAR_43,
   *(uint16_t*)(void *)FUNC_48(VAR_35->buffer),
   FUNC_52(VAR_35->buffer, 2), &VAR_57);
  FUNC_42(VAR_39->scratchpad);
  FUNC_45(&VAR_39->stats, VAR_35->buffer);
  goto send_reply;
 }
 if(VAR_44.edns_present) {
  struct edns_option* VAR_58;
  if(VAR_44.edns_version != 0) {
   VAR_44.ext_rcode = (uint8_t)(VAR_3>>4);
   VAR_44.edns_version = VAR_1;
   VAR_44.udp_size = VAR_0;
   VAR_44.bits &= VAR_2;
   VAR_44.opt_list = ((void*)0);
   FUNC_59(VAR_26, "query with bad edns version.");
   FUNC_33(VAR_27,"from",&VAR_38->addr, VAR_38->addrlen);
   FUNC_27(VAR_35->buffer, VAR_3&0xf, &VAR_43,
    *(uint16_t*)(void *)FUNC_48(VAR_35->buffer),
    FUNC_52(VAR_35->buffer, 2), ((void*)0));
   if(FUNC_49(VAR_35->buffer) >=
      FUNC_51(VAR_35->buffer)+FUNC_16(&VAR_44))
    FUNC_14(VAR_35->buffer, &VAR_44);
   FUNC_42(VAR_39->scratchpad);
   goto send_reply;
  }
  if(VAR_44.udp_size < VAR_25 &&
     VAR_39->daemon->cfg->harden_short_bufsize) {
   FUNC_59(VAR_28, "worker request: EDNS bufsize %d ignored",
    (int)VAR_44.udp_size);
   FUNC_33(VAR_27,"from",&VAR_38->addr, VAR_38->addrlen);
   VAR_44.udp_size = VAR_25;
  }
  if(VAR_35->type != VAR_33) {
   VAR_58 = FUNC_26(VAR_44.opt_list, VAR_4);
   if(VAR_58 && VAR_58->opt_len > 0) {
    VAR_44.ext_rcode = 0;
    VAR_44.edns_version = VAR_1;
    VAR_44.udp_size = VAR_0;
    VAR_44.bits &= VAR_2;
    VAR_44.opt_list = ((void*)0);
    FUNC_59(VAR_26, "query with bad edns keepalive.");
    FUNC_33(VAR_27,"from",&VAR_38->addr, VAR_38->addrlen);
    FUNC_27(VAR_35->buffer, VAR_8, &VAR_43,
     *(uint16_t*)(void *)FUNC_48(VAR_35->buffer),
     FUNC_52(VAR_35->buffer, 2), ((void*)0));
    if(FUNC_49(VAR_35->buffer) >=
       FUNC_51(VAR_35->buffer)+FUNC_16(&VAR_44))
     FUNC_14(VAR_35->buffer, &VAR_44);
    FUNC_42(VAR_39->scratchpad);
    goto send_reply;
   }
  }
 }
 if(VAR_44.udp_size > VAR_39->daemon->cfg->max_udp_size &&
  VAR_35->type == VAR_33) {
  FUNC_59(VAR_28,
   "worker request: max UDP reply size modified"
   " (%d to max-udp-size)", (int)VAR_44.udp_size);
  FUNC_33(VAR_27,"from",&VAR_38->addr, VAR_38->addrlen);
  VAR_44.udp_size = VAR_39->daemon->cfg->max_udp_size;
 }
 if(VAR_44.udp_size < VAR_5) {
  FUNC_59(VAR_26, "worker request: edns is too small.");
  FUNC_33(VAR_27, "from", &VAR_38->addr, VAR_38->addrlen);
  FUNC_1(FUNC_48(VAR_35->buffer));
  FUNC_6(FUNC_48(VAR_35->buffer));
  FUNC_3(FUNC_48(VAR_35->buffer),
   VAR_10);
  FUNC_54(VAR_35->buffer, VAR_5);
  FUNC_55(VAR_35->buffer, 4,
   (uint8_t*)"\0\0\0\0\0\0\0\0", 8);
  FUNC_50(VAR_35->buffer);
  FUNC_42(VAR_39->scratchpad);
  goto send_reply;
 }
 if(VAR_39->stats.extended)
  FUNC_44(&VAR_39->stats, VAR_35, VAR_43.qtype,
   VAR_43.qclass, &VAR_44, VAR_38);
 if(VAR_35->type != VAR_33)
  VAR_44.udp_size = 65535;
 if(VAR_43.qclass == VAR_11 && FUNC_10(VAR_39, &VAR_43,
  &VAR_44, VAR_38, VAR_35->buffer)) {
  FUNC_45(&VAR_39->stats, VAR_35->buffer);
  FUNC_42(VAR_39->scratchpad);
  goto send_reply;
 }
 if(FUNC_0(FUNC_48(VAR_35->buffer)) ==
  VAR_7) {
  FUNC_13(VAR_39, &VAR_43, &VAR_44, VAR_35->buffer, VAR_38);
  FUNC_42(VAR_39->scratchpad);
  goto send_reply;
 }
 if(FUNC_31(VAR_39->daemon->local_zones, &VAR_39->env, &VAR_43,
  &VAR_44, VAR_35->buffer, VAR_39->scratchpad, VAR_38, VAR_46->taglist,
  VAR_46->taglen, VAR_46->tag_actions,
  VAR_46->tag_actions_size, VAR_46->tag_datas,
  VAR_46->tag_datas_size, VAR_39->daemon->cfg->tagname,
  VAR_39->daemon->cfg->num_tags, VAR_46->view)) {
  FUNC_42(VAR_39->scratchpad);
  if(FUNC_51(VAR_35->buffer) == 0) {
   FUNC_17(VAR_38);
   return 0;
  }
  FUNC_45(&VAR_39->stats, VAR_35->buffer);
  goto send_reply;
 }
 if(VAR_39->env.auth_zones &&
  FUNC_15(VAR_39->env.auth_zones, &VAR_39->env,
  &VAR_43, &VAR_44, VAR_38, VAR_35->buffer, VAR_39->scratchpad)) {
  FUNC_42(VAR_39->scratchpad);
  if(FUNC_51(VAR_35->buffer) == 0) {
   FUNC_17(VAR_38);
   return 0;
  }


  if(FUNC_5(FUNC_48(VAR_35->buffer)) &&
     VAR_45 != VAR_31 && VAR_45 != VAR_32)
   FUNC_2(FUNC_48(VAR_35->buffer));
  FUNC_45(&VAR_39->stats, VAR_35->buffer);
  goto send_reply;
 }



 if((VAR_40=FUNC_19(VAR_35, VAR_45, VAR_39, VAR_38)) != -1)
 {
  FUNC_42(VAR_39->scratchpad);
  if(VAR_40 == 1)
   goto send_reply;
  return VAR_40;
 }



 if(!(FUNC_5(FUNC_48(VAR_35->buffer))) &&
  VAR_45 == VAR_29 ) {
  FUNC_4(FUNC_48(VAR_35->buffer));
 }



 if(!(FUNC_5(FUNC_48(VAR_35->buffer))) &&
  VAR_45 != VAR_30 ) {
  FUNC_27(VAR_35->buffer, VAR_9, &VAR_43,
   *(uint16_t*)(void *)FUNC_48(VAR_35->buffer),
   FUNC_52(VAR_35->buffer, 2), ((void*)0));
  FUNC_42(VAR_39->scratchpad);
  FUNC_45(&VAR_39->stats, VAR_35->buffer);
  FUNC_33(VAR_26, "refused nonrec (cache snoop) query from",
   &VAR_38->addr, VAR_38->addrlen);
  goto send_reply;
 }



 if(VAR_43.local_alias) {
  struct ub_packed_rrset_key* VAR_59 = VAR_43.local_alias->rrset;
  struct packed_rrset_data* VAR_60 = VAR_59->entry.data;



  if(VAR_43.local_alias->next ||
   VAR_59->rk.type != FUNC_29(VAR_16) ||
   VAR_60->count != 1) {
   FUNC_34("assumption failure: unexpected local alias");
   FUNC_42(VAR_39->scratchpad);
   return 0;
  }
  VAR_43.qname = VAR_60->rr_data[0] + 2;
  VAR_43.qname_len = VAR_60->rr_len[0] - 2;
 }




 if(VAR_39->daemon->use_response_ip &&
  (VAR_43.qtype == VAR_12 ||
  VAR_43.qtype == VAR_13 ||
  VAR_43.qtype == VAR_14)) {
  VAR_54.taglist = VAR_46->taglist;
  VAR_54.taglen = VAR_46->taglen;
  VAR_54.tag_actions = VAR_46->tag_actions;
  VAR_54.tag_actions_size = VAR_46->tag_actions_size;
  VAR_54.tag_datas = VAR_46->tag_datas;
  VAR_54.tag_datas_size = VAR_46->tag_datas_size;
  VAR_54.view = VAR_46->view;
  VAR_54.respip_set = VAR_39->daemon->respip_set;
  VAR_53 = &VAR_54;
 }

lookup_cache:




 if(!FUNC_25(VAR_44.opt_list, &VAR_39->env)) {
  VAR_41 = FUNC_40(VAR_51, FUNC_52(VAR_35->buffer, 2));
  if((VAR_42=FUNC_47(VAR_39->env.msg_cache, VAR_41, VAR_51, 0))) {

   if(FUNC_11(VAR_39, &VAR_43,
    VAR_53, &VAR_48, &VAR_49, &VAR_50,
    (struct reply_info*)VAR_42->data,
    *(uint16_t*)(void *)FUNC_48(VAR_35->buffer),
    FUNC_52(VAR_35->buffer, 2), VAR_38,
    &VAR_44)) {




    if((VAR_39->env.cfg->prefetch || VAR_39->env.cfg->serve_expired)
     && *VAR_39->env.now >=
     ((struct reply_info*)VAR_42->data)->prefetch_ttl) {
     time_t VAR_61 = ((struct reply_info*)VAR_42->
      data)->ttl - *VAR_39->env.now;
     if(((struct reply_info*)VAR_42->data)->ttl
      < *VAR_39->env.now)
      VAR_61 = 0;
     FUNC_32(&VAR_42->lock);
     FUNC_43(VAR_39, VAR_51,
      FUNC_52(VAR_35->buffer, 2),
      VAR_38, VAR_61);
     if(!VAR_50) {
      VAR_47 = 0;
      FUNC_42(VAR_39->scratchpad);
      goto send_reply_rc;
     }
    } else if(!VAR_50) {
     FUNC_32(&VAR_42->lock);
     FUNC_42(VAR_39->scratchpad);
     goto send_reply;
    } else {


     FUNC_32(&VAR_42->lock);
    }






    FUNC_37(&VAR_52, 0, sizeof(VAR_52));
    FUNC_28(VAR_49, &VAR_52.qname,
     &VAR_52.qname_len);
    if(!VAR_52.qname) {
     FUNC_34("unexpected: invalid answer alias");
     FUNC_42(VAR_39->scratchpad);
     return 0;
    }
    VAR_52.qtype = VAR_43.qtype;
    VAR_52.qclass = VAR_43.qclass;
    VAR_51 = &VAR_52;
    goto lookup_cache;
   }
   FUNC_59(VAR_26, "answer from the cache failed");
   FUNC_32(&VAR_42->lock);
  }
  if(!FUNC_5(FUNC_48(VAR_35->buffer))) {
   if(FUNC_12(VAR_39, &VAR_43,
    *(uint16_t*)(void *)FUNC_48(VAR_35->buffer),
    FUNC_52(VAR_35->buffer, 2), VAR_38,
    &VAR_44)) {
    FUNC_42(VAR_39->scratchpad);
    goto send_reply;
   }
   FUNC_59(VAR_26, "answer norec from cache -- "
    "need to validate or not primed");
  }
 }
 FUNC_53(VAR_35->buffer);
 FUNC_46(&VAR_39->stats, VAR_39);

 if(VAR_34 >= VAR_27) {
  if(VAR_35->type == VAR_33)
   FUNC_33(VAR_27, "udp request from",
    &VAR_38->addr, VAR_38->addrlen);
  else FUNC_33(VAR_27, "tcp request from",
    &VAR_38->addr, VAR_38->addrlen);
 }


 FUNC_38(VAR_39->env.mesh, &VAR_43, VAR_53,
  FUNC_52(VAR_35->buffer, 2),
  &VAR_44, VAR_38, *(uint16_t*)(void *)FUNC_48(VAR_35->buffer));
 FUNC_42(VAR_39->scratchpad);
 FUNC_62(VAR_39, ((void*)0));
 return 0;

send_reply:
 VAR_47 = 1;
send_reply_rc:
 if(VAR_48) {
  FUNC_17(VAR_38);
  return 0;
 }





 if(VAR_39->env.cfg->log_replies)
 {
  struct timeval VAR_62 = {0, 0};
  if(VAR_43.local_alias && VAR_43.local_alias->rrset &&
   VAR_43.local_alias->rrset->rk.dname) {


   VAR_43.qname = VAR_43.local_alias->rrset->rk.dname;
   FUNC_36(0, &VAR_43, &VAR_38->addr, VAR_38->addrlen,
    VAR_62, 1, VAR_35->buffer);
  } else {
   FUNC_36(0, &VAR_43, &VAR_38->addr, VAR_38->addrlen,
    VAR_62, 1, VAR_35->buffer);
  }
 }





 return VAR_47;
}
