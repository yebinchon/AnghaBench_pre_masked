
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sim_attrs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int const*,int *,size_t) ;
 scalar_t__ FUNC_1 (int *,int *,struct eap_sim_attrs*,int,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int const*,size_t) ;
 int FUNC_4 (int ,char*,int *,size_t) ;
 int FUNC_5 (int ,char*) ;

u8 * FUNC_6(const u8 *VAR_2, const u8 *VAR_3,
   size_t VAR_4, const u8 *VAR_5,
   struct eap_sim_attrs *VAR_6, int VAR_7)
{
 u8 *VAR_8;

 if (!VAR_5) {
  FUNC_5(VAR_0, "EAP-SIM: Encrypted data, but no IV");
  return ((void*)0);
 }

 VAR_8 = FUNC_3(VAR_3, VAR_4);
 if (VAR_8 == ((void*)0))
  return ((void*)0);





 if (FUNC_0(VAR_2, VAR_5, VAR_8, VAR_4)) {
  FUNC_2(VAR_8);
  return ((void*)0);
 }

 FUNC_4(VAR_1, "EAP-SIM: Decrypted AT_ENCR_DATA",
      VAR_8, VAR_4);

 if (FUNC_1(VAR_8, VAR_8 + VAR_4, VAR_6,
          VAR_7, 1)) {
  FUNC_5(VAR_0, "EAP-SIM: (encr) Failed to parse "
      "decrypted AT_ENCR_DATA");
  FUNC_2(VAR_8);
  return ((void*)0);
 }

 return VAR_8;
}
