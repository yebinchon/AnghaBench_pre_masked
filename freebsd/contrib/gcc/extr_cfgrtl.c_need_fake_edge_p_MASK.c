
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int *) ;

__attribute__((used)) static bool
FUNC_10 (rtx VAR_4)
{
  if (!FUNC_3 (VAR_4))
    return 0;

  if ((FUNC_0 (VAR_4)
       && !FUNC_6 (VAR_4)
       && !FUNC_9 (VAR_4, VAR_3, ((void*)0))
       && !FUNC_1 (VAR_4)))
    return 1;

  return ((FUNC_2 (FUNC_5 (VAR_4)) == VAR_1
    && FUNC_4 (FUNC_5 (VAR_4)))
   || (FUNC_2 (FUNC_5 (VAR_4)) == VAR_2
       && FUNC_8 (VAR_4) != -1
       && FUNC_4 (FUNC_7 (FUNC_5 (VAR_4), 0, 0)))
   || FUNC_2 (FUNC_5 (VAR_4)) == VAR_0);
}
