
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct resource {int dummy; } ;
struct bhndb_host_resources {TYPE_1__* resource_specs; struct resource** resources; } ;
typedef int rman_res_t ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 (struct resource*) ;
 int FUNC_1 (struct resource*) ;

struct resource *
FUNC_2(struct bhndb_host_resources *VAR_0, int VAR_1,
    rman_res_t VAR_2, rman_res_t VAR_3)
{
 for (u_int VAR_4 = 0; VAR_0->resource_specs[VAR_4].type != -1; VAR_4++) {
  struct resource *VAR_5 = VAR_0->resources[VAR_4];

  if (VAR_0->resource_specs[VAR_4].type != VAR_1)
   continue;


  if (FUNC_1(VAR_5) > VAR_2)
   continue;

  if (FUNC_0(VAR_5) < (VAR_2 + VAR_3 - 1))
   continue;

  return (VAR_5);
 }

 return (((void*)0));
}
