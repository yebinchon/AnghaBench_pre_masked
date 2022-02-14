
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

int
FUNC_5 (rtx VAR_5)
{
  rtx VAR_6 = FUNC_1 (VAR_5);

  if (FUNC_0 (VAR_6) != VAR_4
      || FUNC_0 (FUNC_2 (VAR_6)) != VAR_2)
    return 0;

  VAR_6 = FUNC_3 (VAR_6);
  if (FUNC_0 (VAR_6) == VAR_1)
    return 1;
  else
    return (FUNC_0 (VAR_6) == VAR_0
     && ((FUNC_0 (FUNC_4 (VAR_6, 2)) == VAR_2
   && (FUNC_0 (FUNC_4 (VAR_6, 1)) == VAR_1
       || FUNC_0 (FUNC_4 (VAR_6, 1)) == VAR_3))
  || (FUNC_0 (FUNC_4 (VAR_6, 1)) == VAR_2
      && (FUNC_0 (FUNC_4 (VAR_6, 2)) == VAR_1
   || FUNC_0 (FUNC_4 (VAR_6, 2)) == VAR_3))));
}
