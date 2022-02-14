
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int*) ;

__attribute__((used)) static bool
FUNC_4 (rtx VAR_0, rtx VAR_1, rtx VAR_2, basic_block VAR_3,
       int *VAR_4)
{
  rtx VAR_5 = FUNC_0 (VAR_3);

  if (!FUNC_3 (VAR_1, VAR_4))
    return 1;

  for ( ; VAR_2 != FUNC_1 (VAR_5); VAR_2 = FUNC_1 (VAR_2))
    if (FUNC_2 (VAR_0, VAR_1, VAR_2, 1))
      return 1;

  return 0;
}
