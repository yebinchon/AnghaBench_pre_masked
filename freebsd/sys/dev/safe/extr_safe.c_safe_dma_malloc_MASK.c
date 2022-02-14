
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int u_int32_t ;
struct safe_softc {int sc_dev; } ;
struct safe_dma_alloc {int * dma_tag; int dma_map; int dma_vaddr; scalar_t__ dma_size; int dma_paddr; } ;
typedef scalar_t__ bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,scalar_t__,int,scalar_t__,int ,int *,int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,scalar_t__,int ,int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,void**,int,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,...) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_8(
 struct safe_softc *VAR_5,
 bus_size_t VAR_6,
 struct safe_dma_alloc *VAR_7,
 int VAR_8
)
{
 int VAR_9;

 VAR_9 = FUNC_0(FUNC_6(VAR_5->sc_dev),
          sizeof(u_int32_t), 0,
          VAR_3,
          VAR_2,
          ((void*)0), ((void*)0),
          VAR_6,
          1,
          VAR_6,
          VAR_0,
          ((void*)0), ((void*)0),
          &VAR_7->dma_tag);
 if (VAR_9 != 0) {
  FUNC_7(VAR_5->sc_dev, "safe_dma_malloc: "
   "bus_dma_tag_create failed; error %u\n", VAR_9);
  goto fail_0;
 }

 VAR_9 = FUNC_4(VAR_7->dma_tag, (void**) &VAR_7->dma_vaddr,
        VAR_1, &VAR_7->dma_map);
 if (VAR_9 != 0) {
  FUNC_7(VAR_5->sc_dev, "safe_dma_malloc: "
   "bus_dmammem_alloc failed; size %ju, error %u\n",
   (uintmax_t)VAR_6, VAR_9);
  goto fail_1;
 }

 VAR_9 = FUNC_2(VAR_7->dma_tag, VAR_7->dma_map, VAR_7->dma_vaddr,
              VAR_6,
       VAR_4,
       &VAR_7->dma_paddr,
       VAR_8 | VAR_1);
 if (VAR_9 != 0) {
  FUNC_7(VAR_5->sc_dev, "safe_dma_malloc: "
   "bus_dmamap_load failed; error %u\n", VAR_9);
  goto fail_2;
 }

 VAR_7->dma_size = VAR_6;
 return (0);

 FUNC_3(VAR_7->dma_tag, VAR_7->dma_map);
fail_2:
 FUNC_5(VAR_7->dma_tag, VAR_7->dma_vaddr, VAR_7->dma_map);
fail_1:
 FUNC_1(VAR_7->dma_tag);
fail_0:
 VAR_7->dma_tag = ((void*)0);
 return (VAR_9);
}
