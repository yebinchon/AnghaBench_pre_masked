
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,char*,char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char **VAR_1, char *VAR_2)
{
  char *VAR_3;

  VAR_3 = FUNC_1 (VAR_2);

  if (VAR_3 == ((void*)0))
    {
      FUNC_0 (&VAR_0,
   "Method has bad physname %s\n", VAR_2);
      return;
    }

  if (FUNC_2 (*VAR_1, VAR_3) != 0)
    {
      FUNC_3 (*VAR_1);
      *VAR_1 = VAR_3;
    }
  else
    FUNC_3 (VAR_3);
}
