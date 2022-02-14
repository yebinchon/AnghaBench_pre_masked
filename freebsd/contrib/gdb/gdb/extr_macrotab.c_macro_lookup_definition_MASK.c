
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct macro_source_file {int dummy; } ;
struct macro_definition {int dummy; } ;
typedef TYPE_1__* splay_tree_node ;
struct TYPE_3__ {scalar_t__ value; } ;


 TYPE_1__* FUNC_0 (char const*,struct macro_source_file*,int) ;

struct macro_definition *
FUNC_1 (struct macro_source_file *VAR_0,
                         int VAR_1, const char *VAR_2)
{
  splay_tree_node VAR_3 = FUNC_0 (VAR_2, VAR_0, VAR_1);

  if (VAR_3)
    return (struct macro_definition *) VAR_3->value;
  else
    return 0;
}
