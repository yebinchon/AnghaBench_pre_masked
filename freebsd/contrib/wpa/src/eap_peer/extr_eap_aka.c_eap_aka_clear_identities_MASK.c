
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_aka_data {scalar_t__ last_eap_identity_len; int * last_eap_identity; scalar_t__ reauth_id_len; int * reauth_id; scalar_t__ use_pseudonym; scalar_t__ pseudonym_len; int * pseudonym; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eap_sm*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct eap_sm *VAR_4,
         struct eap_aka_data *VAR_5, int VAR_6)
{
 if ((VAR_6 & VAR_1) && VAR_5->pseudonym) {
  FUNC_2(VAR_3, "EAP-AKA: forgetting old pseudonym");
  FUNC_1(VAR_5->pseudonym);
  VAR_5->pseudonym = ((void*)0);
  VAR_5->pseudonym_len = 0;
  if (VAR_5->use_pseudonym)
   FUNC_0(VAR_4, ((void*)0), 0);
 }
 if ((VAR_6 & VAR_2) && VAR_5->reauth_id) {
  FUNC_2(VAR_3, "EAP-AKA: forgetting old reauth_id");
  FUNC_1(VAR_5->reauth_id);
  VAR_5->reauth_id = ((void*)0);
  VAR_5->reauth_id_len = 0;
 }
 if ((VAR_6 & VAR_0) && VAR_5->last_eap_identity) {
  FUNC_2(VAR_3, "EAP-AKA: forgetting old eap_id");
  FUNC_1(VAR_5->last_eap_identity);
  VAR_5->last_eap_identity = ((void*)0);
  VAR_5->last_eap_identity_len = 0;
 }
}
