
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct tree_map {int to; int from; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tree_map* FUNC_0 (int ,struct tree_map*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static tree
FUNC_2 (tree VAR_2)
{
  struct tree_map *VAR_3, VAR_4;
  VAR_4.from = VAR_2;

  VAR_3 = FUNC_0 (VAR_1, &VAR_4, FUNC_1 (VAR_2));
  if (VAR_3)
    return VAR_3->to;
  return VAR_0;
}
