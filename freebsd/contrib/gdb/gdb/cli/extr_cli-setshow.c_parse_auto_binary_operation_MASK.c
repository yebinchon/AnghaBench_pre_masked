
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum auto_boolean { ____Placeholder_auto_boolean } auto_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static enum auto_boolean
FUNC_4 (const char *VAR_3)
{
  if (VAR_3 != ((void*)0) && *VAR_3 != '\0')
    {
      int VAR_4 = FUNC_2 (VAR_3);
      while (FUNC_1 (VAR_3[VAR_4 - 1]) && VAR_4 > 0)
 VAR_4--;
      if (FUNC_3 (VAR_3, "on", VAR_4) == 0
   || FUNC_3 (VAR_3, "1", VAR_4) == 0
   || FUNC_3 (VAR_3, "yes", VAR_4) == 0
   || FUNC_3 (VAR_3, "enable", VAR_4) == 0)
 return VAR_2;
      else if (FUNC_3 (VAR_3, "off", VAR_4) == 0
        || FUNC_3 (VAR_3, "0", VAR_4) == 0
        || FUNC_3 (VAR_3, "no", VAR_4) == 0
        || FUNC_3 (VAR_3, "disable", VAR_4) == 0)
 return VAR_1;
      else if (FUNC_3 (VAR_3, "auto", VAR_4) == 0
        || (FUNC_3 (VAR_3, "-1", VAR_4) == 0 && VAR_4 > 1))
 return VAR_0;
    }
  FUNC_0 ("\"on\", \"off\" or \"auto\" expected.");
  return VAR_0;
}
