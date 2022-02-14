
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;

rtx
FUNC_7 (enum rtx_code VAR_2, enum machine_mode VAR_3,
       rtx VAR_4[])
{
  int VAR_5;
  rtx VAR_6, VAR_7, VAR_8;

  VAR_8 = VAR_4[0];
  VAR_6 = VAR_4[1];
  VAR_7 = VAR_4[2];


  if (FUNC_2 (VAR_2) == VAR_1
      && (FUNC_6 (VAR_8, VAR_7)
   || FUNC_5 (VAR_6, VAR_3)))
    {
      rtx VAR_9 = VAR_6;
      VAR_6 = VAR_7;
      VAR_7 = VAR_9;
    }



  VAR_5 = 0;
  if (FUNC_1 (VAR_8) == VAR_0)
    {
      if (FUNC_6 (VAR_8, VAR_6))
 VAR_5 = 1;
      else if (FUNC_2 (VAR_2) == VAR_1
        && FUNC_6 (VAR_8, VAR_7))
 VAR_5 = 2;
      else
 VAR_8 = FUNC_4 (VAR_3);
    }


  if (FUNC_1 (VAR_6) == VAR_0 && FUNC_1 (VAR_7) == VAR_0)
    {
      if (VAR_5 != 2)
 VAR_7 = FUNC_3 (VAR_3, VAR_7);
      else
 VAR_6 = FUNC_3 (VAR_3, VAR_6);
    }



  if ((FUNC_0 (VAR_6)
       || (!VAR_5 && FUNC_1 (VAR_6) == VAR_0))
      && FUNC_2 (VAR_2) != VAR_1)
    VAR_6 = FUNC_3 (VAR_3, VAR_6);

  VAR_6 = VAR_4[1] = VAR_6;
  VAR_7 = VAR_4[2] = VAR_7;
  return VAR_8;
}
