
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char** VAR_5 ;
 int* VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    {
      int VAR_8;

      VAR_6[VAR_7] = -1;
      if (FUNC_1 (VAR_5[VAR_7], "iuu", 3) == 0)
 VAR_6[VAR_7] = 2;
      else if (VAR_7 == VAR_0 || VAR_7 == VAR_4 || VAR_7 == VAR_1 || VAR_7 == VAR_2)
 VAR_6[VAR_7] = 1;
      else
 for (VAR_8 = FUNC_0 (VAR_5[VAR_7]) - 1; VAR_8 >= 0; VAR_8--)
   if (VAR_5[VAR_7][VAR_8] == 'e' || VAR_5[VAR_7][VAR_8] == 'u')
     VAR_6[VAR_7] = VAR_8;
    }
}
