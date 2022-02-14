
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int * FUNC_3 (char const*,char) ;

int
FUNC_4(const char *VAR_0)
{

 if (VAR_0 == ((void*)0) || FUNC_3(VAR_0, '/') == ((void*)0)) {
  char *VAR_1;

  if ((VAR_1 = FUNC_2(VAR_0)) == ((void*)0))
   return -1;

  if (FUNC_0(VAR_1) == -1) {
   FUNC_1(VAR_1);
   return -1;
  }

  FUNC_1(VAR_1);
  return 0;
 } else
  return FUNC_0(VAR_0);
}
