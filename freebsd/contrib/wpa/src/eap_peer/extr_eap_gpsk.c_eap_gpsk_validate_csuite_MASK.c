
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_gpsk_data {int vendor; int specifier; } ;
struct eap_gpsk_csuite {int specifier; int vendor; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static const u8 * FUNC_3(struct eap_gpsk_data *VAR_1,
        const u8 *VAR_2, const u8 *VAR_3)
{
 int VAR_4, VAR_5;
 const struct eap_gpsk_csuite *VAR_6;

 if (VAR_2 == ((void*)0))
  return ((void*)0);

 if (VAR_3 - VAR_2 < (int) sizeof(*VAR_6)) {
  FUNC_2(VAR_0, "EAP-GPSK: Message too short for "
      "CSuite_Sel");
  return ((void*)0);
 }
 VAR_6 = (const struct eap_gpsk_csuite *) VAR_2;
 VAR_4 = FUNC_1(VAR_6->vendor);
 VAR_5 = FUNC_0(VAR_6->specifier);
 VAR_2 += sizeof(*VAR_6);
 if (VAR_4 != VAR_1->vendor || VAR_5 != VAR_1->specifier) {
  FUNC_2(VAR_0, "EAP-GPSK: CSuite_Sel (%d:%d) does not "
      "match with the one sent in GPSK-2 (%d:%d)",
      VAR_4, VAR_5, VAR_1->vendor, VAR_1->specifier);
  return ((void*)0);
 }

 return VAR_2;
}
