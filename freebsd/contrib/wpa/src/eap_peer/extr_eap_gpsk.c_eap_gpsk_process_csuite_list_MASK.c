
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_gpsk_data {int dummy; } ;
struct eap_gpsk_csuite {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (struct eap_sm*,struct eap_gpsk_data*,int const*,size_t) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static const u8 * FUNC_3(struct eap_sm *VAR_1,
            struct eap_gpsk_data *VAR_2,
            const u8 **VAR_3,
            size_t *VAR_4,
            const u8 *VAR_5, const u8 *VAR_6)
{
 size_t VAR_7;

 if (VAR_5 == ((void*)0))
  return ((void*)0);

 if (VAR_6 - VAR_5 < 2) {
  FUNC_2(VAR_0, "EAP-GPSK: Too short GPSK-1 packet");
  return ((void*)0);
 }
 VAR_7 = FUNC_0(VAR_5);
 VAR_5 += 2;
 if (VAR_7 > (size_t) (VAR_6 - VAR_5)) {
  FUNC_2(VAR_0, "EAP-GPSK: CSuite_List overflow");
  return ((void*)0);
 }
 if (VAR_7 == 0 || (VAR_7 % sizeof(struct eap_gpsk_csuite))) {
  FUNC_2(VAR_0, "EAP-GPSK: Invalid CSuite_List len %lu",
      (unsigned long) VAR_7);
  return ((void*)0);
 }

 if (FUNC_1(VAR_1, VAR_2, VAR_5, VAR_7) < 0)
  return ((void*)0);

 *VAR_3 = VAR_5;
 *VAR_4 = VAR_7;
 VAR_5 += VAR_7;

 return VAR_5;
}
