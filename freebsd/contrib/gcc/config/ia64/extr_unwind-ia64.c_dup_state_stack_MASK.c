
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_reg_state {struct unw_reg_state* next; } ;


 struct unw_reg_state* FUNC_0 () ;
 int FUNC_1 (struct unw_reg_state*,struct unw_reg_state*,int) ;

__attribute__((used)) static struct unw_reg_state *
FUNC_2 (struct unw_reg_state *VAR_0)
{
  struct unw_reg_state *VAR_1, *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);

  while (VAR_0)
    {
      VAR_1 = FUNC_0 ();
      FUNC_1 (VAR_1, VAR_0, sizeof(*VAR_1));
      if (VAR_3)
 VAR_2->next = VAR_1;
      else
 VAR_3 = VAR_1;
      VAR_0 = VAR_0->next;
      VAR_2 = VAR_1;
    }

  return VAR_3;
}
