
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obstack {int dummy; } ;
struct macro_table {int definitions; int * main_source; struct bcache* bcache; struct obstack* obstack; } ;
struct bcache {int dummy; } ;
typedef int splay_tree_delete_value_fn ;
typedef int splay_tree_delete_key_fn ;
typedef int splay_tree_deallocate_fn ;
typedef int splay_tree_allocate_fn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct macro_table*,int ,int) ;
 struct macro_table* FUNC_1 (struct obstack*,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,struct macro_table*) ;
 struct macro_table* FUNC_3 (int) ;

struct macro_table *
FUNC_4 (struct obstack *VAR_5,
                 struct bcache *VAR_6)
{
  struct macro_table *VAR_7;


  if (VAR_5)
    VAR_7 = FUNC_1 (VAR_5, sizeof (*VAR_7));
  else
    VAR_7 = FUNC_3 (sizeof (*VAR_7));

  FUNC_0 (VAR_7, 0, sizeof (*VAR_7));
  VAR_7->obstack = VAR_5;
  VAR_7->bcache = VAR_6;
  VAR_7->main_source = ((void*)0);
  VAR_7->definitions = (FUNC_2
                    (VAR_2,
                     ((splay_tree_delete_key_fn) VAR_3),
                     ((splay_tree_delete_value_fn) VAR_4),
                     ((splay_tree_allocate_fn) VAR_0),
                     ((splay_tree_deallocate_fn) VAR_1),
                     VAR_7));

  return VAR_7;
}
