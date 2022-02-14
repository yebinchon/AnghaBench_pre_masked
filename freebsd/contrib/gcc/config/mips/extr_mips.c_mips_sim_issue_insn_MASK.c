
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_sim {int insns_left; int dfa_state; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct mips_sim*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3 (struct mips_sim *VAR_2, rtx VAR_3)
{
  FUNC_2 (VAR_2->dfa_state, VAR_3);
  VAR_2->insns_left--;

  VAR_0 = VAR_3;
  FUNC_1 (FUNC_0 (VAR_3), VAR_1, VAR_2);
}
