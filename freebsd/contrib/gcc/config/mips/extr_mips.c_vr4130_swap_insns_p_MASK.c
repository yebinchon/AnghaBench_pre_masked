
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum attr_vr4130_class { ____Placeholder_attr_vr4130_class } attr_vr4130_class ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_7 (rtx VAR_3, rtx VAR_4)
{
  rtx VAR_5;
  for (VAR_5 = FUNC_0 (VAR_3); VAR_5 != 0; VAR_5 = FUNC_3 (VAR_5, 1))
    if (FUNC_2 (VAR_5) == VAR_0
 && FUNC_1 (FUNC_3 (VAR_5, 0)) > FUNC_1 (VAR_4)
 && FUNC_5 (FUNC_3 (VAR_5, 0)) >= 0
 && FUNC_4 (FUNC_3 (VAR_5, 0)) == VAR_1)
      return 0;

  if (VAR_2 != 0
      && FUNC_5 (VAR_3) >= 0
      && FUNC_5 (VAR_4) >= 0)
    {



      enum attr_vr4130_class VAR_6 = FUNC_4 (VAR_3);
      enum attr_vr4130_class VAR_7 = FUNC_4 (VAR_4);
      if (VAR_6 != VAR_7 || VAR_6 == VAR_1)
 {


   bool VAR_8 = FUNC_6 (VAR_3);
   bool VAR_9 = FUNC_6 (VAR_4);
   if (VAR_8 != VAR_9)
     return VAR_8;





   if (VAR_6 != VAR_1
       && FUNC_5 (VAR_2) >= 0
       && VAR_6 == FUNC_4 (VAR_2))
     return 1;
 }
    }
  return 0;
}
