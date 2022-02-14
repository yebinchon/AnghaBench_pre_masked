
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bundle_state {int insn_num; scalar_t__ dfa_state; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned
FUNC_0 (const void *VAR_2)
{
  const struct bundle_state *VAR_3 = (struct bundle_state *) VAR_2;
  unsigned VAR_4, VAR_5;

  for (VAR_4 = VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    VAR_4 += (((unsigned char *) VAR_3->dfa_state) [VAR_5]
        << ((VAR_5 % VAR_0) * 3 + VAR_0));
  return VAR_4 + VAR_3->insn_num;
}
