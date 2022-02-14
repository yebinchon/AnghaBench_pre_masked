
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct eap_sm {scalar_t__ currentMethod; size_t user_eap_method_index; int currentId; int * identity; int initiate_reauth_start_sent; TYPE_3__* user; void* start_reauth; void* update_user; int identity_len; int eap_method_priv; TYPE_1__* m; int eap_server; } ;
struct TYPE_6__ {TYPE_2__* methods; } ;
struct TYPE_5__ {scalar_t__ vendor; scalar_t__ method; } ;
struct TYPE_4__ {scalar_t__ (* isSuccess ) (struct eap_sm*,int ) ;scalar_t__ (* isDone ) (struct eap_sm*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 scalar_t__ FUNC_0 (struct eap_sm*) ;
 scalar_t__ FUNC_1 (struct eap_sm*,int *,int ,int ) ;
 scalar_t__ FUNC_2 (struct eap_sm*,int ) ;
 scalar_t__ FUNC_3 (struct eap_sm*,int ) ;
 scalar_t__ FUNC_4 (struct eap_sm*,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct eap_sm *VAR_12)
{
 if (!VAR_12->eap_server && VAR_12->identity && !VAR_12->start_reauth) {
  FUNC_5(VAR_10, "EAP: getDecision: -> PASSTHROUGH");
  return VAR_3;
 }

 if (VAR_12->m && VAR_12->currentMethod != VAR_6 &&
     VAR_12->m->isSuccess(VAR_12, VAR_12->eap_method_priv)) {
  FUNC_5(VAR_10, "EAP: getDecision: method succeeded -> "
      "SUCCESS");
  VAR_12->update_user = VAR_11;
  return VAR_4;
 }

 if (VAR_12->m && VAR_12->m->isDone(VAR_12, VAR_12->eap_method_priv) &&
     !VAR_12->m->isSuccess(VAR_12, VAR_12->eap_method_priv)) {
  FUNC_5(VAR_10, "EAP: getDecision: method failed -> "
      "FAILURE");
  VAR_12->update_user = VAR_11;
  return VAR_1;
 }

 if ((VAR_12->user == ((void*)0) || VAR_12->update_user) && VAR_12->identity &&
     !VAR_12->start_reauth) {






  int VAR_13 = 0;
  if (VAR_12->user && VAR_12->currentMethod == VAR_6 &&
      VAR_12->user->methods[0].vendor == VAR_8 &&
      VAR_12->user->methods[0].method == VAR_6)
   VAR_13 = 1;
  if (FUNC_1(VAR_12, VAR_12->identity, VAR_12->identity_len, 0) != 0) {
   FUNC_5(VAR_10, "EAP: getDecision: user not "
       "found from database -> FAILURE");
   return VAR_1;
  }
  if (VAR_13 && VAR_12->user &&
      VAR_12->user->methods[0].vendor == VAR_8 &&
      VAR_12->user->methods[0].method == VAR_6) {
   FUNC_5(VAR_10, "EAP: getDecision: stop "
       "identity request loop -> FAILURE");
   VAR_12->update_user = VAR_11;
   return VAR_1;
  }
  VAR_12->update_user = VAR_9;
 }
 VAR_12->start_reauth = VAR_9;

 if (VAR_12->user && VAR_12->user_eap_method_index < VAR_5 &&
     (VAR_12->user->methods[VAR_12->user_eap_method_index].vendor !=
      VAR_8 ||
      VAR_12->user->methods[VAR_12->user_eap_method_index].method !=
      VAR_7)) {
  FUNC_5(VAR_10, "EAP: getDecision: another method "
      "available -> CONTINUE");
  return VAR_0;
 }

 if (!VAR_12->identity && FUNC_0(VAR_12) &&
     !VAR_12->initiate_reauth_start_sent) {
  FUNC_5(VAR_10,
      "EAP: getDecision: send EAP-Initiate/Re-auth-Start");
  return VAR_2;
 }

 if (VAR_12->identity == ((void*)0) || VAR_12->currentId == -1) {
  FUNC_5(VAR_10, "EAP: getDecision: no identity known "
      "yet -> CONTINUE");
  return VAR_0;
 }

 FUNC_5(VAR_10, "EAP: getDecision: no more methods available -> "
     "FAILURE");
 return VAR_1;
}
