
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct macro_table {int definitions; } ;
struct macro_source_file {struct macro_table* table; } ;
struct macro_key {char const* name; int start_line; int end_line; int * end_file; struct macro_source_file* start_file; } ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
struct TYPE_5__ {scalar_t__ key; } ;


 scalar_t__ FUNC_0 (struct macro_source_file*,int,int *,int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static splay_tree_node
FUNC_4 (const char *VAR_0,
                 struct macro_source_file *VAR_1,
                 int VAR_2)
{
  struct macro_table *VAR_3 = VAR_1->table;
  splay_tree_node VAR_4;


  struct macro_key VAR_5;

  VAR_5.name = VAR_0;
  VAR_5.start_file = VAR_1;
  VAR_5.start_line = VAR_2;
  VAR_5.end_file = ((void*)0);

  VAR_4 = FUNC_1 (VAR_3->definitions, (splay_tree_key) &VAR_5);
  if (! VAR_4)
    {






      splay_tree_node VAR_6 = FUNC_2 (VAR_3->definitions,
                                                     (splay_tree_key) &VAR_5);

      if (VAR_6)
        {


          struct macro_key *VAR_7 = (struct macro_key *) VAR_6->key;

          if (FUNC_3 (VAR_7->name, VAR_0) == 0)
            VAR_4 = VAR_6;
        }
    }

  if (VAR_4)
    {
      struct macro_key *VAR_8 = (struct macro_key *) VAR_4->key;




      if (FUNC_0 (VAR_1, VAR_2, VAR_8->end_file, VAR_8->end_line) < 0)
        return VAR_4;
      else
        return 0;
    }
  else
    return 0;
}
