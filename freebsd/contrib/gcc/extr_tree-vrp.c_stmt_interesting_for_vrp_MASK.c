
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static bool
FUNC_10 (tree VAR_8)
{
  if (FUNC_5 (VAR_8) == VAR_4
      && FUNC_9 (FUNC_3 (VAR_8))
      && (FUNC_2 (FUNC_7 (FUNC_3 (VAR_8)))
   || FUNC_4 (FUNC_7 (FUNC_3 (VAR_8)))))
    return 1;
  else if (FUNC_5 (VAR_8) == VAR_3)
    {
      tree VAR_9 = FUNC_6 (VAR_8, 0);
      tree VAR_10 = FUNC_6 (VAR_8, 1);




      if (FUNC_5 (VAR_9) == VAR_5
   && (FUNC_2 (FUNC_7 (VAR_9))
       || FUNC_4 (FUNC_7 (VAR_9)))
   && ((FUNC_5 (VAR_10) == VAR_1
        && FUNC_5 (FUNC_6 (VAR_10, 0)) == VAR_0
        && FUNC_1 (FUNC_6 (FUNC_6 (VAR_10, 0), 0))
        && FUNC_0 (FUNC_6 (FUNC_6 (VAR_10, 0), 0)))
       || FUNC_8 (VAR_8, VAR_6)))
 return 1;
    }
  else if (FUNC_5 (VAR_8) == VAR_2 || FUNC_5 (VAR_8) == VAR_7)
    return 1;

  return 0;
}
