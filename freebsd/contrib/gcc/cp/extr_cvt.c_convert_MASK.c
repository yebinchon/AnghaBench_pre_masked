
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int ,int) ;

tree
FUNC_5 (tree VAR_4, tree VAR_5)
{
  tree VAR_6;

  if (VAR_4 == VAR_3 || VAR_5 == VAR_3)
    return VAR_3;

  VAR_6 = FUNC_1 (VAR_5);

  if (FUNC_0 (VAR_4) && FUNC_0 (VAR_6))
    return FUNC_3 (FUNC_2 (VAR_4, VAR_5));

  return FUNC_4 (VAR_4, VAR_5, VAR_0,
        VAR_1|VAR_2);
}
