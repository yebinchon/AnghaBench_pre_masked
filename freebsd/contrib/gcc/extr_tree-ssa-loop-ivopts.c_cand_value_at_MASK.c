
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct loop {int dummy; } ;
struct iv_cand {TYPE_1__* iv; } ;
struct TYPE_2__ {int step; int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (struct loop*,struct iv_cand*,int ) ;

__attribute__((used)) static tree
FUNC_4 (struct loop *VAR_1, struct iv_cand *VAR_2, tree VAR_3, tree VAR_4)
{
  tree VAR_5 = FUNC_2 (VAR_2->iv, VAR_4);
  tree VAR_6 = FUNC_0 (VAR_2->iv->base);

  if (FUNC_3 (VAR_1, VAR_2, VAR_3))
    VAR_5 = FUNC_1 (VAR_0, VAR_6, VAR_5, VAR_2->iv->step);

  return VAR_5;
}
