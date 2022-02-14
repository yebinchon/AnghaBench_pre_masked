
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum attr_type { ____Placeholder_attr_type } attr_type ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8 (rtx VAR_7, rtx VAR_8, rtx VAR_9, int VAR_10)
{
  enum attr_type VAR_11;

  if (! FUNC_6 (VAR_7))
    return 0;

  VAR_11 = FUNC_5 (VAR_7);

  if (FUNC_2 (VAR_8) == 0)
    {







      if (VAR_11 == VAR_4 || VAR_11 == VAR_1)
 return VAR_10 + 3;


      if (VAR_11 == VAR_6 || VAR_11 == VAR_2)
 {
   rtx VAR_12 = FUNC_1(VAR_7);
   rtx VAR_13 = FUNC_1 (VAR_9);

   if (FUNC_0 (VAR_12) != VAR_0 || FUNC_0 (VAR_13) != VAR_0)
     return VAR_10;




   if (FUNC_7 (FUNC_3 (VAR_13), FUNC_4 (VAR_12)))
     return VAR_10;

   return VAR_10 + 3;
 }



      if (VAR_11 == VAR_5)
 return VAR_10 + 3;
    }
  else
    {







      if (VAR_11 == VAR_3 || VAR_11 == VAR_5)
 return 0;
    }

  return VAR_10;
}
