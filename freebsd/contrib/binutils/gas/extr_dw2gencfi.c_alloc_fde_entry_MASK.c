
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct frch_cfi_data {int dummy; } ;
struct fde_entry {void* lsda_encoding; void* per_encoding; int return_column; int data; int * last; struct fde_entry* next; } ;
struct TYPE_4__ {TYPE_1__* frch_cfi_data; } ;
struct TYPE_3__ {struct fde_entry* cur_fde_data; } ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct fde_entry** VAR_3 ;
 void* FUNC_0 (int,int) ;

__attribute__((used)) static struct fde_entry *
FUNC_1 (void)
{
  struct fde_entry *VAR_4 = FUNC_0 (1, sizeof (struct fde_entry));

  VAR_2->frch_cfi_data = FUNC_0 (1, sizeof (struct frch_cfi_data));
  VAR_2->frch_cfi_data->cur_fde_data = VAR_4;
  *VAR_3 = VAR_4;
  VAR_3 = &VAR_4->next;

  VAR_4->last = &VAR_4->data;
  VAR_4->return_column = VAR_0;
  VAR_4->per_encoding = VAR_1;
  VAR_4->lsda_encoding = VAR_1;

  return VAR_4;
}
