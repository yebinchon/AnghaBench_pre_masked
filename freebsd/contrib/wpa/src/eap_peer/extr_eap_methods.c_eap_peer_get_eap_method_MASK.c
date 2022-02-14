
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct eap_method {int vendor; scalar_t__ method; struct eap_method const* next; } const eap_method ;
typedef scalar_t__ EapType ;


 struct eap_method const* VAR_0 ;

const struct eap_method * FUNC_0(int VAR_1, EapType VAR_2)
{
 struct eap_method *VAR_3;
 for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->vendor == VAR_1 && VAR_3->method == VAR_2)
   return VAR_3;
 }
 return ((void*)0);
}
