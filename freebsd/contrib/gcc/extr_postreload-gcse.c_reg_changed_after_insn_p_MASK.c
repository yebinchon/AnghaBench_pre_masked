
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int* VAR_0 ;

__attribute__((used)) static bool
FUNC_2 (rtx VAR_1, int VAR_2)
{
  unsigned int VAR_3, VAR_4;

  VAR_3 = FUNC_1 (VAR_1);
  VAR_4 = FUNC_0 (VAR_1);
  do
    if (VAR_0[VAR_3] > VAR_2)
      return 1;
  while (++VAR_3 < VAR_4);
  return 0;
}
