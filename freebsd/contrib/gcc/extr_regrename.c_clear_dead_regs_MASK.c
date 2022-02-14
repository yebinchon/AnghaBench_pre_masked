
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HARD_REG_SET ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int VAR_0 ;
 size_t FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int) ;
 int** VAR_1 ;

__attribute__((used)) static void
FUNC_7 (HARD_REG_SET *VAR_2, enum machine_mode VAR_3, rtx VAR_4)
{
  rtx VAR_5;
  for (VAR_5 = VAR_4; VAR_5; VAR_5 = FUNC_5 (VAR_5, 1))
    if (FUNC_3 (VAR_5) == VAR_3 && FUNC_4 (FUNC_5 (VAR_5, 0)))
      {
 rtx VAR_6 = FUNC_5 (VAR_5, 0);
 unsigned int VAR_7 = FUNC_2 (VAR_6);
 int VAR_8 = VAR_1[VAR_7][FUNC_1 (VAR_6)];


 FUNC_6 (VAR_7 + VAR_8 <= VAR_0);

 while (VAR_8-- > 0)
   FUNC_0 (*VAR_2, VAR_7 + VAR_8);
      }
}
