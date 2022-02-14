
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_2)
{
  tree VAR_3, VAR_4;

  if (VAR_2 == VAR_1)
    return VAR_1;

  VAR_3 = FUNC_1 (VAR_2);
  FUNC_0 (VAR_2);

  VAR_4 = FUNC_4 (VAR_2);
  if (!VAR_4)
    VAR_4 = FUNC_2 (VAR_0, FUNC_1 (VAR_2), VAR_2);
  return FUNC_3 (VAR_3, VAR_4);
}
