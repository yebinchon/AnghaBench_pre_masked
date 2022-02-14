
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nai_realm_eap {int inner_non_eap; int inner_method; int cred_type; int tunneled_cred_type; int method; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int const*,int) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static const u8 * FUNC_2(struct nai_realm_eap *VAR_2, const u8 *VAR_3,
          const u8 *VAR_4)
{
 u8 VAR_5, VAR_6, VAR_7;
 const u8 *VAR_8;

 if (VAR_4 - VAR_3 < 3) {
  FUNC_1(VAR_1, "No room for EAP Method fixed fields");
  return ((void*)0);
 }

 VAR_5 = *VAR_3++;
 if (VAR_5 > VAR_4 - VAR_3 || VAR_5 < 2) {
  FUNC_1(VAR_1, "No room for EAP Method subfield");
  return ((void*)0);
 }
 VAR_8 = VAR_3 + VAR_5;
 VAR_2->method = *VAR_3++;
 VAR_6 = *VAR_3++;
 FUNC_1(VAR_1, "EAP Method: len=%u method=%u auth_count=%u",
     VAR_5, VAR_2->method, VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  u8 VAR_9, VAR_10;

  if (VAR_4 - VAR_3 < 2) {
   FUNC_1(VAR_1,
       "No room for Authentication Parameter subfield header");
   return ((void*)0);
  }

  VAR_9 = *VAR_3++;
  VAR_10 = *VAR_3++;
  if (VAR_10 > VAR_4 - VAR_3) {
   FUNC_1(VAR_1,
       "No room for Authentication Parameter subfield");
   return ((void*)0);
  }

  switch (VAR_9) {
  case 133:
   if (VAR_10 < 1)
    break;
   VAR_2->inner_non_eap = *VAR_3;
   if (VAR_2->method != VAR_0)
    break;
   switch (*VAR_3) {
   case 128:
    FUNC_1(VAR_1, "EAP-TTLS/PAP");
    break;
   case 131:
    FUNC_1(VAR_1, "EAP-TTLS/CHAP");
    break;
   case 130:
    FUNC_1(VAR_1, "EAP-TTLS/MSCHAP");
    break;
   case 129:
    FUNC_1(VAR_1, "EAP-TTLS/MSCHAPV2");
    break;
   }
   break;
  case 134:
   if (VAR_10 < 1)
    break;
   VAR_2->inner_method = *VAR_3;
   FUNC_1(VAR_1, "Inner EAP method: %u",
       VAR_2->inner_method);
   break;
  case 135:
   if (VAR_10 < 1)
    break;
   VAR_2->cred_type = *VAR_3;
   FUNC_1(VAR_1, "Credential Type: %u",
       VAR_2->cred_type);
   break;
  case 132:
   if (VAR_10 < 1)
    break;
   VAR_2->tunneled_cred_type = *VAR_3;
   FUNC_1(VAR_1, "Tunneled EAP Method Credential "
       "Type: %u", VAR_2->tunneled_cred_type);
   break;
  default:
   FUNC_1(VAR_1, "Unsupported Authentication "
       "Parameter: id=%u len=%u", VAR_9, VAR_10);
   FUNC_0(VAR_1, "Authentication Parameter "
        "Value", VAR_3, VAR_10);
   break;
  }

  VAR_3 += VAR_10;
 }

 return VAR_8;
}
