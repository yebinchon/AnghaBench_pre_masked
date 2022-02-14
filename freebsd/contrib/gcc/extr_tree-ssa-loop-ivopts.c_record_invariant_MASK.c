
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct version_info {int has_nonlin_use; scalar_t__ inv_id; int name; } ;
struct ivopts_data {int relevant; scalar_t__ max_inv_id; int current_loop; } ;
typedef scalar_t__ basic_block ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 struct version_info* FUNC_7 (struct ivopts_data*,int ) ;

__attribute__((used)) static void
FUNC_8 (struct ivopts_data *VAR_1, tree VAR_2, bool VAR_3)
{
  basic_block VAR_4;
  struct version_info *VAR_5;

  if (FUNC_2 (VAR_2) != VAR_0
      || !FUNC_6 (VAR_2))
    return;

  VAR_4 = FUNC_3 (FUNC_0 (VAR_2));
  if (VAR_4
      && FUNC_5 (VAR_1->current_loop, VAR_4))
    return;

  VAR_5 = FUNC_7 (VAR_1, VAR_2);
  VAR_5->name = VAR_2;
  VAR_5->has_nonlin_use |= VAR_3;
  if (!VAR_5->inv_id)
    VAR_5->inv_id = ++VAR_1->max_inv_id;
  FUNC_4 (VAR_1->relevant, FUNC_1 (VAR_2));
}
