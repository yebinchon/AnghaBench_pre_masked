
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_key {int start_line; int start_file; int name; } ;
typedef scalar_t__ splay_tree_key ;


 int FUNC_0 (struct macro_key*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1 (splay_tree_key VAR_0,
                    splay_tree_key VAR_1)
{
  struct macro_key *VAR_2 = (struct macro_key *) VAR_0;
  struct macro_key *VAR_3 = (struct macro_key *) VAR_1;

  return FUNC_0 (VAR_2, VAR_3->name, VAR_3->start_file, VAR_3->start_line);
}
