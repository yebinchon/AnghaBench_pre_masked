
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum attr_type { ____Placeholder_attr_type } attr_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;

 int VAR_5 ;


 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9 (rtx VAR_6, rtx VAR_7, rtx VAR_8, int VAR_9)
{
  enum attr_type VAR_10, VAR_11;
  rtx VAR_12 = FUNC_1(VAR_6);
  rtx VAR_13 = FUNC_1 (VAR_8);

  if (FUNC_7 (VAR_6) < 0 || FUNC_7 (VAR_8) < 0)
    return VAR_9;

  VAR_10 = FUNC_6 (VAR_6);
  VAR_11 = FUNC_6 (VAR_8);

  switch (FUNC_2 (VAR_7))
    {
    case 0:



      switch (VAR_10)
 {
 case 128:
 case 131:

   if (FUNC_0 (VAR_12) != VAR_1 || FUNC_0 (VAR_13) != VAR_1)
     return VAR_9;

   if (FUNC_8 (FUNC_3 (VAR_13), FUNC_4 (VAR_12)))
     return VAR_9;
   return VAR_9 + 3;

 case 130:
 case 129:
 case 132:


   if (VAR_11 == 128 || VAR_11 == 131)
     {
       if (FUNC_0 (VAR_12) != VAR_1 || FUNC_0 (VAR_13) != VAR_1
    || FUNC_0 (FUNC_3 (VAR_13)) != VAR_0
    || FUNC_0 (FUNC_4 (VAR_12)) != VAR_0
    || ! FUNC_8 (FUNC_5 (FUNC_3 (VAR_13), 0),
        FUNC_5 (FUNC_4 (VAR_12), 0)))
  return VAR_9 + 2;

       return VAR_9 + 8;
     }
   break;

 case 133:


   if (VAR_11 == VAR_2)
     return 0;


   if (VAR_11 == VAR_3)
     return VAR_9 - 1;
   break;
 default:
   break;
 }
 break;

    case 134:

      if (VAR_10 == VAR_4 || VAR_10 == VAR_5)
        return 0;
      break;

    default:
      break;
    }

  return VAR_9;
}
