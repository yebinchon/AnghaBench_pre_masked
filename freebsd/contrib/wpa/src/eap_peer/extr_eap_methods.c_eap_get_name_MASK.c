
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {int vendor; scalar_t__ method; char const* name; struct eap_method* next; } ;
typedef scalar_t__ EapType ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct eap_method* VAR_2 ;

const char * FUNC_0(int VAR_3, EapType VAR_4)
{
 struct eap_method *VAR_5;
 if (VAR_3 == VAR_1 && VAR_4 == VAR_0)
  return "expanded";
 for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5->vendor == VAR_3 && VAR_5->method == VAR_4)
   return VAR_5->name;
 }
 return ((void*)0);
}
