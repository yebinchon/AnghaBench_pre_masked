
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct tree_map {int to; int hash; int from; } ;
typedef int htab_t ;


 int VAR_0 ;
 int VAR_1 ;
 void** FUNC_0 (int ,struct tree_map*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline tree
FUNC_2 (htab_t VAR_2, tree VAR_3)
{
  struct tree_map VAR_4;
  struct tree_map *VAR_5;
  void **VAR_6 = ((void*)0);

  VAR_4.from = VAR_3;
  VAR_4.hash = FUNC_1 (VAR_3);
  VAR_6 = FUNC_0 (VAR_2, &VAR_4, VAR_0);

  if (!VAR_6)
    return VAR_1;

  VAR_5 = (struct tree_map *) *VAR_6;
  return VAR_5->to;
}
