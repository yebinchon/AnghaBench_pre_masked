
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_table {int definitions; } ;
struct macro_source_file {struct macro_table* table; } ;
struct macro_key {int dummy; } ;
struct macro_definition {int dummy; } ;
typedef int splay_tree_value ;
typedef int splay_tree_key ;


 struct macro_key* FUNC_0 (struct macro_source_file*,int,char const*,int ,int ,int ,char const*) ;
 int FUNC_1 (struct macro_key*,char const*,struct macro_source_file*,int) ;
 int VAR_0 ;
 struct macro_definition* FUNC_2 (struct macro_table*,int ,int ,int ,char const*) ;
 struct macro_key* FUNC_3 (struct macro_table*,char const*,struct macro_source_file*,int) ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5 (struct macro_source_file *VAR_1, int VAR_2,
                     const char *VAR_3, const char *VAR_4)
{
  struct macro_table *VAR_5 = VAR_1->table;
  struct macro_key *VAR_6;
  struct macro_definition *VAR_7;

  VAR_6 = FUNC_0 (VAR_1, VAR_2,
                              VAR_3, VAR_0,
                              0, 0,
                              VAR_4);
  if (VAR_6 && ! FUNC_1 (VAR_6, VAR_3, VAR_1, VAR_2))
    return;

  VAR_6 = FUNC_3 (VAR_5, VAR_3, VAR_1, VAR_2);
  VAR_7 = FUNC_2 (VAR_5, VAR_0, 0, 0, VAR_4);
  FUNC_4 (VAR_5->definitions, (splay_tree_key) VAR_6, (splay_tree_value) VAR_7);
}
