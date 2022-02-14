
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct version_info {TYPE_1__* iv; } ;
struct ivopts_data {int relevant; } ;
struct TYPE_2__ {int ssa_name; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 struct version_info* FUNC_4 (struct ivopts_data*,int ) ;

__attribute__((used)) static void
FUNC_5 (struct ivopts_data *VAR_0, tree VAR_1, tree VAR_2, tree VAR_3)
{
  struct version_info *VAR_4 = FUNC_4 (VAR_0, VAR_1);

  FUNC_3 (!VAR_4->iv);

  FUNC_2 (VAR_0->relevant, FUNC_0 (VAR_1));
  VAR_4->iv = FUNC_1 (VAR_2, VAR_3);
  VAR_4->iv->ssa_name = VAR_1;
}
