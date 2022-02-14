
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int,unsigned int) ;
 int FUNC_8 (int ,int ) ;
 int VAR_5 ;

rtx
FUNC_9 (rtx VAR_6, unsigned int VAR_7, int VAR_8, enum machine_mode VAR_9)
{
  if (VAR_9 == VAR_2)
    VAR_9 = FUNC_0 (VAR_6);

  FUNC_5 (VAR_9 != VAR_2);


  if (VAR_9 != VAR_0
      && (FUNC_1 (VAR_9) < VAR_1))
    return 0;


  if (VAR_9 != VAR_0
      && (VAR_7 + 1) * VAR_1 > FUNC_1 (VAR_9))
    return VAR_3;


  if (FUNC_2 (VAR_6))
    {
      rtx VAR_10 = FUNC_4 (VAR_6, VAR_5, VAR_7 * VAR_1);

      if (! VAR_8)
 return VAR_10;

      else if (VAR_4)
 {
   if (! FUNC_8 (VAR_5, FUNC_3 (VAR_10, 0)))
     return 0;
 }
      else
 return FUNC_6 (VAR_10, FUNC_3 (VAR_10, 0));
    }


  return FUNC_7 (VAR_5, VAR_6, VAR_9, (VAR_7 * VAR_1));
}
