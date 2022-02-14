
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;

int
FUNC_7 (tree VAR_8, tree VAR_9)
{
  for (; ; VAR_8 = FUNC_1 (VAR_8), VAR_9 = FUNC_1 (VAR_9))
    {

      if (FUNC_0 (VAR_8) == VAR_7
   || FUNC_0 (VAR_9) == VAR_7)
 return 1;

      if (FUNC_0 (VAR_8) != FUNC_0 (VAR_9))
 return 0;

      if (FUNC_0 (VAR_9) == VAR_4
   && FUNC_5 (FUNC_3 (VAR_8),
   FUNC_3 (VAR_9),
   VAR_0 | VAR_1))
 continue;

      if (FUNC_0 (VAR_8) == VAR_6
   && FUNC_6 (VAR_8, VAR_9, 0))
 return 1;

      if (FUNC_0 (VAR_8) == VAR_3
   && FUNC_4 (VAR_8) == FUNC_4 (VAR_9))
 return 1;

      if (FUNC_0 (VAR_8) == VAR_2)
 return 1;

      if (FUNC_0 (VAR_8) != VAR_5)
 return FUNC_5
   (FUNC_2 (VAR_8), FUNC_2 (VAR_9),
    VAR_0 | VAR_1);
    }
}
