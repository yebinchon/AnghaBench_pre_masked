
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {scalar_t__ depth; struct loop* outer; } ;


 int FUNC_0 (struct loop*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2 (struct loop *VAR_0, tree VAR_1)
{
  if (FUNC_1 (VAR_1))
    return 1;
  if (VAR_0->depth == 0)
    return 1;
  if (!FUNC_0 (VAR_0, VAR_1))
    return 0;
  if (VAR_0->outer
      && !FUNC_2 (VAR_0->outer, VAR_1))
    return 0;
  return 1;
}
