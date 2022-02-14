
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fde_entry {struct cfi_insn_data** last; } ;
struct cfi_insn_data {struct cfi_insn_data* next; } ;
struct TYPE_4__ {TYPE_1__* frch_cfi_data; } ;
struct TYPE_3__ {struct fde_entry* cur_fde_data; } ;


 TYPE_2__* VAR_0 ;
 struct cfi_insn_data* FUNC_0 (int,int) ;

__attribute__((used)) static struct cfi_insn_data *
FUNC_1 (void)
{
  struct cfi_insn_data *VAR_1 = FUNC_0 (1, sizeof (struct cfi_insn_data));
  struct fde_entry *VAR_2 = VAR_0->frch_cfi_data->cur_fde_data;

  *VAR_2->last = VAR_1;
  VAR_2->last = &VAR_1->next;

  return VAR_1;
}
