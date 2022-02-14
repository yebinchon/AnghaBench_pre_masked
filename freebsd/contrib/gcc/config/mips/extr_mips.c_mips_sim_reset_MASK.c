
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_sim {int dfa_state; int last_set; int issue_rate; int insns_left; scalar_t__ time; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (struct mips_sim *VAR_0)
{
  VAR_0->time = 0;
  VAR_0->insns_left = VAR_0->issue_rate;
  FUNC_0 (&VAR_0->last_set, 0, sizeof (VAR_0->last_set));
  FUNC_1 (VAR_0->dfa_state);
}
