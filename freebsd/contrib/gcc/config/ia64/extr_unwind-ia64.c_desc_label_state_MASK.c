
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int unw_word ;
struct TYPE_4__ {int next; } ;
struct unw_state_record {struct unw_labeled_state* labeled_states; TYPE_2__ curr; } ;
struct TYPE_3__ {int next; } ;
struct unw_labeled_state {struct unw_labeled_state* next; TYPE_1__ saved_state; int label; } ;


 struct unw_labeled_state* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;

__attribute__((used)) static inline void
FUNC_3 (unw_word VAR_0, struct unw_state_record *VAR_1)
{
  struct unw_labeled_state *VAR_2 = FUNC_0 ();

  VAR_2->label = VAR_0;
  FUNC_2 (&VAR_2->saved_state, &VAR_1->curr, sizeof (VAR_2->saved_state));
  VAR_2->saved_state.next = FUNC_1 (VAR_1->curr.next);


  VAR_2->next = VAR_1->labeled_states;
  VAR_1->labeled_states = VAR_2;
}
