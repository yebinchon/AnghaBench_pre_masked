
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_sm {int eap_sim_db_priv; } ;
struct eap_sim_attrs {int * auts; } ;
struct eap_aka_data {int auts_reported; void* notification; int rand; int permanent; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eap_sm*,struct eap_aka_data*) ;
 int FUNC_1 (struct eap_aka_data*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct eap_sm *VAR_4,
      struct eap_aka_data *VAR_5,
      struct wpabuf *VAR_6,
      struct eap_sim_attrs *VAR_7)
{
 FUNC_3(VAR_1, "EAP-AKA: Processing Synchronization-Failure");

 if (VAR_7->auts == ((void*)0)) {
  FUNC_3(VAR_2, "EAP-AKA: Synchronization-Failure "
      "message did not include valid AT_AUTS");
  VAR_5->notification = VAR_0;
  FUNC_1(VAR_5, VAR_3);
  return;
 }




 if (!VAR_5->auts_reported &&
     FUNC_2(VAR_4->eap_sim_db_priv, VAR_5->permanent,
         VAR_7->auts, VAR_5->rand)) {
  FUNC_3(VAR_2, "EAP-AKA: Resynchronization failed");
  VAR_5->notification = VAR_0;
  FUNC_1(VAR_5, VAR_3);
  return;
 }
 VAR_5->auts_reported = 1;


 FUNC_0(VAR_4, VAR_5);
}
