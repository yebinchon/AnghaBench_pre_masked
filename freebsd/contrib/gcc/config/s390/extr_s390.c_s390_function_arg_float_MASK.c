
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static bool
FUNC_5 (enum machine_mode VAR_9, tree VAR_10)
{
  int VAR_11 = FUNC_4 (VAR_9, VAR_10);
  if (VAR_11 > 8)
    return 0;


  if (VAR_8)
    return 0;


  if (!VAR_10)
    return VAR_9 == VAR_7 || VAR_9 == VAR_1 || VAR_9 == VAR_6 || VAR_9 == VAR_0;



  while (FUNC_1 (VAR_10) == VAR_5)
    {
      tree VAR_12, VAR_13 = VAR_3;

      for (VAR_12 = FUNC_3 (VAR_10); VAR_12; VAR_12 = FUNC_0 (VAR_12))
 {
   if (FUNC_1 (VAR_12) != VAR_2)
     continue;

   if (VAR_13 == VAR_3)
     VAR_13 = FUNC_2 (VAR_12);
   else
     return 0;
 }

      if (VAR_13 == VAR_3)
 return 0;
      else
 VAR_10 = VAR_13;
    }

  return FUNC_1 (VAR_10) == VAR_4;
}
