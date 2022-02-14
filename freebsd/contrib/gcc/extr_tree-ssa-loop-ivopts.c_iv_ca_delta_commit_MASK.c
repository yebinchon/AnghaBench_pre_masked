
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_ca_delta {int use; struct cost_pair* new_cp; struct cost_pair* old_cp; struct iv_ca_delta* next_change; } ;
struct iv_ca {int dummy; } ;
struct cost_pair {int dummy; } ;


 int FUNC_0 (int) ;
 struct cost_pair* FUNC_1 (struct iv_ca*,int ) ;
 struct iv_ca_delta* FUNC_2 (struct iv_ca_delta*) ;
 int FUNC_3 (struct ivopts_data*,struct iv_ca*,int ,struct cost_pair*) ;

__attribute__((used)) static void
FUNC_4 (struct ivopts_data *VAR_0, struct iv_ca *VAR_1,
      struct iv_ca_delta *VAR_2, bool VAR_3)
{
  struct cost_pair *VAR_4, *VAR_5;
  struct iv_ca_delta *VAR_6;

  if (!VAR_3)
    VAR_2 = FUNC_2 (VAR_2);

  for (VAR_6 = VAR_2; VAR_6; VAR_6 = VAR_6->next_change)
    {
      VAR_4 = VAR_6->old_cp;
      VAR_5 = VAR_6->new_cp;
      FUNC_0 (FUNC_1 (VAR_1, VAR_6->use) == VAR_4);
      FUNC_3 (VAR_0, VAR_1, VAR_6->use, VAR_5);
    }

  if (!VAR_3)
    FUNC_2 (VAR_2);
}
