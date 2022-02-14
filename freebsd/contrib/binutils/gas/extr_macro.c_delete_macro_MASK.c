
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int macro_entry ;


 char FUNC_0 (char const) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int *) ;
 int VAR_0 ;
 size_t FUNC_7 (char const*) ;

void
FUNC_8 (const char *VAR_1)
{
  char *VAR_2;
  size_t VAR_3, VAR_4;
  macro_entry *VAR_5;

  VAR_4 = FUNC_7 (VAR_1);
  VAR_2 = (char *) FUNC_2 (VAR_4 + 1);
  for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3)
    VAR_2[VAR_3] = FUNC_0 (VAR_1[VAR_3]);
  VAR_2[VAR_3] = '\0';


  if ((VAR_5 = FUNC_5 (VAR_0, VAR_2)) != ((void*)0))
    {
      FUNC_6 (VAR_0, VAR_2, ((void*)0));
      FUNC_4 (VAR_5);
    }
  else
    FUNC_3 (FUNC_1("Attempt to purge non-existant macro `%s'"), VAR_2);
}
