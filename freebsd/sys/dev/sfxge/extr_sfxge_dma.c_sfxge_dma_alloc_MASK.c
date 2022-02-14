
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sfxge_softc {int dev; int parent_dma_tag; } ;
struct TYPE_3__ {scalar_t__ esm_addr; int esm_tag; int esm_map; int esm_size; void* esm_base; } ;
typedef TYPE_1__ efsys_mem_t ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,void*,int ,int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_4 (int ,void**,int,int *) ;
 int FUNC_5 (int ,void*,int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_6 ;

int
FUNC_7(struct sfxge_softc *VAR_7, bus_size_t VAR_8, efsys_mem_t *VAR_9)
{
 void *VAR_10;


 if (FUNC_1(VAR_7->parent_dma_tag, VAR_5, 0,
     FUNC_0(0x3FFFFFFFFFFFUL, VAR_3), VAR_3, ((void*)0),
     ((void*)0), VAR_8, 1, VAR_8, 0, ((void*)0), ((void*)0), &VAR_9->esm_tag) != 0) {
  FUNC_6(VAR_7->dev, "Couldn't allocate txq DMA tag\n");
  goto fail_tag_create;
 }


 if (FUNC_4(VAR_9->esm_tag, (void **)&VAR_10,
     VAR_1 | VAR_0 | VAR_2,
     &VAR_9->esm_map) != 0) {
  FUNC_6(VAR_7->dev, "Couldn't allocate DMA memory\n");
  goto fail_alloc;
 }


 if (FUNC_3(VAR_9->esm_tag, VAR_9->esm_map, VAR_10, VAR_8,
     VAR_6, &VAR_9->esm_addr, 0) != 0) {
  FUNC_6(VAR_7->dev, "Couldn't load DMA mapping\n");
  goto fail_load;
 }






 if (VAR_9->esm_addr == 0)
  goto fail_load_check;

 VAR_9->esm_base = VAR_10;
 VAR_9->esm_size = VAR_8;

 return (0);

fail_load_check:
fail_load:
 FUNC_5(VAR_9->esm_tag, VAR_10, VAR_9->esm_map);
fail_alloc:
 FUNC_2(VAR_9->esm_tag);
fail_tag_create:
 return (VAR_4);
}
