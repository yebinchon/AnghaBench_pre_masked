
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct netmap_mem_d {int flags; TYPE_1__* pools; } ;
struct TYPE_2__ {size_t _clustsize; size_t numclusters; } ;


 int VAR_0 ;
 size_t VAR_1 ;

int
FUNC_0(struct netmap_mem_d* VAR_2, u_int VAR_3, u_int *VAR_4, u_int *VAR_5)
{
 if (!VAR_2 || !VAR_4 || !VAR_5 || VAR_3 >= VAR_1)
  return 1;

 if (!(VAR_2->flags & VAR_0)) {
  *VAR_4 = *VAR_5 = 0;
  return 1;
 }
 *VAR_4 = VAR_2->pools[VAR_3]._clustsize;
 *VAR_5 = VAR_2->pools[VAR_3].numclusters;
 return 0;
}
