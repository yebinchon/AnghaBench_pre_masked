
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char const**) ;
 char* FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2 (struct work_stuff *VAR_4, const char *VAR_5,
        int VAR_6, const char **VAR_7, const char **VAR_8)
{


  if ((VAR_0 || VAR_3) && (*VAR_7 = FUNC_1 (VAR_5, "__pt__")))
    {
      int VAR_9;
      *VAR_8 = *VAR_7 + 6;
      VAR_9 = FUNC_0 (VAR_8);
      if (VAR_9 == -1)
 return 0;
      if (*VAR_8 + VAR_9 == VAR_5 + VAR_6 && **VAR_8 == '_')
 {
   ++*VAR_8;
   return 1;
 }
    }
  if (VAR_1 || VAR_2)
    {
      if ((*VAR_7 = FUNC_1 (VAR_5, "__tm__"))
          || (*VAR_7 = FUNC_1 (VAR_5, "__ps__"))
          || (*VAR_7 = FUNC_1 (VAR_5, "__pt__")))
        {
          int VAR_10;
          *VAR_8 = *VAR_7 + 6;
          VAR_10 = FUNC_0 (VAR_8);
   if (VAR_10 == -1)
     return 0;
          if (*VAR_8 + VAR_10 == VAR_5 + VAR_6 && **VAR_8 == '_')
            {
              ++*VAR_8;
              return 1;
            }
        }
      else if ((*VAR_7 = FUNC_1 (VAR_5, "__S")))
        {
    int VAR_11;
    *VAR_8 = *VAR_7 + 3;
    VAR_11 = FUNC_0 (VAR_8);
   if (VAR_11 == -1)
     return 0;
    if (*VAR_8 + VAR_11 == VAR_5 + VAR_6 && **VAR_8 == '_')
            {
              ++*VAR_8;
        return 1;
            }
        }
    }

  return 0;
}
