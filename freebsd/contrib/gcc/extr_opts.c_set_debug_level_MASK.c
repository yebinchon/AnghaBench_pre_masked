
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum debug_info_type { ____Placeholder_debug_info_type } debug_info_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 char const** VAR_5 ;
 int FUNC_0 (char*,char const*) ;
 unsigned int FUNC_1 (char const*) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3 (enum debug_info_type VAR_8, int VAR_9, const char *VAR_10)
{
  static bool VAR_11;

  VAR_6 = VAR_9;

  if (VAR_8 == VAR_2)
    {
      if (VAR_7 == VAR_2)
 {
   VAR_7 = VAR_3;

   if (VAR_9 == 2)
     {





     }

   if (VAR_7 == VAR_2)
     FUNC_2 (0, "target system does not support debug output");
 }
    }
  else
    {

      if (VAR_11 && VAR_7 != VAR_2 && VAR_8 != VAR_7)
 FUNC_0 ("debug format \"%s\" conflicts with prior selection",
        VAR_5[VAR_8]);
      VAR_7 = VAR_8;
      VAR_11 = 1;
    }


  if (*VAR_10 == '\0')
    {
      if (!VAR_4)
 VAR_4 = 2;
    }
  else
    {
      VAR_4 = FUNC_1 (VAR_10);
      if (VAR_4 == (unsigned int) -1)
 FUNC_0 ("unrecognised debug output level \"%s\"", VAR_10);
      else if (VAR_4 > 3)
 FUNC_0 ("debug output level %s is too high", VAR_10);
    }
}
