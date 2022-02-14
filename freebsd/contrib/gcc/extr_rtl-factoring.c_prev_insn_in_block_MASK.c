
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static rtx
FUNC_4 (rtx VAR_1)
{
  basic_block VAR_2 = FUNC_1 (VAR_1);

  if (!VAR_2)
    return VAR_0;

  while (VAR_1 != FUNC_0 (VAR_2))
    {
      VAR_1 = FUNC_3 (VAR_1);
      if (FUNC_2 (VAR_1))
        return VAR_1;
    }
  return VAR_0;
}
