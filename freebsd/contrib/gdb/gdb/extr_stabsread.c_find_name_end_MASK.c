
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static char *
FUNC_2 (char *VAR_0)
{
  char *VAR_1 = VAR_0;
  if (VAR_1[0] == '-' || *VAR_1 == '+')
    {

      if (VAR_1[1] != '[')
 {
   FUNC_0 ("invalid symbol name \"%s\"", VAR_0);
 }
      VAR_1 = FUNC_1 (VAR_1, ']');
      if (VAR_1 == ((void*)0))
 {
   FUNC_0 ("invalid symbol name \"%s\"", VAR_0);
 }
      return FUNC_1 (VAR_1, ':');
    }
  else
    {
      return FUNC_1 (VAR_1, ':');
    }
}
