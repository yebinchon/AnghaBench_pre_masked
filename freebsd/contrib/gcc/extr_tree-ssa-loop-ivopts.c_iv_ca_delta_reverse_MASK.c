
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iv_ca_delta {struct cost_pair* new_cp; struct cost_pair* old_cp; struct iv_ca_delta* next_change; } ;
struct cost_pair {int dummy; } ;



__attribute__((used)) static struct iv_ca_delta *
FUNC_0 (struct iv_ca_delta *VAR_0)
{
  struct iv_ca_delta *VAR_1, *VAR_2, *VAR_3 = ((void*)0);
  struct cost_pair *VAR_4;

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next_change;
      VAR_1->next_change = VAR_3;
      VAR_3 = VAR_1;

      VAR_4 = VAR_1->old_cp;
      VAR_1->old_cp = VAR_1->new_cp;
      VAR_1->new_cp = VAR_4;
    }

  return VAR_3;
}
