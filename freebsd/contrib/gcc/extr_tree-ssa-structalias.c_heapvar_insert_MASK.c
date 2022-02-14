
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct tree_map {int hash; void* to; void* from; } ;


 int VAR_0 ;
 struct tree_map* FUNC_0 (int) ;
 int VAR_1 ;
 void** FUNC_1 (int ,struct tree_map*,int ,int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void
FUNC_3 (tree VAR_2, tree VAR_3)
{
  struct tree_map *VAR_4;
  void **VAR_5;

  VAR_4 = FUNC_0 (sizeof (struct tree_map));
  VAR_4->hash = FUNC_2 (VAR_2);
  VAR_4->from = VAR_2;
  VAR_4->to = VAR_3;
  VAR_5 = FUNC_1 (VAR_1, VAR_4, VAR_4->hash, VAR_0);
  *(struct tree_map **) VAR_5 = VAR_4;
}
