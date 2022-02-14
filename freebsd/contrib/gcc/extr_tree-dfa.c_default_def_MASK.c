
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct int_tree_map {int to; int uid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct int_tree_map*,int ) ;

tree
FUNC_4 (tree VAR_2)
{
  struct int_tree_map *VAR_3, VAR_4;
  FUNC_2 (FUNC_1 (VAR_2));
  VAR_4.uid = FUNC_0 (VAR_2);
  VAR_3 = (struct int_tree_map *) FUNC_3 (VAR_1, &VAR_4,
                                                   FUNC_0 (VAR_2));
  if (VAR_3)
    return VAR_3->to;
  return VAR_0;
}
