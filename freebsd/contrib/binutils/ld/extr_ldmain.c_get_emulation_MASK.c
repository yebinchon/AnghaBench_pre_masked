
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static char *
FUNC_5 (int VAR_2, char **VAR_3)
{
  char *VAR_4;
  int VAR_5;

  VAR_4 = FUNC_3 (VAR_1);
  if (VAR_4 == ((void*)0))
    VAR_4 = VAR_0;

  for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++)
    {
      if (FUNC_0 (VAR_3[VAR_5], "-m"))
 {
   if (VAR_3[VAR_5][2] == '\0')
     {

       if (VAR_5 < VAR_2 - 1)
  {
    VAR_4 = VAR_3[VAR_5 + 1];
    VAR_5++;
  }
       else
  FUNC_2 (FUNC_1("%P%F: missing argument to -m\n"));
     }
   else if (FUNC_4 (VAR_3[VAR_5], "-mips1") == 0
     || FUNC_4 (VAR_3[VAR_5], "-mips2") == 0
     || FUNC_4 (VAR_3[VAR_5], "-mips3") == 0
     || FUNC_4 (VAR_3[VAR_5], "-mips4") == 0
     || FUNC_4 (VAR_3[VAR_5], "-mips5") == 0
     || FUNC_4 (VAR_3[VAR_5], "-mips32") == 0
     || FUNC_4 (VAR_3[VAR_5], "-mips32r2") == 0
     || FUNC_4 (VAR_3[VAR_5], "-mips64") == 0
     || FUNC_4 (VAR_3[VAR_5], "-mips64r2") == 0)
     {







     }
   else if (FUNC_4 (VAR_3[VAR_5], "-m486") == 0)
     {



     }
   else
     {

       VAR_4 = &VAR_3[VAR_5][2];
     }
 }
    }

  return VAR_4;
}
