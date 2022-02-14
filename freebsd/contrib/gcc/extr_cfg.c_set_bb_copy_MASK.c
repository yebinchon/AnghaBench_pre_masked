
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct htab_bb_copy_original_entry {int index2; int index1; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct htab_bb_copy_original_entry*,int ) ;
 scalar_t__ VAR_2 ;
 struct htab_bb_copy_original_entry* FUNC_1 (scalar_t__) ;

void
FUNC_2 (basic_block VAR_3, basic_block VAR_4)
{
  if (VAR_2)
    {
      struct htab_bb_copy_original_entry **VAR_5;
      struct htab_bb_copy_original_entry VAR_6;

      VAR_6.index1 = VAR_3->index;
      VAR_5 =
 (struct htab_bb_copy_original_entry **) FUNC_0 (VAR_1,
              &VAR_6, VAR_0);
      if (*VAR_5)
 (*VAR_5)->index2 = VAR_4->index;
      else
 {
   *VAR_5 = FUNC_1 (VAR_2);
   (*VAR_5)->index1 = VAR_3->index;
   (*VAR_5)->index2 = VAR_4->index;
 }
    }
}
