
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_17__ ;
typedef struct TYPE_21__ TYPE_12__ ;


typedef int uint8_t ;
struct TYPE_28__ {size_t qname_len; scalar_t__ qtype; scalar_t__ qclass; int * qname; } ;
struct val_qstate {scalar_t__ rrset_skip; scalar_t__ restart_count; size_t signer_len; int dlv_checked; void* state; TYPE_4__* chase_reply; TYPE_17__* key_entry; TYPE_8__ qchase; int * signer_name; TYPE_3__* orig_msg; scalar_t__ ds_rrset; int * empty_DS_name; } ;
struct val_env {int kcache; } ;
struct trust_anchor {scalar_t__ numDS; scalar_t__ numDNSKEY; int lock; int * name; } ;
struct TYPE_21__ {scalar_t__ qtype; int qname; } ;
struct module_qstate {TYPE_5__* env; int region; TYPE_12__ qinfo; int query_flags; } ;
typedef enum val_classification { ____Placeholder_val_classification } val_classification ;
struct TYPE_29__ {scalar_t__ rrset_count; TYPE_2__** rrsets; } ;
struct TYPE_27__ {int rrset_cache; int * now; int anchors; } ;
struct TYPE_26__ {void* security; } ;
struct TYPE_25__ {TYPE_9__* rep; } ;
struct TYPE_23__ {size_t dname_len; int flags; int type; int rrset_class; int * dname; } ;
struct TYPE_24__ {TYPE_1__ rk; } ;
struct TYPE_22__ {int * name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 struct trust_anchor* FUNC_0 (int ,int *,size_t,scalar_t__) ;
 int FUNC_1 (int **,size_t*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct module_qstate*,char*) ;
 int FUNC_5 (struct module_qstate*,char*,int *) ;
 TYPE_17__* FUNC_6 (int ,int *,size_t,scalar_t__,int ,int ) ;
 char* FUNC_7 (TYPE_17__*) ;
 scalar_t__ FUNC_8 (TYPE_17__*) ;
 scalar_t__ FUNC_9 (TYPE_17__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,TYPE_8__*,TYPE_4__*) ;
 int FUNC_12 (scalar_t__,char*,int *,int ,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct module_qstate*,struct val_qstate*,int,struct trust_anchor*) ;
 scalar_t__ FUNC_15 (int *,int ) ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,TYPE_12__*,TYPE_8__*,TYPE_9__*,scalar_t__) ;
 int FUNC_18 (struct module_qstate*,int) ;
 int FUNC_19 (TYPE_4__*,TYPE_9__*,scalar_t__,int *,size_t,int *) ;
 int FUNC_20 (int,TYPE_8__*,TYPE_9__*,size_t,int **,size_t*) ;
 int FUNC_21 (TYPE_4__*,int ,int ,TYPE_5__*) ;
 int FUNC_22 (TYPE_4__*,int *,int ,TYPE_5__*) ;
 int FUNC_23 (scalar_t__,char*,...) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int
FUNC_24(struct module_qstate* VAR_18, struct val_qstate* VAR_19,
 struct val_env* VAR_20, int VAR_21)
{
 uint8_t* VAR_22;
 size_t VAR_23;
 struct trust_anchor* VAR_24;
 enum val_classification VAR_25 = FUNC_17(
  VAR_18->query_flags, &VAR_18->qinfo, &VAR_19->qchase,
  VAR_19->orig_msg->rep, VAR_19->rrset_skip);
 if(VAR_19->restart_count > VAR_10) {
  FUNC_23(VAR_11, "restart count exceeded");
  return FUNC_18(VAR_18, VAR_21);
 }
 FUNC_23(VAR_11, "validator classification %s",
  FUNC_16(VAR_25));
 if(VAR_25 == VAR_7 &&
  VAR_19->rrset_skip < VAR_19->orig_msg->rep->rrset_count) {


  VAR_19->qchase.qname = VAR_19->orig_msg->rep->
   rrsets[VAR_19->rrset_skip]->rk.dname;
  VAR_19->qchase.qname_len = VAR_19->orig_msg->rep->
   rrsets[VAR_19->rrset_skip]->rk.dname_len;
  VAR_19->qchase.qtype = FUNC_13(VAR_19->orig_msg->rep->
   rrsets[VAR_19->rrset_skip]->rk.type);
  VAR_19->qchase.qclass = FUNC_13(VAR_19->orig_msg->rep->
   rrsets[VAR_19->rrset_skip]->rk.rrset_class);
 }
 VAR_22 = VAR_19->qchase.qname;
 VAR_23 = VAR_19->qchase.qname_len;


 if(VAR_19->qchase.qtype == VAR_1 ||
  (VAR_19->qchase.qtype == VAR_2 &&
   VAR_19->orig_msg->rep->rrset_count > VAR_19->rrset_skip &&
   FUNC_13(VAR_19->orig_msg->rep->rrsets[VAR_19->rrset_skip]->rk.type) ==
   VAR_2 &&
   !(VAR_19->orig_msg->rep->rrsets[VAR_19->rrset_skip]->
   rk.flags&VAR_3))) {
  FUNC_1(&VAR_22, &VAR_23);
 }

