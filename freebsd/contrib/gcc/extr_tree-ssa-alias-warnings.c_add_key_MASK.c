
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct tree_map {int from; int hash; int to; } ;
typedef int htab_t ;
typedef int alloc_pool ;


 int VAR_0 ;
 int VAR_1 ;
 void** FUNC_0 (int ,struct tree_map*,int ) ;
 int FUNC_1 (int ) ;
 struct tree_map* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (htab_t VAR_2, tree VAR_3, alloc_pool VAR_4)
{
  void **VAR_5;
  struct tree_map *VAR_6 = FUNC_2 (VAR_4);

  VAR_6->from = VAR_3;
  VAR_6->to = VAR_1;
  VAR_6->hash = FUNC_1(VAR_6->from);

  VAR_5 = FUNC_0 (VAR_2, VAR_6, VAR_0);
  *VAR_5 = (void *) VAR_6;
}
