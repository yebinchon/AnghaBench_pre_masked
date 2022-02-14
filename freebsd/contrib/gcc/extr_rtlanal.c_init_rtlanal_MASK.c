
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int* VAR_1 ;
 char* FUNC_2 (char const*,char*) ;

void
FUNC_3 (void)
{
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
      const char *VAR_3 = FUNC_0 (VAR_2);
      const char *VAR_4 = FUNC_2 (VAR_3, "eEV");
      VAR_1[VAR_2] = VAR_4 ? VAR_4 - VAR_3 : -1;
    }

  FUNC_1 ();
}
