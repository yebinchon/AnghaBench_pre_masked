
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct scope_binding {int value; } ;


 struct scope_binding VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 scalar_t__ FUNC_3 (int ,int ,struct scope_binding*,int) ;

tree
FUNC_4 (tree VAR_6, tree VAR_7, bool VAR_8, bool VAR_9)
{
  int VAR_10 = 0;
  tree VAR_11 = VAR_4;

  if (FUNC_0 (VAR_6) == VAR_3)
    {
      struct scope_binding VAR_12 = VAR_0;

      VAR_10 |= VAR_1;
      if (VAR_8)
 VAR_10 |= VAR_2;
      if (FUNC_3 (VAR_7, VAR_6, &VAR_12, VAR_10))
 VAR_11 = VAR_12.value;
    }
  else if (FUNC_1 (VAR_6, VAR_9))
    VAR_11 = FUNC_2 (VAR_6, VAR_7, 2, VAR_8);

  if (!VAR_11)
    return VAR_5;
  return VAR_11;
}
