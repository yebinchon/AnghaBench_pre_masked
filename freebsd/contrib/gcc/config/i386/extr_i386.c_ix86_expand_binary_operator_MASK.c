
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int ) ;
 int FUNC_8 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int,int,scalar_t__*) ;
 scalar_t__ VAR_4 ;

void
FUNC_10 (enum rtx_code VAR_5, enum machine_mode VAR_6,
        rtx VAR_7[])
{
  rtx VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

  VAR_10 = FUNC_9 (VAR_5, VAR_6, VAR_7);
  VAR_8 = VAR_7[1];
  VAR_9 = VAR_7[2];



  VAR_11 = FUNC_7 (VAR_3, VAR_10, FUNC_8 (VAR_5, VAR_6, VAR_8, VAR_9));
  if (VAR_4)
    {


      FUNC_2 (VAR_5 == VAR_2);
      FUNC_0 (VAR_11);
    }
  else
    {
      VAR_12 = FUNC_4 (VAR_3, FUNC_6 (VAR_0, VAR_1));
      FUNC_0 (FUNC_5 (VAR_3, FUNC_3 (2, VAR_11, VAR_12)));
    }


  if (VAR_10 != VAR_7[0])
    FUNC_1 (VAR_7[0], VAR_10);
}
