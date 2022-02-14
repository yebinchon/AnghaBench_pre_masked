
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_labeled_state {int saved_state; struct unw_labeled_state* next; } ;


 int FUNC_0 (struct unw_labeled_state*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2 (struct unw_labeled_state *VAR_0)
{
  struct unw_labeled_state *VAR_1;

  for (; VAR_0 ; VAR_0 = VAR_1)
    {
      VAR_1 = VAR_0->next;

      FUNC_1 (&VAR_0->saved_state);
      FUNC_0 (VAR_0);
    }
}
