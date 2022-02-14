
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_host_resources {size_t num_dma_tags; struct bhndb_host_resources* dma_tags; struct bhndb_host_resources* resource_specs; struct bhndb_host_resources* resources; int owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct bhndb_host_resources) ;
 int FUNC_1 (int ,struct bhndb_host_resources*,struct bhndb_host_resources*) ;
 int FUNC_2 (struct bhndb_host_resources*,int ) ;

void
FUNC_3(struct bhndb_host_resources *VAR_1)
{
 FUNC_1(VAR_1->owner, VAR_1->resource_specs, VAR_1->resources);

 for (size_t VAR_2 = 0; VAR_2 < VAR_1->num_dma_tags; VAR_2++)
  FUNC_0(VAR_1->dma_tags[VAR_2]);

 FUNC_2(VAR_1->resources, VAR_0);
 FUNC_2(VAR_1->resource_specs, VAR_0);
 FUNC_2(VAR_1->dma_tags, VAR_0);
 FUNC_2(VAR_1, VAR_0);
}
