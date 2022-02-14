
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct loop {int dummy; } ;
struct TYPE_4__ {int step; } ;
typedef TYPE_1__ affine_iv ;
struct TYPE_5__ {struct loop* loop_father; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct loop*,int ,int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_1)
{
  struct loop *VAR_2 = FUNC_1 (VAR_1)->loop_father;
  tree VAR_3 = FUNC_0 (VAR_1);
  affine_iv VAR_4;

  if (!FUNC_2 (VAR_3))
    return VAR_0;

  if (!FUNC_3 (VAR_2, VAR_1, VAR_3, &VAR_4, 1))
    return VAR_0;

  return (FUNC_4 (VAR_4.step) ? VAR_0 : VAR_4.step);
}
