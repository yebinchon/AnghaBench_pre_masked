
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct splay_tree_s {int dummy; } ;
typedef int splay_tree_delete_value_fn ;
typedef int splay_tree_delete_key_fn ;
typedef int splay_tree_deallocate_fn ;
typedef int splay_tree_compare_fn ;
typedef int (* splay_tree_allocate_fn ) (int,void*) ;
typedef TYPE_1__* splay_tree ;
struct TYPE_3__ {void* allocate_data; int deallocate; int (* allocate ) (int,void*) ;int delete_value; int delete_key; int comp; scalar_t__ root; } ;


 int FUNC_0 (int,void*) ;

splay_tree
FUNC_1 (splay_tree_compare_fn VAR_0,
                               splay_tree_delete_key_fn VAR_1,
                               splay_tree_delete_value_fn VAR_2,
                               splay_tree_allocate_fn VAR_3,
                               splay_tree_deallocate_fn VAR_4,
                               void *VAR_5)
{
  splay_tree VAR_6 = (splay_tree) (*VAR_3) (sizeof (struct splay_tree_s),
                                               VAR_5);
  VAR_6->root = 0;
  VAR_6->comp = VAR_0;
  VAR_6->delete_key = VAR_1;
  VAR_6->delete_value = VAR_2;
  VAR_6->allocate = VAR_3;
  VAR_6->deallocate = VAR_4;
  VAR_6->allocate_data = VAR_5;

  return VAR_6;
}
