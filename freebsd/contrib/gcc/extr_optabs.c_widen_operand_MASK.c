
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int,int,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int,int ,int ) ;

__attribute__((used)) static rtx
FUNC_13 (rtx VAR_3, enum machine_mode VAR_4, enum machine_mode VAR_5,
        int VAR_6, int VAR_7)
{
  rtx VAR_8;


  if (VAR_7 && FUNC_1 (VAR_3) == VAR_2)
    return VAR_3;




  if (! VAR_7
      || (FUNC_0 (VAR_3) == VAR_0 && FUNC_4 (VAR_3)
   && FUNC_3 (VAR_3) == VAR_6))
    return FUNC_5 (VAR_4, VAR_5, VAR_3, VAR_6);



  if (FUNC_2 (VAR_4) <= VAR_1)
    return FUNC_12 (VAR_4, FUNC_8 (FUNC_1 (VAR_3), VAR_3), 0);




  VAR_8 = FUNC_10 (VAR_4);
  FUNC_6 (FUNC_11 (VAR_2, VAR_8));
  FUNC_7 (FUNC_9 (FUNC_1 (VAR_3), VAR_8), VAR_3);
  return VAR_8;
}
