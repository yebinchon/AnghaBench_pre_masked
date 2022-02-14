
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct int_tree_map {unsigned int uid; int to; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct int_tree_map*,unsigned int) ;
 int VAR_1 ;

tree
FUNC_2 (unsigned int VAR_2)
{
  struct int_tree_map *VAR_3, VAR_4;
  VAR_4.uid = VAR_2;
  VAR_3 = (struct int_tree_map *) FUNC_1 (VAR_1, &VAR_4, VAR_2);
  FUNC_0 (VAR_3 || VAR_2 == 0);
  if (VAR_3)
    return VAR_3->to;
  return VAR_0;
}
