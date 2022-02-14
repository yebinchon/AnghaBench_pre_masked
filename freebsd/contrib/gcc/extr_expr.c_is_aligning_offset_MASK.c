
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_6 (tree VAR_8, tree VAR_9)
{

  while (FUNC_0 (VAR_8) == VAR_6
  || FUNC_0 (VAR_8) == VAR_7
  || FUNC_0 (VAR_8) == VAR_4)
    VAR_8 = FUNC_1 (VAR_8, 0);



  if (FUNC_0 (VAR_8) != VAR_3
      || !FUNC_4 (FUNC_1 (VAR_8, 1), 1)
      || FUNC_2 (FUNC_1 (VAR_8, 1),
      VAR_1 / VAR_2) <= 0
      || !(FUNC_3 (FUNC_5 (FUNC_1 (VAR_8, 1), 1) + 1) < 0))
    return 0;



  VAR_8 = FUNC_1 (VAR_8, 0);
  while (FUNC_0 (VAR_8) == VAR_6
  || FUNC_0 (VAR_8) == VAR_7
  || FUNC_0 (VAR_8) == VAR_4)
    VAR_8 = FUNC_1 (VAR_8, 0);

  if (FUNC_0 (VAR_8) != VAR_5)
    return 0;

  VAR_8 = FUNC_1 (VAR_8, 0);
  while (FUNC_0 (VAR_8) == VAR_6
  || FUNC_0 (VAR_8) == VAR_7
  || FUNC_0 (VAR_8) == VAR_4)
    VAR_8 = FUNC_1 (VAR_8, 0);


  return FUNC_0 (VAR_8) == VAR_0 && FUNC_1 (VAR_8, 0) == VAR_9;
}
