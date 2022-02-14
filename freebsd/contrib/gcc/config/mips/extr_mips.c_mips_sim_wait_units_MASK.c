
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_sim {scalar_t__ insns_left; int dfa_state; } ;
typedef int state_t ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mips_sim*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5 (struct mips_sim *VAR_0, rtx VAR_1)
{
  state_t VAR_2;

  VAR_2 = FUNC_0 (FUNC_3 ());
  while (VAR_0->insns_left == 0
  || (FUNC_1 (VAR_2, VAR_0->dfa_state, FUNC_3 ()),
      FUNC_4 (VAR_2, VAR_1) >= 0))
    FUNC_2 (VAR_0);
}
