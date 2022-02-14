
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct macro_source_file {int dummy; } ;
struct macro_key {int start_line; struct macro_source_file* start_file; } ;
typedef TYPE_1__* splay_tree_node ;
struct TYPE_3__ {scalar_t__ key; } ;


 TYPE_1__* FUNC_0 (char const*,struct macro_source_file*,int) ;

struct macro_source_file *
FUNC_1 (struct macro_source_file *VAR_0,
                           int VAR_1,
                           const char *VAR_2,
                           int *VAR_3)
{
  splay_tree_node VAR_4 = FUNC_0 (VAR_2, VAR_0, VAR_1);

  if (VAR_4)
    {
      struct macro_key *VAR_5 = (struct macro_key *) VAR_4->key;
      *VAR_3 = VAR_5->start_line;
      return VAR_5->start_file;
    }
  else
    return 0;
}
