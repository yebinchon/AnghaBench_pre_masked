
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;


 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;



 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int) ;

int
FUNC_9 (rtx VAR_2, int VAR_3)
{
  enum rtx_code VAR_4 = FUNC_2 (VAR_2);
  enum machine_mode VAR_5;
  int VAR_6;
  int VAR_7;
  rtx VAR_8;

  if (!FUNC_0 (VAR_2))
    return -1;

  VAR_8 = FUNC_5 (VAR_2, 0);

  FUNC_6 (FUNC_2 (VAR_8) == VAR_1 && FUNC_1 (FUNC_4 (VAR_8)));

  VAR_5 = FUNC_3 (VAR_8);
  VAR_6 = FUNC_4 (VAR_8);
  VAR_7 = 4 * (VAR_6 - VAR_0);

  FUNC_8 (VAR_4, VAR_5);



  FUNC_6 (!VAR_3
       || VAR_4 == 141 || VAR_4 == 138 || VAR_4 == 134 || VAR_4 == 128
       || VAR_4 == 137 || VAR_4 == 133);

  switch (VAR_4)
    {
    case 132:
      return VAR_3 ? VAR_7 + 3 : VAR_7 + 2;
    case 141:
      return VAR_7 + 2;
    case 138: case 137: case 129:
      return VAR_7 + 1;
    case 134: case 133: case 130:
      return VAR_7;
    case 131: case 128:
      return VAR_7 + 3;

    case 140: case 139:



      return VAR_3 ? VAR_7 + 3 : VAR_7;

    case 136: case 135:
      return VAR_3 ? VAR_7 + 3 : VAR_7 + 1;

    default:
      FUNC_7 ();
    }
}
