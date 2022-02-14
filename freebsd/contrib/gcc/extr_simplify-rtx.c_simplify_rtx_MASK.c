
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int VAR_3 ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int,int,int *,int *) ;
 int * FUNC_8 (int,int,int *,int *) ;
 int * FUNC_9 (int,int *,int,int ) ;
 int * FUNC_10 (int,int,int,int *,int *) ;
 int * FUNC_11 (int,int,int,int *,int *,int *) ;
 int * FUNC_12 (int,int,int *,int) ;
 int FUNC_13 (int *,int *) ;

rtx
FUNC_14 (rtx VAR_4)
{
  enum rtx_code VAR_5 = FUNC_0 (VAR_4);
  enum machine_mode VAR_6 = FUNC_1 (VAR_4);

  switch (FUNC_2 (VAR_5))
    {
    case 128:
      return FUNC_12 (VAR_5, VAR_6,
           FUNC_5 (VAR_4, 0), FUNC_1 (FUNC_5 (VAR_4, 0)));
    case 134:
      if (FUNC_13 (FUNC_5 (VAR_4, 0), FUNC_5 (VAR_4, 1)))
 return FUNC_8 (VAR_5, VAR_6, FUNC_5 (VAR_4, 1), FUNC_5 (VAR_4, 0));



    case 136:
      return FUNC_7 (VAR_5, VAR_6, FUNC_5 (VAR_4, 0), FUNC_5 (VAR_4, 1));

    case 129:
    case 135:
      return FUNC_11 (VAR_5, VAR_6, FUNC_1 (FUNC_5 (VAR_4, 0)),
      FUNC_5 (VAR_4, 0), FUNC_5 (VAR_4, 1),
      FUNC_5 (VAR_4, 2));

    case 132:
    case 133:
      return FUNC_10 (VAR_5, VAR_6,
                                            ((FUNC_1 (FUNC_5 (VAR_4, 0))
                                             != VAR_3)
                                            ? FUNC_1 (FUNC_5 (VAR_4, 0))
                                            : FUNC_1 (FUNC_5 (VAR_4, 1))),
                                            FUNC_5 (VAR_4, 0),
                                            FUNC_5 (VAR_4, 1));

    case 131:
      if (VAR_5 == VAR_2)
 return FUNC_9 (VAR_6, FUNC_4 (VAR_4),
        FUNC_1 (FUNC_4 (VAR_4)),
        FUNC_3 (VAR_4));
      break;

    case 130:
      if (VAR_5 == VAR_1)
 {

   if (FUNC_0 (FUNC_5 (VAR_4, 0)) == VAR_0
       && FUNC_6 (FUNC_5 (FUNC_5 (VAR_4, 0), 0), FUNC_5 (VAR_4, 1)))
   return FUNC_5 (VAR_4, 1);
 }
      break;

    default:
      break;
    }
  return ((void*)0);
}
