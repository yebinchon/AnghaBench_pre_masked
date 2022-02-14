
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct loop {int dummy; } ;
struct ivopts_data {struct loop* current_loop; } ;
struct iv_use {int stmt; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef TYPE_1__* edge ;
typedef int basic_block ;
struct TYPE_3__ {int flags; int dest; } ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct loop*,int ) ;

__attribute__((used)) static enum tree_code
FUNC_3 (struct ivopts_data *VAR_3, struct iv_use *VAR_4)
{
  struct loop *VAR_5 = VAR_3->current_loop;
  basic_block VAR_6;
  edge VAR_7;

  VAR_6 = FUNC_1 (VAR_4->stmt);
  VAR_7 = FUNC_0 (VAR_6, 0);
  if (FUNC_2 (VAR_5, VAR_7->dest))
    VAR_7 = FUNC_0 (VAR_6, 1);

  return (VAR_7->flags & VAR_0 ? VAR_1 : VAR_2);
}
