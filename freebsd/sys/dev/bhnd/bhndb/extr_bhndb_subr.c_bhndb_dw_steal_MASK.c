
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_resources {scalar_t__ dwa_count; struct bhndb_dw_alloc* dw_alloc; int dw_steal_mtx; } ;
struct bhndb_dw_alloc {int target; } ;
typedef int bus_addr_t ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (struct bhndb_resources*) ;
 int FUNC_2 (int *) ;

struct bhndb_dw_alloc *
FUNC_3(struct bhndb_resources *VAR_0, bus_addr_t *VAR_1)
{
 struct bhndb_dw_alloc *VAR_2;

 FUNC_0(FUNC_1(VAR_0) == ((void*)0),
     ("attempting to steal an in-use window while free windows remain"));


 if (VAR_0->dwa_count == 0)
  return (((void*)0));
 FUNC_2(&VAR_0->dw_steal_mtx);

 VAR_2 = &VAR_0->dw_alloc[0];
 *VAR_1 = VAR_2->target;
 return (VAR_2);
}
