
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lim_aux_data {struct lim_aux_data* next; struct lim_aux_data* depends; } ;
struct depend {struct depend* next; struct depend* depends; } ;


 int FUNC_0 (struct lim_aux_data*) ;

__attribute__((used)) static void
FUNC_1 (struct lim_aux_data *VAR_0)
{
  struct depend *VAR_1, *VAR_2;

  for (VAR_1 = VAR_0->depends; VAR_1; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;
      FUNC_0 (VAR_1);
    }
  FUNC_0 (VAR_0);
}
