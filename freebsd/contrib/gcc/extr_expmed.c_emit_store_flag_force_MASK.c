
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int,int,int ,int ,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int,scalar_t__,scalar_t__,int,int,int) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

rtx
FUNC_9 (rtx VAR_3, enum rtx_code VAR_4, rtx VAR_5, rtx VAR_6,
         enum machine_mode VAR_7, int VAR_8, int VAR_9)
{
  rtx VAR_10, VAR_11;


  VAR_10 = FUNC_5 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  if (VAR_10 != 0)
    return VAR_10;

  if (VAR_9 == 0)
    VAR_9 = 1;



  if (!FUNC_1 (VAR_3)
      || FUNC_8 (VAR_3, VAR_5) || FUNC_8 (VAR_3, VAR_6))
    VAR_3 = FUNC_7 (FUNC_0 (VAR_3));

  FUNC_4 (VAR_3, VAR_2);
  VAR_11 = FUNC_6 ();
  FUNC_2 (VAR_5, VAR_6, VAR_4, VAR_8, VAR_7, VAR_0,
      VAR_0, VAR_11);

  FUNC_4 (VAR_3, VAR_1);
  FUNC_3 (VAR_11);

  return VAR_3;
}
