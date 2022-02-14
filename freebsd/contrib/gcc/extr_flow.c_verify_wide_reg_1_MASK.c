
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4 (rtx *VAR_1, void *VAR_2)
{
  rtx VAR_3 = *VAR_1;
  unsigned int VAR_4 = *(int *) VAR_2;

  if (FUNC_3 (VAR_3) && FUNC_2 (VAR_3) == VAR_4)
    {
      if (FUNC_1 (FUNC_0 (VAR_3)) <= VAR_0)
 return 2;
      return 1;
    }
  return 0;
}
