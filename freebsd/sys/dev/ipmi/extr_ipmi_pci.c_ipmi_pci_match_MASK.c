
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct ipmi_ident {scalar_t__ vendor; scalar_t__ device; char const* desc; } ;


 struct ipmi_ident* VAR_0 ;

const char *
FUNC_0(uint16_t VAR_1, uint16_t VAR_2)
{
 struct ipmi_ident *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->vendor != 0; VAR_3++)
  if (VAR_3->vendor == VAR_1 && VAR_3->device == VAR_2)
   return (VAR_3->desc);
 return (((void*)0));
}
