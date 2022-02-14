
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (int VAR_2, enum machine_mode VAR_3, int VAR_4)
{
  int VAR_5 = VAR_0[VAR_2][VAR_3];
  if (VAR_4)
    while (--VAR_5 >= 0)
      FUNC_1 (VAR_1, VAR_2 + VAR_5);
  else
    while (--VAR_5 >= 0)
      FUNC_0 (VAR_1, VAR_2 + VAR_5);
}
