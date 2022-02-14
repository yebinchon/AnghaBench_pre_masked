
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct bhndb_hwcfg {struct bhndb_host_resources* resource_specs; struct bhnd_dma_translation* dma_translations; } ;
struct bhndb_host_resources {size_t num_dma_tags; int type; struct bhndb_host_resources* dma_tags; struct bhndb_host_resources* resources; struct bhndb_host_resources* resource_specs; int owner; struct bhndb_hwcfg const* cfg; } ;
struct bhnd_dma_translation {int base_addr; int addr_mask; int addrext_mask; } ;
typedef int device_t ;
typedef int bus_dma_tag_t ;


 int FUNC_0 (struct bhnd_dma_translation const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct bhnd_dma_translation*,struct bhndb_host_resources*) ;
 int FUNC_2 (int ,struct bhndb_host_resources*,struct bhndb_host_resources*) ;
 int FUNC_3 (struct bhndb_host_resources) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,int) ;
 int FUNC_7 (struct bhndb_host_resources*,int ) ;
 void* FUNC_8 (int,int ,int) ;

int
FUNC_9(struct bhndb_host_resources **VAR_4,
    device_t VAR_5, device_t VAR_6, const struct bhndb_hwcfg *VAR_7)
{
 struct bhndb_host_resources *VAR_8;
 const struct bhnd_dma_translation *VAR_9;
 bus_dma_tag_t VAR_10;
 size_t VAR_11, VAR_12;
 int VAR_13;

 VAR_10 = FUNC_4(VAR_6);

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_1, VAR_2);
 VAR_8->owner = VAR_6;
 VAR_8->cfg = VAR_7;
 VAR_8->resource_specs = ((void*)0);
 VAR_8->resources = ((void*)0);
 VAR_8->dma_tags = ((void*)0);
 VAR_8->num_dma_tags = 0;


 VAR_11 = 0;
 for (size_t VAR_14 = 0; VAR_7->resource_specs[VAR_14].type != -1; VAR_14++)
  VAR_11++;


 VAR_12 = 0;
 for (VAR_9 = VAR_7->dma_translations; VAR_9 != ((void*)0) &&
     !FUNC_0(VAR_9); VAR_9++)
 {

  if ((VAR_9->base_addr & VAR_9->addr_mask) != 0) {
   FUNC_6(VAR_5, "invalid DMA translation; base "
       "address %#jx overlaps address mask %#jx",
       (uintmax_t)VAR_9->base_addr, (uintmax_t)VAR_9->addr_mask);

   VAR_13 = VAR_0;
   goto failed;
  }

  if ((VAR_9->addrext_mask & VAR_9->addr_mask) != 0) {
   FUNC_6(VAR_5, "invalid DMA translation; addrext "
       "mask %#jx overlaps address mask %#jx",
       (uintmax_t)VAR_9->addrext_mask,
       (uintmax_t)VAR_9->addr_mask);

   VAR_13 = VAR_0;
   goto failed;
  }


  VAR_12++;
 }


 VAR_8->dma_tags = FUNC_8(sizeof(*VAR_8->dma_tags) * VAR_12, VAR_1,
     VAR_2|VAR_3);
 for (size_t VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
  VAR_13 = FUNC_1(VAR_5, VAR_10,
      &VAR_7->dma_translations[VAR_15], &VAR_8->dma_tags[VAR_15]);
  if (VAR_13)
   goto failed;

  VAR_8->num_dma_tags++;
 }




 VAR_8->resource_specs = FUNC_8(sizeof(VAR_8->resource_specs[0]) * (VAR_11 + 1),
     VAR_1, VAR_2);


 for (size_t VAR_16 = 0; VAR_16 < VAR_11; VAR_16++)
  VAR_8->resource_specs[VAR_16] = VAR_7->resource_specs[VAR_16];

 VAR_8->resource_specs[VAR_11].type = -1;


 VAR_8->resources = FUNC_8(sizeof(VAR_8->resources[0]) * VAR_11, VAR_1,
     VAR_2);


 VAR_13 = FUNC_2(VAR_8->owner, VAR_8->resource_specs,
     VAR_8->resources);
 if (VAR_13) {
  FUNC_6(VAR_5, "could not allocate bridge resources via "
      "%s: %d\n", FUNC_5(VAR_6), VAR_13);
  goto failed;
 }

 *VAR_4 = VAR_8;
 return (0);

failed:
 if (VAR_8->resource_specs != ((void*)0))
  FUNC_7(VAR_8->resource_specs, VAR_1);

 if (VAR_8->resources != ((void*)0))
  FUNC_7(VAR_8->resources, VAR_1);

 for (size_t VAR_17 = 0; VAR_17 < VAR_8->num_dma_tags; VAR_17++)
  FUNC_3(VAR_8->dma_tags[VAR_17]);

 if (VAR_8->dma_tags != ((void*)0))
  FUNC_7(VAR_8->dma_tags, VAR_1);

 FUNC_7(VAR_8, VAR_1);

 return (VAR_13);
}
