
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_sim {int dfa_state; int issue_rate; } ;
typedef int state_t ;


 int FUNC_0 () ;
 int FUNC_1 (struct mips_sim*) ;

__attribute__((used)) static void
FUNC_2 (struct mips_sim *VAR_0, state_t VAR_1)
{
  VAR_0->issue_rate = FUNC_0 ();
  VAR_0->dfa_state = VAR_1;
  FUNC_1 (VAR_0);
}
