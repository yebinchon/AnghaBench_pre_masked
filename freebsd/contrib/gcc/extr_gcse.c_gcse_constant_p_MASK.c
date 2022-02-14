
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static bool
FUNC_7 (rtx VAR_2)
{

  if (FUNC_2 (VAR_2) == VAR_0
      && FUNC_2 (FUNC_6 (VAR_2, 0)) == VAR_1
      && FUNC_2 (FUNC_6 (VAR_2, 1)) == VAR_1)
    return 1;



  if (FUNC_2(VAR_2) == VAR_0
      && FUNC_5 (FUNC_6 (VAR_2, 0)) && FUNC_5 (FUNC_6 (VAR_2, 1))
      && FUNC_4 (FUNC_6 (VAR_2, 0)) == FUNC_4 (FUNC_6 (VAR_2, 1))
      && ! FUNC_1 (FUNC_3 (FUNC_6 (VAR_2, 0)))
      && ! FUNC_1 (FUNC_3 (FUNC_6 (VAR_2, 1))))
    return 1;

  return FUNC_0 (VAR_2);
}
