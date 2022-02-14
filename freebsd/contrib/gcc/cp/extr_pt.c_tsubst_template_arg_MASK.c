
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsubst_flags_t ;
typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,int ,scalar_t__,int) ;

__attribute__((used)) static tree
FUNC_4 (tree VAR_0, tree VAR_1, tsubst_flags_t VAR_2, tree VAR_3)
{
  tree VAR_4;

  if (!VAR_0)
    VAR_4 = VAR_0;
  else if (FUNC_0 (VAR_0))
    VAR_4 = FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3);
  else
    {
      VAR_4 = FUNC_3 (VAR_0, VAR_1, VAR_2, VAR_3,
                                            1);
      VAR_4 = FUNC_1 (VAR_4);
    }
  return VAR_4;
}
