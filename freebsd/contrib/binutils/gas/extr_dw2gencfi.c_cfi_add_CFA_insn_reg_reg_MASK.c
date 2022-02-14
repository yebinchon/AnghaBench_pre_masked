
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int reg1; unsigned int reg2; } ;
struct TYPE_4__ {TYPE_1__ rr; } ;
struct cfi_insn_data {int insn; TYPE_2__ u; } ;


 struct cfi_insn_data* FUNC_0 () ;

__attribute__((used)) static void
FUNC_1 (int VAR_0, unsigned VAR_1, unsigned VAR_2)
{
  struct cfi_insn_data *VAR_3 = FUNC_0 ();

  VAR_3->insn = VAR_0;
  VAR_3->u.rr.reg1 = VAR_1;
  VAR_3->u.rr.reg2 = VAR_2;
}
