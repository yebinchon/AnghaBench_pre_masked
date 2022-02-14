
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sake_parse_attr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct eap_sake_parse_attr*,int const,int const,int const*) ;
 int FUNC_1 (struct eap_sake_parse_attr*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3(const u8 *VAR_1, size_t VAR_2,
         struct eap_sake_parse_attr *VAR_3)
{
 const u8 *VAR_4 = VAR_1, *VAR_5 = VAR_1 + VAR_2;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 while (VAR_4 < VAR_5) {
  if (VAR_5 - VAR_4 < 2) {
   FUNC_2(VAR_0, "EAP-SAKE: Too short attribute");
   return -1;
  }

  if (VAR_4[1] < 2) {
   FUNC_2(VAR_0, "EAP-SAKE: Invalid attribute "
       "length (%d)", VAR_4[1]);
   return -1;
  }

  if (VAR_4 + VAR_4[1] > VAR_5) {
   FUNC_2(VAR_0, "EAP-SAKE: Attribute underflow");
   return -1;
  }

  if (FUNC_0(VAR_3, VAR_4[0], VAR_4[1] - 2, VAR_4 + 2))
   return -1;

  VAR_4 += VAR_4[1];
 }

 return 0;
}
