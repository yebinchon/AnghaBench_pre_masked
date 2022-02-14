
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bundle_state {scalar_t__ unique_num; struct bundle_state* allocated_states_chain; void* dfa_state; struct bundle_state* next; } ;


 struct bundle_state* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bundle_state* VAR_3 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static struct bundle_state *
FUNC_1 (void)
{
  struct bundle_state *VAR_4;

  if (VAR_3 != ((void*)0))
    {
      VAR_4 = VAR_3;
      VAR_3 = VAR_4->next;
    }
  else
    {
      VAR_4 = FUNC_0 (sizeof (struct bundle_state));
      VAR_4->dfa_state = FUNC_0 (VAR_2);
      VAR_4->allocated_states_chain = VAR_0;
      VAR_0 = VAR_4;
    }
  VAR_4->unique_num = VAR_1++;
  return VAR_4;

}
