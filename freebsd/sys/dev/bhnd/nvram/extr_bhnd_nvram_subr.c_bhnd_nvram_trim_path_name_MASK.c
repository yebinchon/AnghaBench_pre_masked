
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*,char**,int) ;

const char *
FUNC_3(const char *VAR_0)
{
 char *VAR_1;


 if (FUNC_0(*VAR_0)) {

  FUNC_2(VAR_0, &VAR_1, 10);
  if (VAR_1 != VAR_0 && *VAR_1 == ':') {

   return (VAR_1+1);
  }
 }


 if ((VAR_1 = FUNC_1(VAR_0, '/')) != ((void*)0)) {

  return (VAR_1+1);
 }


 return (VAR_0);
}
