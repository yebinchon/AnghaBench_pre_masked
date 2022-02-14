
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_opt_pass {int properties_provided; int properties_destroyed; struct tree_opt_pass* next; scalar_t__ gate; struct tree_opt_pass* sub; scalar_t__ name; } ;


 int FUNC_0 (struct tree_opt_pass*,int,int) ;

__attribute__((used)) static int
FUNC_1 (struct tree_opt_pass *VAR_0, bool VAR_1, int VAR_2)
{
  do
    {
      int VAR_3 = (VAR_2 | VAR_0->properties_provided)
      & ~VAR_0->properties_destroyed;

      if (VAR_0->name)
        FUNC_0 (VAR_0, VAR_1, VAR_3);

      if (VAR_0->sub)
        VAR_3 = FUNC_1 (VAR_0->sub, 0,
      VAR_3);



      if (VAR_0->gate)
        VAR_2 &= VAR_3;
      else
        VAR_2 = VAR_3;

      VAR_0 = VAR_0->next;
    }
  while (VAR_0);

  return VAR_2;
}
