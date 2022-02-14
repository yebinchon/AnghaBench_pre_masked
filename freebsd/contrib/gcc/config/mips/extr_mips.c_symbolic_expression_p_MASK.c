
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4 (rtx VAR_2)
{
  if (FUNC_1 (VAR_2) == VAR_1)
    return 1;

  if (FUNC_1 (VAR_2) == VAR_0)
    return FUNC_4 (FUNC_3 (VAR_2, 0));

  if (FUNC_2 (VAR_2))
    return FUNC_4 (FUNC_3 (VAR_2, 0));

  if (FUNC_0 (VAR_2))
    return (FUNC_4 (FUNC_3 (VAR_2, 0))
     || FUNC_4 (FUNC_3 (VAR_2, 1)));

  return 0;
}
