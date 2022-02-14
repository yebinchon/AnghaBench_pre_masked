
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const) ;

isc_boolean_t
FUNC_2(const char *VAR_2) {
 FUNC_0(VAR_2 != ((void*)0));




 if ((VAR_2[0] == '\\') && (VAR_2[1] == '\\'))
  return (VAR_1);
 if (FUNC_1(VAR_2[0]) && VAR_2[1] == ':' && VAR_2[2] == '\\')
  return (VAR_1);
 if (FUNC_1(VAR_2[0]) && VAR_2[1] == ':' && VAR_2[2] == '/')
  return (VAR_1);
 return (VAR_0);
}
