
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int) ;

enum machine_mode
FUNC_3 (rtx VAR_6, rtx VAR_7, bool VAR_8)
{
  int VAR_9, VAR_10;


  if (FUNC_0 (VAR_6) != VAR_4 || FUNC_0 (VAR_7) != VAR_4)
    return VAR_5;



  if (FUNC_1 (VAR_7) == 0)
    return VAR_3;



  if (FUNC_1 (VAR_7) == FUNC_1 (VAR_6))
    return VAR_2;





  if (VAR_8)
    {
      VAR_10 = FUNC_2 (FUNC_1 (VAR_7));
      VAR_9 = FUNC_2 (FUNC_1 (VAR_6) ^ FUNC_1 (VAR_7));
      if (VAR_9 != -1 && VAR_10 != -1)
        return VAR_9 > VAR_10 ? VAR_0 : VAR_1;
    }

  return VAR_5;
}
