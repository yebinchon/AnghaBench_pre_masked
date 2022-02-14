
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct packed_rrset_data {int dummy; } ;
typedef struct packed_rrset_data uint8_t ;
struct TYPE_5__ {void* data; int hash; } ;
struct TYPE_4__ {scalar_t__ type; size_t dname_len; struct packed_rrset_data* dname; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; TYPE_1__ rk; int id; } ;
struct reply_info {size_t an_numrrsets; size_t rrset_count; struct reply_info* rep; struct ub_packed_rrset_key** rrsets; int security; int ar_numrrsets; int ns_numrrsets; int serve_expired_ttl; int prefetch_ttl; int ttl; int qdcount; int flags; int qinfo; } ;
struct module_qstate {struct reply_info* return_msg; struct reply_info* region; TYPE_3__* env; int qinfo; } ;
struct dns_msg {size_t an_numrrsets; size_t rrset_count; struct dns_msg* rep; struct ub_packed_rrset_key** rrsets; int security; int ar_numrrsets; int ns_numrrsets; int serve_expired_ttl; int prefetch_ttl; int ttl; int qdcount; int flags; int qinfo; } ;
struct dns64_env {int dummy; } ;
struct TYPE_6__ {int rrset_cache; scalar_t__* modinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct reply_info* FUNC_0 (struct reply_info*,int ,int ,int ,int ,int ,size_t,int ,int ,size_t,int ) ;
 int FUNC_1 (struct ub_packed_rrset_key*,struct packed_rrset_data*,struct ub_packed_rrset_key*,struct packed_rrset_data**,struct reply_info*,struct dns64_env*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct reply_info*) ;
 int FUNC_4 (struct reply_info*,int ,int) ;
 int FUNC_5 (TYPE_3__*,struct packed_rrset_data*,size_t,int ,int ,int ) ;
 int FUNC_6 (struct packed_rrset_data*) ;
 size_t FUNC_7 (struct packed_rrset_data*) ;
 scalar_t__ FUNC_8 (struct reply_info*,int) ;
 scalar_t__ FUNC_9 (struct reply_info*,struct packed_rrset_data*,size_t) ;
 int FUNC_10 (struct reply_info*,int *,struct reply_info*) ;
 int FUNC_11 (int ,struct packed_rrset_data*,size_t,int ,int ,int ) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static void
FUNC_13(int VAR_4, struct module_qstate* VAR_5, struct module_qstate* VAR_6)
{
 struct dns64_env* VAR_7 = (struct dns64_env*)VAR_5->env->modinfo[VAR_4];
 struct reply_info *VAR_8, *VAR_9;
 size_t VAR_10, VAR_11;
 struct packed_rrset_data* VAR_12, *VAR_13;
 struct ub_packed_rrset_key* VAR_14, *VAR_15;

 FUNC_12(VAR_3, "converting A answers to AAAA answers");

 FUNC_3(VAR_5->region);
 FUNC_3(VAR_6->return_msg);
 FUNC_3(VAR_6->return_msg->rep);


 if(!VAR_5->return_msg) {
  VAR_5->return_msg = (struct dns_msg*)FUNC_8(
      VAR_5->region, sizeof(struct dns_msg));
  if(!VAR_5->return_msg)
   return;
  FUNC_4(VAR_5->return_msg, 0, sizeof(*VAR_5->return_msg));
  VAR_5->return_msg->qinfo = VAR_5->qinfo;
 }

 VAR_8 = VAR_6->return_msg->rep;




 VAR_9 = FUNC_0(VAR_5->region, VAR_8->flags, VAR_8->qdcount,
  VAR_8->ttl, VAR_8->prefetch_ttl, VAR_8->serve_expired_ttl,
  VAR_8->an_numrrsets, VAR_8->ns_numrrsets, VAR_8->ar_numrrsets,
  VAR_8->rrset_count, VAR_8->security);
 if(!VAR_9)
  return;


 if(!FUNC_10(VAR_9, ((void*)0), VAR_5->region)) {
  return;
 }


 for(VAR_10=0; VAR_10<VAR_9->rrset_count; VAR_10++) {
  VAR_14 = VAR_8->rrsets[VAR_10];
  VAR_15 = VAR_9->rrsets[VAR_10];
  VAR_12 = (struct packed_rrset_data*)VAR_14->entry.data;
  VAR_15->rk = VAR_14->rk;
  VAR_15->id = VAR_14->id;

  if(VAR_10<VAR_8->an_numrrsets && VAR_14->rk.type == FUNC_2(VAR_1)) {

   FUNC_1(VAR_14, VAR_12, VAR_15, &VAR_13, VAR_5->region, VAR_7);
   if(!VAR_13)
    return;


   FUNC_11(VAR_5->env->rrset_cache, VAR_15->rk.dname,
        VAR_15->rk.dname_len, VAR_2,
        VAR_0, 0);


   if(VAR_10 != 0)
       FUNC_5(VAR_5->env, VAR_15->rk.dname,
    VAR_15->rk.dname_len, VAR_2,
    VAR_0, 0);
  } else {
   VAR_15->entry.hash = VAR_14->entry.hash;
   VAR_15->rk.dname = (uint8_t*)FUNC_9(VAR_5->region,
    VAR_14->rk.dname, VAR_14->rk.dname_len);

   if(!VAR_15->rk.dname)
    return;

   VAR_11 = FUNC_7(VAR_12);
   VAR_13 = (struct packed_rrset_data*)FUNC_9(
    VAR_5->region, VAR_12, VAR_11);

   if(!VAR_13)
    return;
  }

  FUNC_6(VAR_13);
  VAR_15->entry.data = (void*)VAR_13;
 }


 VAR_5->return_msg->rep = VAR_9;
}
