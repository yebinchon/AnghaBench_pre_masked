
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int ,int ,int ) ;
 int FUNC_7 (int *) ;

bool
FUNC_8 (enum rtx_code VAR_7, enum machine_mode VAR_8,
      rtx VAR_9[])
{
  rtx VAR_10[6];


  if (VAR_8 == VAR_5 && (VAR_7 == 128 || VAR_7 == 129))
    return 0;
  if (VAR_8 == VAR_4 && (VAR_7 == 130 || VAR_7 == 131))
    return 0;


  if (VAR_8 == VAR_4 && VAR_7 == 129)
    {
      rtx VAR_11, VAR_12 = FUNC_3 (VAR_8);

      VAR_11 = FUNC_5 (VAR_8, VAR_9[1], VAR_9[2]);
      FUNC_0 (FUNC_4 (VAR_6, VAR_12, VAR_11));

      FUNC_0 (FUNC_2 (VAR_9[0], VAR_12, VAR_9[2]));
      return 1;
    }


  VAR_10[0] = VAR_9[0];
  VAR_10[4] = VAR_10[1] = VAR_9[1];
  VAR_10[5] = VAR_10[2] = VAR_9[2];

  switch (VAR_7)
    {
    case 128:
      VAR_7 = VAR_3;
      break;
    case 129:
      VAR_7 = VAR_1;
      break;
    case 130:
      VAR_7 = VAR_2;
      break;
    case 131:
      VAR_7 = VAR_0;
      break;
    default:
      FUNC_1 ();
    }
  VAR_10[3] = FUNC_6 (VAR_7, VAR_6, VAR_9[1], VAR_9[2]);

  FUNC_7 (VAR_10);
  return 1;
}
