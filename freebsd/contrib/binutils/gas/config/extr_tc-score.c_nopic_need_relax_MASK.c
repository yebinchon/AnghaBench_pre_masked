
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;


 char* VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_8 (symbolS * VAR_3, int VAR_4)
{
  if (VAR_3 == ((void*)0))
    return 0;
  else if (VAR_1 && VAR_2 > 0)
    {
      const char *VAR_5;
      const char *VAR_6;






      VAR_5 = FUNC_0 (VAR_3);
      if (VAR_5 != (const char *)((void*)0)
          && (FUNC_6 (VAR_5, "eprol") == 0
              || FUNC_6 (VAR_5, "etext") == 0
              || FUNC_6 (VAR_5, "_gp") == 0
              || FUNC_6 (VAR_5, "edata") == 0
              || FUNC_6 (VAR_5, "_fbss") == 0
              || FUNC_6 (VAR_5, "_fdata") == 0
              || FUNC_6 (VAR_5, "_ftext") == 0
              || FUNC_6 (VAR_5, "end") == 0
              || FUNC_6 (VAR_5, VAR_0) == 0))
        {
          return 1;
        }
      else if ((!FUNC_4 (VAR_3) || FUNC_3 (VAR_3)) && (0


               || (VAR_4
                   && FUNC_2 (VAR_3) == 0)
               || (FUNC_2 (VAR_3) != 0
                   && FUNC_2 (VAR_3) <= VAR_2)))
        {
          return 0;
        }

      VAR_6 = FUNC_5 (FUNC_1 (VAR_3));
      return (FUNC_6 (VAR_6, ".sdata") != 0
       && FUNC_6 (VAR_6, ".sbss") != 0
       && FUNC_7 (VAR_6, ".sdata.", 7) != 0
       && FUNC_7 (VAR_6, ".gnu.linkonce.s.", 16) != 0);
    }

  else
    return 1;
}
