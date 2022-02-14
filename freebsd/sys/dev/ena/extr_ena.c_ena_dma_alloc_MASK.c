
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct ena_adapter {int dma_width; } ;
struct TYPE_3__ {scalar_t__ paddr; int * vaddr; int * tag; int map; } ;
typedef TYPE_1__ ena_mem_handle_t ;
typedef int device_t ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,int,int ,scalar_t__,scalar_t__,int *,int *,int,int,int,int ,int *,int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,int,int ,scalar_t__*,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,void**,int,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ) ;
 struct ena_adapter* FUNC_8 (int ) ;
 int VAR_8 ;
 int FUNC_9 (int ,char*,int,...) ;
 scalar_t__ FUNC_10 (int) ;

int
FUNC_11(device_t VAR_9, bus_size_t VAR_10,
    ena_mem_handle_t *VAR_11 , int VAR_12)
{
 struct ena_adapter* VAR_13 = FUNC_8(VAR_9);
 uint32_t VAR_14;
 uint64_t VAR_15;
 int VAR_16;

 VAR_14 = ((VAR_10 - 1) / VAR_7 + 1) * VAR_7;

 VAR_15 = FUNC_0(VAR_13->dma_width);
 if (FUNC_10(VAR_15 == 0))
  VAR_15 = VAR_5;

 VAR_16 = FUNC_1(FUNC_7(VAR_9),
     8, 0,
     VAR_15,
     VAR_5,
     ((void*)0), ((void*)0),
     VAR_14,
     1,
     VAR_14,
     VAR_2,
     ((void*)0),
     ((void*)0),
     &VAR_11->tag);
 if (FUNC_10(VAR_16 != 0)) {
  FUNC_9(VAR_6, "bus_dma_tag_create failed: %d\n", VAR_16);
  goto fail_tag;
 }

 VAR_16 = FUNC_5(VAR_11->tag, (void**) &VAR_11->vaddr,
     VAR_3 | VAR_4, &VAR_11->map);
 if (FUNC_10(VAR_16 != 0)) {
  FUNC_9(VAR_6, "bus_dmamem_alloc(%ju) failed: %d\n",
      (uintmax_t)VAR_10, VAR_16);
  goto fail_map_create;
 }

 VAR_11->paddr = 0;
 VAR_16 = FUNC_3(VAR_11->tag, VAR_11->map, VAR_11->vaddr,
     VAR_10, VAR_8, &VAR_11->paddr, VAR_12);
 if (FUNC_10((VAR_16 != 0) || (VAR_11->paddr == 0))) {
  FUNC_9(VAR_6, ": bus_dmamap_load failed: %d\n", VAR_16);
  goto fail_map_load;
 }

 FUNC_4(VAR_11->tag, VAR_11->map,
     VAR_0 | VAR_1);

 return (0);

fail_map_load:
 FUNC_6(VAR_11->tag, VAR_11->vaddr, VAR_11->map);
fail_map_create:
 FUNC_2(VAR_11->tag);
fail_tag:
 VAR_11->tag = ((void*)0);
 VAR_11->vaddr = ((void*)0);
 VAR_11->paddr = 0;

 return (VAR_16);
}
