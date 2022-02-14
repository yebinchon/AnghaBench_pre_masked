
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {int version; int vendor; char const* name; int method; } ;
typedef int EapType ;


 struct eap_method* FUNC_0 (int) ;

struct eap_method * FUNC_1(int VAR_0, int VAR_1,
         EapType VAR_2, const char *VAR_3)
{
 struct eap_method *VAR_4;
 VAR_4 = FUNC_0(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_4->version = VAR_0;
 VAR_4->vendor = VAR_1;
 VAR_4->method = VAR_2;
 VAR_4->name = VAR_3;
 return VAR_4;
}
