
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cfa_save_data {struct cfa_save_data* next; int cfa_offset; } ;
struct TYPE_4__ {TYPE_1__* frch_cfi_data; } ;
struct TYPE_3__ {struct cfa_save_data* cfa_save_stack; int cur_cfa_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 struct cfa_save_data* FUNC_1 (int) ;

void
FUNC_2 (void)
{
  struct cfa_save_data *VAR_2;

  FUNC_0 (VAR_0);

  VAR_2 = FUNC_1 (sizeof (*VAR_2));
  VAR_2->cfa_offset = VAR_1->frch_cfi_data->cur_cfa_offset;
  VAR_2->next = VAR_1->frch_cfi_data->cfa_save_stack;
  VAR_1->frch_cfi_data->cfa_save_stack = VAR_2;
}
