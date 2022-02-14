
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5 (basic_block VAR_0)
{
  int VAR_1 = 0;
  rtx VAR_2 = FUNC_1 (VAR_0);

  while (1)
    {
      if (FUNC_2 (VAR_2) || FUNC_4 (VAR_2))
 VAR_1++;

      if (VAR_2 == FUNC_0 (VAR_0))
 break;
      VAR_2 = FUNC_3 (VAR_2);
    }

  return VAR_1;
}
