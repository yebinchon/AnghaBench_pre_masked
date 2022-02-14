
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nai_realm_eap {int dummy; } ;
struct nai_realm {int eap_count; int * eap; int * realm; int encoding; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int * FUNC_1 (int const*,int) ;
 int* FUNC_2 (int *,int const*,int const*) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*,int const*,int) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static const u8 * FUNC_6(struct nai_realm *VAR_1, const u8 *VAR_2,
     const u8 *VAR_3)
{
 u16 VAR_4;
 const u8 *VAR_5;
 u8 VAR_6, VAR_7;

 if (VAR_3 - VAR_2 < 4) {
  FUNC_5(VAR_0, "No room for NAI Realm Data "
      "fixed fields");
  return ((void*)0);
 }

 VAR_4 = FUNC_0(VAR_2);
 VAR_2 += 2;
 if (VAR_4 > VAR_3 - VAR_2 || VAR_4 < 3) {
  FUNC_5(VAR_0, "No room for NAI Realm Data "
      "(len=%u; left=%u)",
      VAR_4, (unsigned int) (VAR_3 - VAR_2));
  return ((void*)0);
 }
 VAR_5 = VAR_2 + VAR_4;

 VAR_1->encoding = *VAR_2++;
 VAR_6 = *VAR_2++;
 if (VAR_6 > VAR_5 - VAR_2) {
  FUNC_5(VAR_0, "No room for NAI Realm "
      "(len=%u; left=%u)",
      VAR_6, (unsigned int) (VAR_5 - VAR_2));
  return ((void*)0);
 }
 FUNC_4(VAR_0, "NAI Realm", VAR_2, VAR_6);
 VAR_1->realm = FUNC_1(VAR_2, VAR_6);
 if (VAR_1->realm == ((void*)0))
  return ((void*)0);
 VAR_2 += VAR_6;

 if (VAR_5 - VAR_2 < 1) {
  FUNC_5(VAR_0, "No room for EAP Method Count");
  return ((void*)0);
 }
 VAR_1->eap_count = *VAR_2++;
 FUNC_5(VAR_0, "EAP Count: %u", VAR_1->eap_count);
 if (VAR_1->eap_count * 3 > VAR_5 - VAR_2) {
  FUNC_5(VAR_0, "No room for EAP Methods");
  return ((void*)0);
 }
 VAR_1->eap = FUNC_3(VAR_1->eap_count, sizeof(struct nai_realm_eap));
 if (VAR_1->eap == ((void*)0))
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_1->eap_count; VAR_7++) {
  VAR_2 = FUNC_2(&VAR_1->eap[VAR_7], VAR_2, VAR_5);
  if (VAR_2 == ((void*)0))
   return ((void*)0);
 }

 return VAR_5;
}
