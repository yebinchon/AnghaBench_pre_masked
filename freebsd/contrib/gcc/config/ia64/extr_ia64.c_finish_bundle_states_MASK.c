
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bundle_state {struct bundle_state* dfa_state; struct bundle_state* allocated_states_chain; } ;


 struct bundle_state* VAR_0 ;
 int FUNC_0 (struct bundle_state*) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  struct bundle_state *VAR_1, *VAR_2;

  for (VAR_1 = VAR_0;
       VAR_1 != ((void*)0);
       VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->allocated_states_chain;
      FUNC_0 (VAR_1->dfa_state);
      FUNC_0 (VAR_1);
    }
}
