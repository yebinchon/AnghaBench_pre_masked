
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HARD_REG_SET ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int** VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_4 (int VAR_2, enum machine_mode VAR_3, int VAR_4, int VAR_5,
  int VAR_6)
{
  int VAR_7 = VAR_0[VAR_2][VAR_3];
  HARD_REG_SET VAR_8;

  FUNC_1 (VAR_8);
  while (--VAR_7 >= 0)
    FUNC_3 (VAR_8, VAR_2 + VAR_7);

  if (VAR_4)
    while (VAR_5 < VAR_6)
      {
 FUNC_2 (VAR_1[VAR_5], VAR_8);
 VAR_5++;
      }
  else
    while (VAR_5 < VAR_6)
      {
 FUNC_0 (VAR_1[VAR_5], VAR_8);
 VAR_5++;
      }
}
