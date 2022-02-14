
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_opt_pass {int static_pass_number; struct tree_opt_pass* next; scalar_t__ name; } ;


 int FUNC_0 (struct tree_opt_pass*,struct tree_opt_pass*,int) ;
 struct tree_opt_pass* FUNC_1 (int) ;

__attribute__((used)) static struct tree_opt_pass **
FUNC_2 (struct tree_opt_pass **VAR_0, struct tree_opt_pass *VAR_1)
{


  if (VAR_1->static_pass_number)
    {
      struct tree_opt_pass *VAR_2;

      VAR_2 = FUNC_1 (sizeof (*VAR_2));
      FUNC_0 (VAR_2, VAR_1, sizeof (*VAR_2));





      if (VAR_1->name)
        {
          VAR_1->static_pass_number -= 1;
          VAR_2->static_pass_number = -VAR_1->static_pass_number;
 }

      *VAR_0 = VAR_2;
    }
  else
    {
      VAR_1->static_pass_number = -1;
      *VAR_0 = VAR_1;
    }

  return &(*VAR_0)->next;

}
