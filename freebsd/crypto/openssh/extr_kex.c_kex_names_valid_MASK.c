
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char**,char*) ;

int
FUNC_7(const char *VAR_0)
{
 char *VAR_1, *VAR_2, *VAR_3;

 if (VAR_0 == ((void*)0) || FUNC_4(VAR_0, "") == 0)
  return 0;
 if ((VAR_1 = VAR_2 = FUNC_5(VAR_0)) == ((void*)0))
  return 0;
 for ((VAR_3 = FUNC_6(&VAR_2, ",")); VAR_3 && *VAR_3 != '\0';
     (VAR_3 = FUNC_6(&VAR_2, ","))) {
  if (FUNC_3(VAR_3) == ((void*)0)) {
   FUNC_1("Unsupported KEX algorithm \"%.100s\"", VAR_3);
   FUNC_2(VAR_1);
   return 0;
  }
 }
 FUNC_0("kex names ok: [%s]", VAR_0);
 FUNC_2(VAR_1);
 return 1;
}
