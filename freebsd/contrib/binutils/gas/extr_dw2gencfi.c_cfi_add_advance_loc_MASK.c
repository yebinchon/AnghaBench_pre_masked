
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_5__ {int * lab2; int * lab1; } ;
struct TYPE_6__ {TYPE_1__ ll; } ;
struct cfi_insn_data {TYPE_2__ u; int insn; } ;
struct TYPE_8__ {TYPE_3__* frch_cfi_data; } ;
struct TYPE_7__ {int * last_address; } ;


 int VAR_0 ;
 struct cfi_insn_data* FUNC_0 () ;
 TYPE_4__* VAR_1 ;

void
FUNC_1 (symbolS *VAR_2)
{
  struct cfi_insn_data *VAR_3 = FUNC_0 ();

  VAR_3->insn = VAR_0;
  VAR_3->u.ll.lab1 = VAR_1->frch_cfi_data->last_address;
  VAR_3->u.ll.lab2 = VAR_2;

  VAR_1->frch_cfi_data->last_address = VAR_2;
}
