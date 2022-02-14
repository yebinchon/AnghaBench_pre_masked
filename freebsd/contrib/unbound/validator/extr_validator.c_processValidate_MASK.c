
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_26__ ;
typedef struct TYPE_33__ TYPE_1__ ;


struct val_qstate {scalar_t__ restart_count; TYPE_2__* chase_reply; TYPE_5__* key_entry; int qchase; TYPE_1__* orig_msg; int rrset_skip; int * signer_name; int state; } ;
struct val_env {int kcache; } ;
struct module_qstate {int reply_origin; TYPE_3__* env; int * errinf; int qinfo; int query_flags; } ;
typedef enum val_classification { ____Placeholder_val_classification } val_classification ;
struct TYPE_37__ {int key_class; int name; } ;
struct TYPE_36__ {int rrset_cache; } ;
struct TYPE_35__ {scalar_t__ security; int flags; int an_numrrsets; int rrset_count; scalar_t__ ar_numrrsets; scalar_t__ ns_numrrsets; } ;
struct TYPE_34__ {int flags; int an_numrrsets; int rrset_count; scalar_t__ ar_numrrsets; scalar_t__ ns_numrrsets; } ;
struct TYPE_33__ {TYPE_26__* rep; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;







 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_26__*) ;
 int FUNC_3 (struct module_qstate*,char*) ;
 int FUNC_4 (struct module_qstate*,int ) ;
 int FUNC_5 (int ,TYPE_5__*,struct module_qstate*) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ,char*,int ,int ,int ) ;
 int FUNC_10 (int ,char*,int *) ;
 int FUNC_11 (TYPE_2__*,TYPE_26__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_12 (scalar_t__) ;
 char* FUNC_13 (int) ;
 int FUNC_14 (int ,int *,int *,TYPE_26__*,int ) ;
 int FUNC_15 (struct module_qstate*,int) ;
 int FUNC_16 (TYPE_2__*,int ,int ,TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*,struct val_env*,int *,TYPE_2__*,TYPE_5__*) ;
 int FUNC_18 (TYPE_3__*,struct val_env*,int *,TYPE_2__*,TYPE_5__*) ;
 int FUNC_19 (TYPE_3__*,struct val_env*,int *,TYPE_2__*,TYPE_5__*) ;
 int FUNC_20 (struct module_qstate*,TYPE_3__*,struct val_env*,int *,TYPE_2__*,TYPE_5__*) ;
 int FUNC_21 (TYPE_3__*,struct val_env*,int *,TYPE_2__*,TYPE_5__*,int*) ;
 int FUNC_22 (TYPE_3__*,struct val_env*,int *,TYPE_2__*,TYPE_5__*) ;
 int FUNC_23 (TYPE_3__*,struct val_env*,int *,TYPE_2__*,TYPE_5__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_26(struct module_qstate* VAR_7, struct val_qstate* VAR_8,
 struct val_env* VAR_9, int VAR_10)
{
 enum val_classification VAR_11;
 int VAR_12;

 if(!VAR_8->key_entry) {
  FUNC_25(VAR_3, "validate: no key entry, failed");
  return FUNC_15(VAR_7, VAR_10);
 }


 VAR_8->state = VAR_1;


 if(FUNC_7(VAR_8->key_entry)) {
  FUNC_25(VAR_4, "Verified that %sresponse is INSECURE",
   VAR_8->signer_name?"":"unsigned ");
  VAR_8->chase_reply->security = VAR_6;
  FUNC_16(VAR_8->chase_reply, VAR_8->key_entry->name,
   VAR_7->env->rrset_cache, VAR_7->env);
  FUNC_5(VAR_9->kcache, VAR_8->key_entry, VAR_7);
  return 1;
 }

 if(FUNC_6(VAR_8->key_entry)) {
  FUNC_9(VAR_4, "Could not establish a chain "
   "of trust to keys for", VAR_8->key_entry->name,
   VAR_0, VAR_8->key_entry->key_class);
  VAR_8->chase_reply->security = VAR_5;
  FUNC_3(VAR_7, "while building chain of trust");
  if(VAR_8->restart_count >= VAR_2)
   FUNC_5(VAR_9->kcache, VAR_8->key_entry, VAR_7);
  return 1;
 }



 if(VAR_8->signer_name == ((void*)0)) {
  FUNC_10(VAR_3, "processValidate: state has no "
   "signer name", &VAR_8->qchase);
  FUNC_25(VAR_4, "Could not establish validation of "
            "INSECURE status of unsigned response.");
  FUNC_3(VAR_7, "no signatures");
  FUNC_4(VAR_7, VAR_7->reply_origin);
  VAR_8->chase_reply->security = VAR_5;
  return 1;
 }
 VAR_11 = FUNC_14(VAR_7->query_flags, &VAR_7->qinfo,
  &VAR_8->qchase, VAR_8->orig_msg->rep, VAR_8->rrset_skip);
 if(VAR_11 != 128)
  FUNC_11(VAR_8->chase_reply, VAR_8->orig_msg->rep);



 if(!FUNC_20(VAR_7, VAR_7->env, VAR_9, &VAR_8->qchase,
  VAR_8->chase_reply, VAR_8->key_entry)) {



  if((VAR_11 == 129 || VAR_11 == 134
   || VAR_11 == 133) &&
   FUNC_2(VAR_8->orig_msg->rep)) {

   VAR_8->orig_msg->rep->ns_numrrsets = 0;
   VAR_8->orig_msg->rep->ar_numrrsets = 0;
   VAR_8->orig_msg->rep->rrset_count =
    VAR_8->orig_msg->rep->an_numrrsets;
   VAR_8->chase_reply->ns_numrrsets = 0;
   VAR_8->chase_reply->ar_numrrsets = 0;
   VAR_8->chase_reply->rrset_count =
    VAR_8->chase_reply->an_numrrsets;
   VAR_7->errinf = ((void*)0);
  }
  else {
   FUNC_25(VAR_4, "Validate: message contains "
    "bad rrsets");
   return 1;
  }
 }

 switch(VAR_11) {
  case 129:
   FUNC_25(VAR_3, "Validating a positive response");
   FUNC_23(VAR_7->env, VAR_9,
    &VAR_8->qchase, VAR_8->chase_reply, VAR_8->key_entry);
   FUNC_25(VAR_4, "validate(positive): %s",
      FUNC_12(
    VAR_8->chase_reply->security));
   break;

  case 130:
   FUNC_25(VAR_3, "Validating a nodata response");
   FUNC_22(VAR_7->env, VAR_9,
    &VAR_8->qchase, VAR_8->chase_reply, VAR_8->key_entry);
   FUNC_25(VAR_4, "validate(nodata): %s",
      FUNC_12(
    VAR_8->chase_reply->security));
   break;

  case 131:
   VAR_12 = (int)FUNC_0(VAR_8->orig_msg->rep->flags);
   FUNC_25(VAR_3, "Validating a nxdomain response");
   FUNC_21(VAR_7->env, VAR_9,
    &VAR_8->qchase, VAR_8->chase_reply, VAR_8->key_entry, &VAR_12);
   FUNC_25(VAR_4, "validate(nxdomain): %s",
      FUNC_12(
    VAR_8->chase_reply->security));
   FUNC_1(VAR_8->orig_msg->rep->flags, VAR_12);
   FUNC_1(VAR_8->chase_reply->flags, VAR_12);
   break;

  case 133:
   FUNC_25(VAR_3, "Validating a cname response");
   FUNC_19(VAR_7->env, VAR_9,
    &VAR_8->qchase, VAR_8->chase_reply, VAR_8->key_entry);
   FUNC_25(VAR_4, "validate(cname): %s",
      FUNC_12(
    VAR_8->chase_reply->security));
   break;

  case 132:
   FUNC_25(VAR_3, "Validating a cname noanswer "
    "response");
   FUNC_18(VAR_7->env, VAR_9,
    &VAR_8->qchase, VAR_8->chase_reply, VAR_8->key_entry);
   FUNC_25(VAR_4, "validate(cname_noanswer): %s",
      FUNC_12(
    VAR_8->chase_reply->security));
   break;

  case 128:
   FUNC_25(VAR_3, "Validating a referral response");
   FUNC_24(VAR_8->chase_reply);
   FUNC_25(VAR_4, "validate(referral): %s",
      FUNC_12(
    VAR_8->chase_reply->security));
   break;

  case 134:
   FUNC_25(VAR_3, "Validating a positive ANY "
    "response");
   FUNC_17(VAR_7->env, VAR_9, &VAR_8->qchase,
    VAR_8->chase_reply, VAR_8->key_entry);
   FUNC_25(VAR_4, "validate(positive_any): %s",
      FUNC_12(
    VAR_8->chase_reply->security));
   break;

  default:
   FUNC_8("validate: unhandled response subtype: %d",
    VAR_11);
 }
 if(VAR_8->chase_reply->security == VAR_5) {
  if(VAR_11 == 129)
   FUNC_3(VAR_7, "wildcard");
  else FUNC_3(VAR_7, FUNC_13(VAR_11));
  FUNC_3(VAR_7, "proof failed");
  FUNC_4(VAR_7, VAR_7->reply_origin);
 }

 return 1;
}
