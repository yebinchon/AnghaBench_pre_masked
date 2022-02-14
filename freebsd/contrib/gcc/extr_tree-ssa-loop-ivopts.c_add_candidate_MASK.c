
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct ivopts_data {int current_loop; } ;
struct iv_use {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ivopts_data*,int ,int ,int,int ,struct iv_use*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (struct ivopts_data *VAR_3,
        tree VAR_4, tree VAR_5, bool VAR_6, struct iv_use *VAR_7)
{
  if (FUNC_3 (VAR_3->current_loop))
    FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_1, VAR_7, VAR_2);
  if (FUNC_2 (VAR_3->current_loop)
      && FUNC_1 (VAR_3->current_loop))
    FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_0, VAR_7, VAR_2);
}
