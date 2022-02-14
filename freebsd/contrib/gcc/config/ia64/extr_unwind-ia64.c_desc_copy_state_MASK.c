
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ unw_word ;
struct TYPE_4__ {int next; } ;
struct unw_state_record {TYPE_1__ curr; struct unw_labeled_state* labeled_states; } ;
struct TYPE_5__ {int next; } ;
struct unw_labeled_state {scalar_t__ label; TYPE_2__ saved_state; struct unw_labeled_state* next; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;

__attribute__((used)) static inline void
FUNC_4 (unw_word VAR_0, struct unw_state_record *VAR_1)
{
  struct unw_labeled_state *VAR_2;

  for (VAR_2 = VAR_1->labeled_states; VAR_2; VAR_2 = VAR_2->next)
    {
      if (VAR_2->label == VAR_0)
        {
   FUNC_2 (&VAR_1->curr);
      FUNC_3 (&VAR_1->curr, &VAR_2->saved_state, sizeof (VAR_1->curr));
   VAR_1->curr.next = FUNC_1 (VAR_2->saved_state.next);
   return;
 }
    }
  FUNC_0 ();
}
