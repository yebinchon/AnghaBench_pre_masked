
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct resource_spec {int type; scalar_t__ rid; } ;
struct resource {int dummy; } ;
struct TYPE_2__ {int type; scalar_t__ rid; } ;
struct bhndb_regwin {TYPE_1__ res; } ;
struct bhndb_host_resources {int owner; struct resource** resources; struct resource_spec* resource_specs; } ;


 int FUNC_0 (int ,char*,int,scalar_t__) ;

struct resource *
FUNC_1(struct bhndb_host_resources *VAR_0,
    const struct bhndb_regwin *VAR_1)
{
 const struct resource_spec *VAR_2;

 VAR_2 = VAR_0->resource_specs;
 for (u_int VAR_3 = 0; VAR_2[VAR_3].type != -1; VAR_3++) {
  if (VAR_1->res.type != VAR_2[VAR_3].type)
   continue;

  if (VAR_1->res.rid != VAR_2[VAR_3].rid)
   continue;


  return (VAR_0->resources[VAR_3]);
 }

 FUNC_0(VAR_0->owner, "missing regwin resource spec "
     "(type=%d, rid=%d)\n", VAR_1->res.type, VAR_1->res.rid);

 return (((void*)0));
}
