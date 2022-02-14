
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_teap_data {int cmk_emsk_available; scalar_t__ simck_idx; int cmk_emsk; int simck_emsk; int cmk_msk; int simck_msk; int phase2_priv; TYPE_1__* phase2_method; } ;
struct eap_sm {int eap_teap_auth; } ;
struct TYPE_2__ {int * (* get_emsk ) (struct eap_sm*,int ,size_t*) ;int * (* getKey ) (struct eap_sm*,int ,size_t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *,size_t,int *,size_t,int ,int ,int ,int ) ;
 int * FUNC_3 (struct eap_sm*,int ,size_t*) ;
 int * FUNC_4 (struct eap_sm*,int ,size_t*) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct eap_sm *VAR_2, struct eap_teap_data *VAR_3)
{
 u8 *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 size_t VAR_6 = 0, VAR_7 = 0;
 int VAR_8;

 FUNC_5(VAR_0, "EAP-TEAP: Deriving ICMK[%d] (S-IMCK and CMK)",
     VAR_3->simck_idx + 1);

 if (VAR_2->eap_teap_auth == 1)
  return FUNC_1(VAR_3->simck_msk,
        VAR_3->cmk_msk);

 if (!VAR_3->phase2_method || !VAR_3->phase2_priv) {
  FUNC_5(VAR_1, "EAP-TEAP: Phase 2 method not available");
  return -1;
 }

 if (VAR_3->phase2_method->getKey) {
  VAR_4 = VAR_3->phase2_method->getKey(VAR_2, VAR_3->phase2_priv,
        &VAR_6);
  if (!VAR_4) {
   FUNC_5(VAR_1,
       "EAP-TEAP: Could not fetch Phase 2 MSK");
   return -1;
  }
 }

 if (VAR_3->phase2_method->get_emsk) {
  VAR_5 = VAR_3->phase2_method->get_emsk(VAR_2, VAR_3->phase2_priv,
           &VAR_7);
 }

 VAR_8 = FUNC_2(VAR_3->simck_msk, VAR_3->simck_emsk,
       VAR_4, VAR_6, VAR_5, VAR_7,
       VAR_3->simck_msk, VAR_3->cmk_msk,
       VAR_3->simck_emsk, VAR_3->cmk_emsk);
 FUNC_0(VAR_4, VAR_6);
 FUNC_0(VAR_5, VAR_7);
 if (VAR_8 == 0) {
  VAR_3->simck_idx++;
  if (VAR_5)
   VAR_3->cmk_emsk_available = 1;
 }
 return 0;
}
