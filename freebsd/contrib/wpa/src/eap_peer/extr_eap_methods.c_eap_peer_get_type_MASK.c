
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {int vendor; int method; int name; struct eap_method* next; } ;
typedef int EapType ;


 int VAR_0 ;
 int VAR_1 ;
 struct eap_method* VAR_2 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

EapType FUNC_1(const char *VAR_3, int *VAR_4)
{
 struct eap_method *VAR_5;
 for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next) {
  if (FUNC_0(VAR_5->name, VAR_3) == 0) {
   *VAR_4 = VAR_5->vendor;
   return VAR_5->method;
  }
 }
 *VAR_4 = VAR_1;
 return VAR_0;
}
