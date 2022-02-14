
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eapol_sm {int eap; int eap_proxy; scalar_t__ use_eap_proxy; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,size_t*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,size_t*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int const*,size_t) ;
 int FUNC_5 (int ,char*,...) ;

int FUNC_6(struct eapol_sm *VAR_1, u8 *VAR_2, size_t VAR_3)
{
 const u8 *VAR_4;
 size_t VAR_5;
 if (VAR_1 == ((void*)0) || !FUNC_1(VAR_1->eap)) {
  FUNC_5(VAR_0, "EAPOL: EAP key not available");
  return -1;
 }
 VAR_4 = FUNC_0(VAR_1->eap, &VAR_5);
 if (VAR_4 == ((void*)0)) {
  FUNC_5(VAR_0, "EAPOL: Failed to get eapKeyData");
  return -1;
 }



 if (VAR_3 > VAR_5) {
  FUNC_5(VAR_0, "EAPOL: Requested key length (%lu) not "
      "available (len=%lu)",
      (unsigned long) VAR_3, (unsigned long) VAR_5);
  return VAR_5;
 }
 FUNC_4(VAR_2, VAR_4, VAR_3);
 FUNC_5(VAR_0, "EAPOL: Successfully fetched key (len=%lu)",
     (unsigned long) VAR_3);
 return 0;
}
