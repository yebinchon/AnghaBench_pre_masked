
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct loop {int depth; } ;
typedef TYPE_2__* basic_block ;
struct TYPE_7__ {TYPE_1__* max_loop; } ;
struct TYPE_6__ {int loop_father; } ;
struct TYPE_5__ {int outer; } ;


 TYPE_4__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 struct loop* FUNC_4 (struct loop*,int ) ;
 struct loop* FUNC_5 (struct loop*,int) ;

__attribute__((used)) static struct loop *
FUNC_6 (tree VAR_1, struct loop *VAR_2)
{
  tree VAR_3;
  basic_block VAR_4;
  struct loop *VAR_5;

  if (FUNC_2 (VAR_1) != VAR_0)
    return FUNC_5 (VAR_2, 1);

  VAR_3 = FUNC_1 (VAR_1);
  VAR_4 = FUNC_3 (VAR_3);
  if (!VAR_4)
    return FUNC_5 (VAR_2, 1);

  VAR_5 = FUNC_4 (VAR_2, VAR_4->loop_father);

  if (FUNC_0 (VAR_3) && FUNC_0 (VAR_3)->max_loop)
    VAR_5 = FUNC_4 (VAR_5,
     FUNC_0 (VAR_3)->max_loop->outer);
  if (VAR_5 == VAR_2)
    return ((void*)0);
  VAR_5 = FUNC_5 (VAR_2, VAR_5->depth + 1);

  return VAR_5;
}
