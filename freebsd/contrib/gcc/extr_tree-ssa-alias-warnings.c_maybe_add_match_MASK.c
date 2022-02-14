
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_map {scalar_t__ to; } ;
typedef int htab_t ;


 struct tree_map* FUNC_0 (int ,struct tree_map*) ;

__attribute__((used)) static inline void
FUNC_1 (htab_t VAR_0, struct tree_map *VAR_1)
{
  struct tree_map *VAR_2 = FUNC_0 (VAR_0, VAR_1);

  if (VAR_2 && !VAR_2->to)
    VAR_2->to = VAR_1->to;
}
