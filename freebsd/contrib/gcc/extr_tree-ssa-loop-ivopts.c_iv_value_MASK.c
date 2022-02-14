
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct iv {int base; int step; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static tree
FUNC_3 (struct iv *VAR_2, tree VAR_3)
{
  tree VAR_4;
  tree VAR_5 = FUNC_0 (VAR_2->base);

  VAR_3 = FUNC_2 (VAR_5, VAR_3);
  VAR_4 = FUNC_1 (VAR_0, VAR_5, VAR_2->step, VAR_3);

  return FUNC_1 (VAR_1, VAR_5, VAR_2->base, VAR_4);
}
