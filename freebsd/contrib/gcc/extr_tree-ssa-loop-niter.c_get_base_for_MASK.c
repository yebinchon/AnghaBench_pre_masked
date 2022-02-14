
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct loop*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct loop*) ;
 int FUNC_5 (struct loop*) ;

__attribute__((used)) static tree
FUNC_6 (struct loop *VAR_2, tree VAR_3)
{
  tree VAR_4, VAR_5, VAR_6;

  if (FUNC_3 (VAR_3))
    return VAR_3;

  VAR_4 = FUNC_2 (VAR_2, VAR_3);
  if (!VAR_4)
    return VAR_0;

  VAR_5 = FUNC_0 (VAR_4, FUNC_5 (VAR_2));
  VAR_6 = FUNC_0 (VAR_4, FUNC_4 (VAR_2));

  if (FUNC_1 (VAR_6) != VAR_1)
    return VAR_0;

  if (!FUNC_3 (VAR_5))
    return VAR_0;

  if (FUNC_2 (VAR_2, VAR_6) != VAR_4)
    return VAR_0;

  return VAR_4;
}
