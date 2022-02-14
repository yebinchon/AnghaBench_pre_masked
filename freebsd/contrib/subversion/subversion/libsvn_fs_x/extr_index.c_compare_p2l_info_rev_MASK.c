
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ change_set; } ;
typedef TYPE_2__ svn_fs_x__id_t ;
struct TYPE_8__ {TYPE_1__* entry; TYPE_2__** order; } ;
typedef TYPE_3__ sub_item_ordered_t ;
struct TYPE_6__ {int item_count; TYPE_2__* items; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(const sub_item_ordered_t * VAR_0,
                     const sub_item_ordered_t * VAR_1)
{
  svn_fs_x__id_t *VAR_2;
  svn_fs_x__id_t *VAR_3;

  FUNC_0(VAR_0 != VAR_1);
  if (VAR_0->entry->item_count == 0)
    return VAR_1->entry->item_count == 0 ? 0 : -1;
  if (VAR_1->entry->item_count == 0)
    return 1;

  VAR_2 = VAR_0->order ? VAR_0->order[VAR_0->entry->item_count - 1]
                        : &VAR_0->entry->items[0];
  VAR_3 = VAR_1->order ? VAR_1->order[VAR_1->entry->item_count - 1]
                        : &VAR_1->entry->items[0];

  if (VAR_2->change_set == VAR_3->change_set)
    return 0;

  return VAR_2->change_set < VAR_3->change_set ? -1 : 1;
}
