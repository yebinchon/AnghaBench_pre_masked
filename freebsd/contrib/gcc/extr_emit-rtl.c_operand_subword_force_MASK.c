
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,unsigned int,int,int) ;

rtx
FUNC_5 (rtx VAR_2, unsigned int VAR_3, enum machine_mode VAR_4)
{
  rtx VAR_5 = FUNC_4 (VAR_2, VAR_3, 1, VAR_4);

  if (VAR_5)
    return VAR_5;

  if (VAR_4 != VAR_0 && VAR_4 != VAR_1)
    {


      if (FUNC_0 (VAR_2))
 VAR_2 = FUNC_1 (VAR_2);
      else
 VAR_2 = FUNC_2 (VAR_4, VAR_2);
    }

  VAR_5 = FUNC_4 (VAR_2, VAR_3, 1, VAR_4);
  FUNC_3 (VAR_5);

  return VAR_5;
}
