
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,scalar_t__,int ) ;
 int FUNC_11 (int,int,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;

void
FUNC_13 (enum rtx_code VAR_5, enum machine_mode VAR_6,
       rtx VAR_7[])
{
  int VAR_8;
  rtx VAR_9, VAR_10, VAR_11, VAR_12;

  VAR_10 = VAR_7[0];
  VAR_9 = VAR_7[1];



  VAR_8 = 0;
  if (FUNC_0 (VAR_10))
    {
      if (FUNC_12 (VAR_10, VAR_9))
 VAR_8 = 1;
      else
 VAR_10 = FUNC_5 (VAR_6);
    }


  if (FUNC_0 (VAR_9) && !VAR_8)
    VAR_9 = FUNC_3 (VAR_6, VAR_9);



  VAR_11 = FUNC_10 (VAR_3, VAR_10, FUNC_11 (VAR_5, VAR_6, VAR_9));
  if (VAR_4 || VAR_5 == VAR_2)
    {


      FUNC_4 (VAR_5 == VAR_2);
      FUNC_1 (VAR_11);
    }
  else
    {
      VAR_12 = FUNC_7 (VAR_3, FUNC_9 (VAR_0, VAR_1));
      FUNC_1 (FUNC_8 (VAR_3, FUNC_6 (2, VAR_11, VAR_12)));
    }


  if (VAR_10 != VAR_7[0])
    FUNC_2 (VAR_7[0], VAR_10);
}
