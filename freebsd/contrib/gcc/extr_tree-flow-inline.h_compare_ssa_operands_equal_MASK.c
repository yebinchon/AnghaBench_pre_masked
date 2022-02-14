
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int ssa_op_iter ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_5 (tree VAR_1, tree VAR_2, int VAR_3)
{
  ssa_op_iter VAR_4, VAR_5;
  tree VAR_6 = VAR_0;
  tree VAR_7 = VAR_0;
  bool VAR_8, VAR_9;

  if (VAR_1 == VAR_2)
    return 1;

  VAR_8 = VAR_1 && FUNC_4 (VAR_1);
  VAR_9 = VAR_2 && FUNC_4 (VAR_2);

  if (VAR_8)
    {
      VAR_6 = FUNC_2 (&VAR_4, VAR_1, VAR_3);
      if (!VAR_9)
        return FUNC_1 (&VAR_4);
    }
  else
    FUNC_0 (&VAR_4);

  if (VAR_9)
    {
      VAR_7 = FUNC_2 (&VAR_5, VAR_2, VAR_3);
      if (!VAR_8)
        return FUNC_1 (&VAR_5);
    }
  else
    FUNC_0 (&VAR_5);

  while (!FUNC_1 (&VAR_4) && !FUNC_1 (&VAR_5))
    {
      if (VAR_6 != VAR_7)
 return 0;
      VAR_6 = FUNC_3 (&VAR_4);
      VAR_7 = FUNC_3 (&VAR_5);
    }

  return (FUNC_1 (&VAR_4) && FUNC_1 (&VAR_5));
}
