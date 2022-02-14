
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct rus_data {int may_branch; int * last_goto; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (tree *VAR_1, struct rus_data *VAR_2)
{
  tree VAR_3 = FUNC_0 (*VAR_1);

  VAR_2->may_branch = 1;
  VAR_2->last_goto = ((void*)0);


  if (FUNC_1 (VAR_3) == VAR_0)
    VAR_2->last_goto = VAR_1;
}
