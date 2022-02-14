
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

bool
FUNC_7 (rtx VAR_3)
{
  rtx VAR_4;

  switch (FUNC_0 (VAR_3))
    {
    case 128:

      if (FUNC_4 (VAR_3))
 return 0;
      break;

    case 131:
      VAR_4 = FUNC_5 (VAR_3, 0);



      if (FUNC_0 (VAR_4) == VAR_0
   && FUNC_3 (FUNC_5 (VAR_4, 0)))
 return 0;
      break;

    case 130:
      if (FUNC_1 (VAR_3) == VAR_2)
        return 1;



      if (VAR_1
   && FUNC_2 (FUNC_1 (VAR_3))
   && FUNC_6 (VAR_3, FUNC_1 (VAR_3)))
 return 1;

      return 0;

    case 129:


      if (VAR_1
   && FUNC_6 (VAR_3, FUNC_1 (VAR_3)))
 return 1;

      return 0;

    default:
      break;
    }

  return 1;
}
