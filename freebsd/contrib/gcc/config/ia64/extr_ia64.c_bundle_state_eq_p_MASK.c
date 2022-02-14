
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bundle_state {scalar_t__ insn_num; int dfa_state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_1, const void *VAR_2)
{
  const struct bundle_state * VAR_3 = (struct bundle_state *) VAR_1;
  const struct bundle_state * VAR_4 = (struct bundle_state *) VAR_2;

  return (VAR_3->insn_num == VAR_4->insn_num
   && FUNC_0 (VAR_3->dfa_state, VAR_4->dfa_state,
       VAR_0) == 0);
}
