
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct cfi_insn_data {int insn; TYPE_1__ u; } ;
typedef int offsetT ;


 struct cfi_insn_data* FUNC_0 () ;

__attribute__((used)) static void
FUNC_1 (int VAR_0, offsetT VAR_1)
{
  struct cfi_insn_data *VAR_2 = FUNC_0 ();

  VAR_2->insn = VAR_0;
  VAR_2->u.i = VAR_1;
}
