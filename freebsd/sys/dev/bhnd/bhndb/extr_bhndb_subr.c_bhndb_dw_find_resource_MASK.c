
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct bhndb_resources {size_t dwa_count; struct bhndb_dw_alloc* dw_alloc; } ;
struct bhndb_dw_alloc {int dummy; } ;


 int * FUNC_0 (struct bhndb_dw_alloc*,struct resource*) ;
 scalar_t__ FUNC_1 (struct bhndb_resources*,struct bhndb_dw_alloc*) ;

struct bhndb_dw_alloc *
FUNC_2(struct bhndb_resources *VAR_0, struct resource *VAR_1)
{
 struct bhndb_dw_alloc *VAR_2;

 for (size_t VAR_3 = 0; VAR_3 < VAR_0->dwa_count; VAR_3++) {
  VAR_2 = &VAR_0->dw_alloc[VAR_3];


  if (FUNC_1(VAR_0, VAR_2))
   continue;


  if (FUNC_0(VAR_2, VAR_1) != ((void*)0))
   return (VAR_2);
 }

 return (((void*)0));
}
