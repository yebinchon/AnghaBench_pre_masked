
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int,scalar_t__,scalar_t__) ;

rtx
FUNC_8 (enum rtx_code VAR_5, rtx VAR_6, rtx VAR_7)
{
  enum machine_mode VAR_8 = FUNC_7 (VAR_5, VAR_6, VAR_7);
  rtx VAR_9 = VAR_1;



  if (VAR_4
      && (FUNC_6 (FUNC_0 (VAR_4), VAR_8)
   == FUNC_0 (VAR_4)))
    VAR_9 = FUNC_5 (VAR_5, VAR_2, VAR_4, VAR_3);
  else
    {
      rtx VAR_10 = FUNC_3 (VAR_8, VAR_0);

      FUNC_1 (FUNC_4 (VAR_2, VAR_10, FUNC_2 (VAR_8, VAR_6, VAR_7)));
      VAR_9 = FUNC_5 (VAR_5, VAR_2, VAR_10, VAR_3);
    }
  VAR_4 = VAR_1;
  return VAR_9;
}
