
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {unsigned int (* asm_hash ) (int ) ;int (* asm_hash_p ) (int ) ;} ;
struct TYPE_8__ {int insn; struct TYPE_8__* next; } ;
typedef TYPE_1__ CGEN_INSN_LIST ;
typedef TYPE_2__* CGEN_CPU_DESC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static CGEN_INSN_LIST *
FUNC_3 (CGEN_CPU_DESC VAR_0,
  const CGEN_INSN_LIST *VAR_1,
  CGEN_INSN_LIST **VAR_2,
  CGEN_INSN_LIST *VAR_3)
{
  const CGEN_INSN_LIST *VAR_4;

  for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->next, ++ VAR_3)
    {
      unsigned int VAR_5;

      if (! (* VAR_0->asm_hash_p) (VAR_4->insn))
 continue;
      VAR_5 = (* VAR_0->asm_hash) (FUNC_0 (VAR_4->insn));
      VAR_3->next = VAR_2[VAR_5];
      VAR_3->insn = VAR_4->insn;
      VAR_2[VAR_5] = VAR_3;
    }

  return VAR_3;
}
