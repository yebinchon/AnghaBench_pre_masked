
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct loop*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct loop*) ;

__attribute__((used)) static tree
FUNC_5 (struct loop *VAR_3)
{
  tree VAR_4 = FUNC_4 (VAR_3);
  tree VAR_5;
  tree VAR_6;
  if (VAR_4 == VAR_1)
    return VAR_1;
  if (FUNC_1 (VAR_4) != VAR_0)
    return VAR_1;
  VAR_6 = FUNC_2 (VAR_4, 0);
  if (!FUNC_0 (VAR_6))
    return VAR_1;




  if (FUNC_3 (VAR_3, FUNC_2 (VAR_6, 0)))
      VAR_5 = FUNC_2 (VAR_6, 1);
  else if (FUNC_3 (VAR_3, FUNC_2 (VAR_6, 1)))
      VAR_5 = FUNC_2 (VAR_6, 0);
  else
    return VAR_1;

  if (FUNC_1 (VAR_5) != VAR_2)
    return VAR_1;
  return VAR_5;
}
