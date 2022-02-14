
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
struct int_tree_map {unsigned int uid; int * to; } ;


 int VAR_0 ;
 struct int_tree_map* FUNC_0 (int ,struct int_tree_map*,unsigned int) ;

__attribute__((used)) static tree
FUNC_1 (unsigned int VAR_1)
{
  struct int_tree_map *VAR_2, VAR_3;
  VAR_3.uid = VAR_1;
  VAR_2 = FUNC_0 (VAR_0, &VAR_3, VAR_1);
  return VAR_2 ? VAR_2->to : ((void*)0);
}
