
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int location_t ;
typedef enum warn_strict_overflow_code { ____Placeholder_warn_strict_overflow_code } warn_strict_overflow_code ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__,int,int*) ;
 int FUNC_6 (int ,char*,int *,char const*) ;

tree
FUNC_7 (tree VAR_4, tree VAR_5)
{
  bool VAR_6;
  tree VAR_7;

  VAR_6 = 0;
  VAR_7 = FUNC_5 (VAR_4, 1, &VAR_6);

  if (VAR_7 && VAR_6)
    {
      enum warn_strict_overflow_code VAR_8;
      const char* VAR_9;

      if (FUNC_3 (VAR_7))
 {
   VAR_8 = VAR_2;
   VAR_9 = FUNC_2("assuming signed overflow does not occur when "
         "simplifying conditional to constant");
 }
      else
 {
   VAR_8 = VAR_1;
   VAR_9 = FUNC_2("assuming signed overflow does not occur when "
         "simplifying conditional");
 }

      if (FUNC_4 (VAR_8))
 {
   location_t VAR_10;

   if (!FUNC_0 (VAR_5))
     VAR_10 = VAR_3;
   else
     VAR_10 = FUNC_1 (VAR_5);
   FUNC_6 (VAR_0, "%H%s", &VAR_10, VAR_9);
 }
    }

  return VAR_7;
}
