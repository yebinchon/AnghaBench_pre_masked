
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_sim {int dfa_state; int issue_rate; int insns_left; int time; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1 (struct mips_sim *VAR_0)
{
  VAR_0->time++;
  VAR_0->insns_left = VAR_0->issue_rate;
  FUNC_0 (VAR_0->dfa_state, 0);
}
