
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;






 int FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__,int ,scalar_t__,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static rtx
FUNC_12 (enum machine_mode VAR_6, rtx VAR_7)
{
  enum rtx_code VAR_8 = FUNC_1 (FUNC_5 (VAR_7, 0));
  HOST_WIDE_INT VAR_9;
  rtx VAR_10;

  VAR_9 = FUNC_2 (VAR_6);



  if (VAR_8 == 130 || VAR_8 == 133)
    VAR_9 = -VAR_9;
  else if (VAR_8 == 128 || VAR_8 == 131)
    {
      rtx VAR_11 = FUNC_5 (FUNC_5 (VAR_7, 0), 1);
      HOST_WIDE_INT VAR_12;

      FUNC_8 (FUNC_1 (VAR_11) == VAR_3 || FUNC_1 (VAR_11) == VAR_1);
      FUNC_8 (FUNC_1 (FUNC_5 (VAR_11, 1)) == VAR_0);
      VAR_12 = FUNC_3 (FUNC_5 (VAR_11, 1));
      if (FUNC_1 (VAR_11) == VAR_1)
 VAR_12 = -VAR_12;
      FUNC_8 (VAR_9 == VAR_12 || VAR_9 == -VAR_12);
      VAR_9 = VAR_12;
    }



  VAR_10 = FUNC_7 (VAR_4, VAR_3, VAR_5,
         FUNC_0 (VAR_9), VAR_5,
         0, VAR_2);
  if (VAR_10 != VAR_5)
    FUNC_6 (VAR_5, VAR_10);

  switch (VAR_8)
    {
    case 129:
    case 130:
    case 128:
      VAR_10 = VAR_5;
      break;
    case 132:
    case 133:
    case 131:
      VAR_10 = FUNC_10 (VAR_5, -VAR_9);
      break;
    default:
      FUNC_9 ();
    }

  return FUNC_11 (VAR_7, VAR_10);
}
