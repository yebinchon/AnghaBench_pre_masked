
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_resources {size_t dwa_count; struct bhndb_dw_alloc* dw_alloc; } ;
struct bhndb_regwin {scalar_t__ win_size; } ;
struct bhndb_dw_alloc {scalar_t__ target; struct bhndb_regwin* win; } ;
typedef scalar_t__ bhnd_size_t ;
typedef scalar_t__ bhnd_addr_t ;



struct bhndb_dw_alloc *
FUNC_0(struct bhndb_resources *VAR_0, bhnd_addr_t VAR_1,
    bhnd_size_t VAR_2)
{
 struct bhndb_dw_alloc *VAR_3;
 const struct bhndb_regwin *VAR_4;


 for (size_t VAR_5 = 0; VAR_5 < VAR_0->dwa_count; VAR_5++) {
  VAR_3 = &VAR_0->dw_alloc[VAR_5];
  VAR_4 = VAR_3->win;


  if (VAR_1 < VAR_3->target)
   continue;

  if (VAR_1 + VAR_2 > VAR_3->target + VAR_4->win_size)
   continue;


  return (VAR_3);
 }


 return (((void*)0));
}
