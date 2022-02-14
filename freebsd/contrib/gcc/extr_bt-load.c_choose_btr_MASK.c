
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HARD_REG_SET ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int
FUNC_2 (HARD_REG_SET VAR_4)
{
  int VAR_5;
  FUNC_0 (VAR_1, VAR_4, VAR_2);

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    {



      int VAR_6 = VAR_5;

      if (FUNC_1 (VAR_1, VAR_6)
   && !FUNC_1 (VAR_4, VAR_6))
 return VAR_6;
    }
give_up:
  return -1;
}
