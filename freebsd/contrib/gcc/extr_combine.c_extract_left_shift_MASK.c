
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;



 int VAR_1 ;

 int FUNC_4 (int ,int) ;

 int FUNC_5 (int,int,int ,int ) ;
 int FUNC_6 (int,int,int ,int) ;
 int FUNC_7 (int ,int const,int,int ,int ) ;

__attribute__((used)) static rtx
FUNC_8 (rtx VAR_2, int VAR_3)
{
  enum rtx_code VAR_4 = FUNC_1 (VAR_2);
  enum machine_mode VAR_5 = FUNC_2 (VAR_2);
  rtx VAR_6;

  switch (VAR_4)
    {
    case 133:



      if (FUNC_1 (FUNC_4 (VAR_2, 1)) == VAR_0
   && FUNC_3 (FUNC_4 (VAR_2, 1)) >= VAR_3)
 return FUNC_7 (VAR_1, 133, VAR_5, FUNC_4 (VAR_2, 0),
         FUNC_3 (FUNC_4 (VAR_2, 1)) - VAR_3);
      break;

    case 131: case 130:
      if ((VAR_6 = FUNC_8 (FUNC_4 (VAR_2, 0), VAR_3)) != 0)
 return FUNC_6 (VAR_4, VAR_5, VAR_6, VAR_5);

      break;

    case 129: case 132: case 128: case 134:


      if (FUNC_1 (FUNC_4 (VAR_2, 1)) == VAR_0
   && (FUNC_3 (FUNC_4 (VAR_2, 1)) & ((((HOST_WIDE_INT) 1 << VAR_3)) - 1)) == 0
   && (VAR_6 = FUNC_8 (FUNC_4 (VAR_2, 0), VAR_3)) != 0)
 return FUNC_5 (VAR_4, VAR_5, VAR_6,
        FUNC_0 (FUNC_3 (FUNC_4 (VAR_2, 1)) >> VAR_3));

      break;

    default:
      break;
    }

  return 0;
}
