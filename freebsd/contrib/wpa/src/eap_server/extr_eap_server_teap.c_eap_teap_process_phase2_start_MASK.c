
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct eap_teap_data {int cmk_msk; int simck_msk; scalar_t__ identity_len; int * identity; } ;
struct eap_sm {int eap_teap_auth; int user_eap_method_index; TYPE_2__* user; scalar_t__ eap_teap_pac_no_inner; scalar_t__ identity_len; int * identity; } ;
struct TYPE_4__ {TYPE_1__* methods; } ;
struct TYPE_3__ {int method; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct eap_sm*,struct eap_teap_data*,int ) ;
 int FUNC_2 (struct eap_teap_data*,int ) ;
 scalar_t__ FUNC_3 (struct eap_sm*,int *,scalar_t__,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int *,scalar_t__) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct eap_sm *VAR_7,
      struct eap_teap_data *VAR_8)
{
 u8 VAR_9;

 if (VAR_8->identity) {

  FUNC_4(VAR_7->identity);
  VAR_7->identity = VAR_8->identity;
  VAR_8->identity = ((void*)0);
  VAR_7->identity_len = VAR_8->identity_len;
  VAR_8->identity_len = 0;
  if (FUNC_3(VAR_7, VAR_7->identity, VAR_7->identity_len, 1) != 0) {
   FUNC_5(VAR_3,
       "EAP-TEAP: Phase 2 Identity not found in the user database",
       VAR_7->identity, VAR_7->identity_len);
   VAR_9 = VAR_2;
   FUNC_2(VAR_8, VAR_6);
  } else if (VAR_7->eap_teap_pac_no_inner) {
   FUNC_6(VAR_3,
       "EAP-TEAP: Used PAC and identity already known - skip inner auth");



   FUNC_0(VAR_8->simck_msk,
         VAR_8->cmk_msk);
   FUNC_2(VAR_8, VAR_0);
   return 1;
  } else if (VAR_7->eap_teap_auth == 1) {
   FUNC_2(VAR_8, VAR_4);
   return 1;
  } else {
   FUNC_6(VAR_3,
       "EAP-TEAP: Identity already known - skip Phase 2 Identity Request");
   VAR_9 = VAR_7->user->methods[0].method;
   VAR_7->user_eap_method_index = 1;
   FUNC_2(VAR_8, VAR_6);
  }

 } else if (VAR_7->eap_teap_auth == 1) {
  FUNC_2(VAR_8, VAR_4);
  return 0;
 } else {
  FUNC_2(VAR_8, VAR_5);
  VAR_9 = VAR_1;
 }

 return FUNC_1(VAR_7, VAR_8, VAR_9);
}
