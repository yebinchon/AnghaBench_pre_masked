
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dbus_bool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (scalar_t__) ;
 char const FUNC_2 (char const) ;

__attribute__((used)) static char * FUNC_3(const char *VAR_2)
{
 const char *VAR_3 = VAR_2;
 char *VAR_4, *VAR_5;
 dbus_bool_t VAR_6 = VAR_1;

 VAR_5 = VAR_4 = FUNC_1(FUNC_0(VAR_2) + 1);
 if (!VAR_4)
  return ((void*)0);
 while (VAR_3 && *VAR_3) {
  if (*VAR_3 == '_') {
   VAR_6 = VAR_1;
  } else {
   *VAR_5++ = VAR_6 ? FUNC_2(*VAR_3) : *VAR_3;
   VAR_6 = VAR_0;
  }
  VAR_3++;
 }

 return VAR_4;
}
