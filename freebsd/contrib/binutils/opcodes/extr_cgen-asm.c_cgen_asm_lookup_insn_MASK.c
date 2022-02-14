
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int (* asm_hash ) (char const*) ;int ** asm_hash_table; } ;
typedef int CGEN_INSN_LIST ;
typedef TYPE_1__* CGEN_CPU_DESC ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (char const*) ;

CGEN_INSN_LIST *
FUNC_2 (CGEN_CPU_DESC VAR_0, const char *VAR_1)
{
  unsigned int VAR_2;

  if (VAR_0->asm_hash_table == ((void*)0))
    FUNC_0 (VAR_0);

  VAR_2 = (* VAR_0->asm_hash) (VAR_1);
  return VAR_0->asm_hash_table[VAR_2];
}
