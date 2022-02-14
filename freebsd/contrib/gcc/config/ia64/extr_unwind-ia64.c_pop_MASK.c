
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct unw_reg_state* next; } ;
struct unw_state_record {TYPE_1__ curr; } ;
struct unw_reg_state {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct unw_reg_state*) ;
 int FUNC_2 (TYPE_1__*,struct unw_reg_state*,int) ;

__attribute__((used)) static void
FUNC_3 (struct unw_state_record *VAR_0)
{
  struct unw_reg_state *VAR_1 = VAR_0->curr.next;

  if (!VAR_1)
    FUNC_0 ();
  FUNC_2 (&VAR_0->curr, VAR_1, sizeof(*VAR_1));
  FUNC_1 (VAR_1);
}
