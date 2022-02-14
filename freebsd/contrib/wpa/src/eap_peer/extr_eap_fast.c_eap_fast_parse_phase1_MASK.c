
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_fast_data {int max_pac_list_len; int use_pac_binary_format; void* provisioning_allowed; } ;


 int VAR_0 ;
 void* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static void FUNC_3(struct eap_fast_data *VAR_1,
      const char *VAR_2)
{
 const char *VAR_3;

 VAR_3 = FUNC_1(VAR_2, "fast_provisioning=");
 if (VAR_3) {
  VAR_1->provisioning_allowed = FUNC_0(VAR_3 + 18);
  FUNC_2(VAR_0, "EAP-FAST: Automatic PAC provisioning "
      "mode: %d", VAR_1->provisioning_allowed);
 }

 VAR_3 = FUNC_1(VAR_2, "fast_max_pac_list_len=");
 if (VAR_3) {
  VAR_1->max_pac_list_len = FUNC_0(VAR_3 + 22);
  if (VAR_1->max_pac_list_len == 0)
   VAR_1->max_pac_list_len = 1;
  FUNC_2(VAR_0, "EAP-FAST: Maximum PAC list length: %lu",
      (unsigned long) VAR_1->max_pac_list_len);
 }

 VAR_3 = FUNC_1(VAR_2, "fast_pac_format=binary");
 if (VAR_3) {
  VAR_1->use_pac_binary_format = 1;
  FUNC_2(VAR_0, "EAP-FAST: Using binary format for PAC "
      "list");
 }
}
