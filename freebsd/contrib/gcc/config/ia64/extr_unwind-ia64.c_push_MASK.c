
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct unw_reg_state* next; } ;
struct unw_state_record {TYPE_1__ curr; } ;
struct unw_reg_state {int dummy; } ;


 struct unw_reg_state* FUNC_0 () ;
 int FUNC_1 (struct unw_reg_state*,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2 (struct unw_state_record *VAR_0)
{
  struct unw_reg_state *VAR_1 = FUNC_0 ();
  FUNC_1 (VAR_1, &VAR_0->curr, sizeof (*VAR_1));
  VAR_0->curr.next = VAR_1;
}
