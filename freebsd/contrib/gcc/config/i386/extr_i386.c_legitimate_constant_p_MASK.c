
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;



 int FUNC_0 (int ) ;

 int VAR_0 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;

bool
FUNC_8 (rtx VAR_9)
{
  switch (FUNC_1 (VAR_9))
    {
    case 135:
      VAR_9 = FUNC_4 (VAR_9, 0);

      if (FUNC_1 (VAR_9) == VAR_2)
 {
   if (FUNC_1 (FUNC_4 (VAR_9, 1)) != VAR_0)
     return 0;
   VAR_9 = FUNC_4 (VAR_9, 0);
 }

      if (VAR_4 && FUNC_7 (VAR_9))
 return 1;


      if (FUNC_1 (VAR_9) == VAR_8)
 switch (FUNC_5 (VAR_9, 1))
   {
   case 130:
     return VAR_3;
   case 128:
   case 129:
     VAR_9 = FUNC_6 (VAR_9, 0, 0);
     return (FUNC_1 (VAR_9) == 132
      && FUNC_3 (VAR_9) == VAR_7);
   case 131:
     VAR_9 = FUNC_6 (VAR_9, 0, 0);
     return (FUNC_1 (VAR_9) == 132
      && FUNC_3 (VAR_9) == VAR_6);
   default:
     return 0;
   }


      if (FUNC_1 (VAR_9) == VAR_1)
 return 1;
      if (FUNC_1 (VAR_9) != 132)
 return 0;


    case 132:

      if (FUNC_3 (VAR_9))
 return 0;
      break;

    case 134:
      if (FUNC_2 (VAR_9) == VAR_5
   && VAR_9 != FUNC_0 (VAR_5)
          && !VAR_3)
 return 0;
      break;

    case 133:
      if (VAR_9 == FUNC_0 (FUNC_2 (VAR_9)))
 return 1;
      return 0;

    default:
      break;
    }


  return 1;
}
