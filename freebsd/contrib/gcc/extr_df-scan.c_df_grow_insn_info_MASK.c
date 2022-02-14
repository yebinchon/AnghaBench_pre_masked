
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_insn_info {int dummy; } ;
struct df {unsigned int insns_size; int insns; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void
FUNC_3 (struct df *VAR_0)
{
  unsigned int VAR_1 = FUNC_0 () + 1;
  if (VAR_0->insns_size < VAR_1)
    {
      VAR_1 += VAR_1 / 4;
      VAR_0->insns = FUNC_2 (VAR_0->insns,
       VAR_1 *sizeof (struct df_insn_info *));
      FUNC_1 (VAR_0->insns + VAR_0->insns_size, 0,
       (VAR_1 - VAR_0->insns_size) *sizeof (struct df_insn_info *));
      VAR_0->insns_size = VAR_1;
    }
}