 FUNC_21(VAR_19->chase_reply, VAR_18->env->anchors,
  VAR_18->env->rrset_cache, VAR_18->env);
 VAR_19->key_entry = ((void*)0);
 VAR_19->empty_DS_name = ((void*)0);
 VAR_19->ds_rrset = 0;
 VAR_24 = FUNC_0(VAR_18->env->anchors,
  VAR_22, VAR_23, VAR_19->qchase.qclass);


 FUNC_20(VAR_25, &VAR_19->qchase, VAR_19->orig_msg->rep,
  VAR_19->rrset_skip, &VAR_19->signer_name, &VAR_19->signer_len);
 if(VAR_19->signer_name != ((void*)0) &&
  !FUNC_3(VAR_22, VAR_19->signer_name)) {
  FUNC_12(VAR_11, "this signer name is not a parent "
   "of lookupname, omitted", VAR_19->signer_name, 0, 0);
  VAR_19->signer_name = ((void*)0);
 }
 if(VAR_19->signer_name == ((void*)0)) {
  FUNC_12(VAR_11, "no signer, using", VAR_22,
   0, 0);
 } else {
  VAR_22 = VAR_19->signer_name;
  VAR_23 = VAR_19->signer_len;
  FUNC_12(VAR_11, "signer is", VAR_22, 0, 0);
 }


 if(VAR_25 == VAR_5 && VAR_19->signer_name &&
  VAR_24 && FUNC_2(VAR_24->name, VAR_22)){
  FUNC_10(&VAR_24->lock);
  VAR_24 = FUNC_0(VAR_18->env->anchors,
   VAR_22, VAR_23, VAR_19->qchase.qclass);
  if(!VAR_24) {
   FUNC_23(VAR_13, "unsigned parent zone denies"
    " trust anchor, indeterminate");
   VAR_19->chase_reply->security = VAR_15;
   VAR_19->state = VAR_9;
   return 1;
  }
  FUNC_23(VAR_11, "trust anchor NXDOMAIN by signed parent");
 } else if(VAR_25 == VAR_6 &&
  VAR_18->qinfo.qtype == VAR_0 &&
  FUNC_15(VAR_22, VAR_18->qinfo.qname) == 0) {


  FUNC_1(&VAR_22, &VAR_23);
 }

 if(VAR_19->rrset_skip > 0 || VAR_25 == VAR_4 ||
  VAR_25 == VAR_7) {


  FUNC_19(VAR_19->chase_reply, VAR_19->orig_msg->rep,
   VAR_19->rrset_skip, VAR_22, VAR_23,
   VAR_19->signer_name);
  if(VAR_17 >= VAR_11)
   FUNC_11("chased extract", &VAR_19->qchase,
    VAR_19->chase_reply);
 }

 VAR_19->key_entry = FUNC_6(VAR_20->kcache, VAR_22, VAR_23,
  VAR_19->qchase.qclass, VAR_18->region, *VAR_18->env->now);


 if(VAR_19->key_entry == ((void*)0) && VAR_24 == ((void*)0)) {

  VAR_19->chase_reply->security = VAR_15;

  VAR_19->state = VAR_9;
  return 1;
 }


 else if(VAR_19->key_entry == ((void*)0) || (VAR_24 &&
  FUNC_2(VAR_24->name, VAR_19->key_entry->name))) {

  if(VAR_24 && VAR_24->numDS == 0 && VAR_24->numDNSKEY == 0) {
   VAR_19->chase_reply->security = VAR_16;
   FUNC_22(VAR_19->chase_reply, VAR_24->name,
    VAR_18->env->rrset_cache, VAR_18->env);
   FUNC_10(&VAR_24->lock);
   VAR_19->dlv_checked=1;

   VAR_19->state = VAR_9;
   return 1;
  }

  FUNC_23(VAR_12, "prime trust anchor");
  if(!FUNC_14(VAR_18, VAR_19, VAR_21, VAR_24)) {
   FUNC_10(&VAR_24->lock);
   return FUNC_18(VAR_18, VAR_21);
  }
  FUNC_10(&VAR_24->lock);


  VAR_19->state = VAR_8;
  return 0;
 }
 if(VAR_24) {
  FUNC_10(&VAR_24->lock);
 }

 if(FUNC_9(VAR_19->key_entry)) {



  VAR_19->chase_reply->security = VAR_16;
  FUNC_22(VAR_19->chase_reply, VAR_19->key_entry->name,
   VAR_18->env->rrset_cache, VAR_18->env);

  VAR_19->state = VAR_9;
  return 1;
 } else if(FUNC_8(VAR_19->key_entry)) {

  FUNC_5(VAR_18, "key for validation", VAR_19->key_entry->name);
  FUNC_4(VAR_18, "is marked as invalid");
  if(FUNC_7(VAR_19->key_entry)) {
   FUNC_4(VAR_18, "because of a previous");
   FUNC_4(VAR_18, FUNC_7(VAR_19->key_entry));
  }

  VAR_19->restart_count = VAR_10;
  VAR_19->chase_reply->security = VAR_14;
  VAR_19->state = VAR_9;
  return 1;
 }



 VAR_19->state = VAR_8;
 return 1;
}
