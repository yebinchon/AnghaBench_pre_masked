
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char**,int ) ;

int
FUNC_5(const char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;

 if (VAR_1 == ((void*)0) || FUNC_2(VAR_1, "") == 0)
  return 0;
 if ((VAR_2 = VAR_3 = FUNC_3(VAR_1)) == ((void*)0))
  return 0;
 for ((VAR_4 = FUNC_4(&VAR_3, VAR_0)); VAR_4 && *VAR_4 != '\0';
     (VAR_4 = FUNC_4(&VAR_3, VAR_0))) {
  if (FUNC_1(((void*)0), VAR_4) < 0) {
   FUNC_0(VAR_2);
   return 0;
  }
 }
 FUNC_0(VAR_2);
 return 1;
}
