
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dtat_class; int dtat_data; int dtat_name; } ;
typedef TYPE_1__ dtrace_attribute_t ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,char const*,char const*,char const*) ;

char *
FUNC_3(dtrace_attribute_t VAR_0, char *VAR_1, size_t VAR_2)
{
 const char *VAR_3 = FUNC_1(VAR_0.dtat_name);
 const char *VAR_4 = FUNC_1(VAR_0.dtat_data);
 const char *VAR_5 = FUNC_0(VAR_0.dtat_class);

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return (((void*)0));

 (void) FUNC_2(VAR_1, VAR_2, "%s/%s/%s", VAR_3, VAR_4, VAR_5);
 return (VAR_1);
}
