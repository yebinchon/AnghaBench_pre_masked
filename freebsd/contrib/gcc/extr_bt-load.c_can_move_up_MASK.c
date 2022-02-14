
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3 (basic_block VAR_0, rtx VAR_1, int VAR_2)
{
  while (VAR_1 != FUNC_0 (VAR_0) && VAR_2 > 0)
    {
      VAR_1 = FUNC_2 (VAR_1);



      if (FUNC_1 (VAR_1))
 VAR_2--;
    }
  return VAR_2 <= 0;
}
