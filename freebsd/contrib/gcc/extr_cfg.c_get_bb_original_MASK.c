
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct htab_bb_copy_original_entry {int index2; int index1; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_5__ {int index; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct htab_bb_copy_original_entry*) ;
 int VAR_1 ;

basic_block
FUNC_3 (basic_block VAR_2)
{
  struct htab_bb_copy_original_entry *VAR_3;
  struct htab_bb_copy_original_entry VAR_4;

  FUNC_1 (VAR_1);

  VAR_4.index1 = VAR_2->index;
  VAR_3 = (struct htab_bb_copy_original_entry *) FUNC_2 (VAR_0, &VAR_4);
  if (VAR_3)
    return FUNC_0 (VAR_3->index2);
  else
    return ((void*)0);
}
