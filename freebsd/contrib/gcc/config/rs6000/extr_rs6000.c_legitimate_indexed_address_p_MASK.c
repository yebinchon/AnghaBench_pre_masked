
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_5 (rtx VAR_2, int VAR_3)
{
  rtx VAR_4, VAR_5;

  if (FUNC_0 (VAR_2) != VAR_0)
    return 0;

  VAR_4 = FUNC_4 (VAR_2, 0);
  VAR_5 = FUNC_4 (VAR_2, 1);



  if (!VAR_3
      && VAR_1
      && (FUNC_3 (VAR_4) || FUNC_0 (VAR_4) == VAR_0)
      && FUNC_3 (VAR_5))
    return 1;

  return (FUNC_3 (VAR_4) && FUNC_3 (VAR_5)
   && ((FUNC_1 (VAR_4, VAR_3)
        && FUNC_2 (VAR_5, VAR_3))
       || (FUNC_1 (VAR_5, VAR_3)
    && FUNC_2 (VAR_4, VAR_3))));
}
