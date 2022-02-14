
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_softc {int sc_dev; } ;
struct sec_dma_mem {int dma_is_map; int * dma_vaddr; int dma_tag; int dma_map; } ;
struct sec_desc_map_info {int dummy; } ;
struct mbuf {int dummy; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sec_softc*) ;
 int VAR_6 ;



 int FUNC_1 (int *,int ,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,void*,int,int ,struct sec_desc_map_info*,int ) ;
 int FUNC_6 (int ,int ,void*,int ,struct sec_desc_map_info*,int ) ;
 int FUNC_7 (int ,int ,void*,int ,struct sec_desc_map_info*,int ) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (struct mbuf*,int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_10(struct sec_softc *VAR_9, struct sec_dma_mem *VAR_10, void *VAR_11,
    bus_size_t VAR_12, int VAR_13, struct sec_desc_map_info *VAR_14)
{
 int VAR_15;

 if (VAR_10->dma_vaddr != ((void*)0))
  return (VAR_3);

 switch (VAR_13) {
 case 129:
  break;
 case 128:
  VAR_12 = FUNC_0(VAR_9) * VAR_6;
  break;
 case 130:
  VAR_12 = FUNC_9((struct mbuf*)VAR_11, ((void*)0));
  break;
 default:
  return (VAR_4);
 }

 VAR_15 = FUNC_1(((void*)0),
  VAR_5, 0,
  VAR_2,
  VAR_1,
  ((void*)0), ((void*)0),
  VAR_12,
  FUNC_0(VAR_9),
  VAR_6, 0,
  ((void*)0), ((void*)0),
  &(VAR_10->dma_tag));

 if (VAR_15) {
  FUNC_8(VAR_9->sc_dev, "failed to allocate busdma tag, error"
      " %i!\n", VAR_15);
  VAR_10->dma_vaddr = ((void*)0);
  return (VAR_15);
 }

 VAR_15 = FUNC_3(VAR_10->dma_tag, 0, &(VAR_10->dma_map));

 if (VAR_15) {
  FUNC_8(VAR_9->sc_dev, "failed to create DMA map, error %i!"
      "\n", VAR_15);
  FUNC_2(VAR_10->dma_tag);
  return (VAR_15);
 }

 switch (VAR_13) {
 case 129:
  VAR_15 = FUNC_5(VAR_10->dma_tag, VAR_10->dma_map,
      VAR_11, VAR_12, VAR_7, VAR_14, VAR_0);
  break;
 case 128:
  VAR_15 = FUNC_7(VAR_10->dma_tag, VAR_10->dma_map,
      VAR_11, VAR_8, VAR_14, VAR_0);
  break;
 case 130:
  VAR_15 = FUNC_6(VAR_10->dma_tag, VAR_10->dma_map,
      VAR_11, VAR_8, VAR_14, VAR_0);
  break;
 }

 if (VAR_15) {
  FUNC_8(VAR_9->sc_dev, "cannot get address of the DMA"
      " memory, error %i!\n", VAR_15);
  FUNC_4(VAR_10->dma_tag, VAR_10->dma_map);
  FUNC_2(VAR_10->dma_tag);
  return (VAR_15);
 }

 VAR_10->dma_is_map = 1;
 VAR_10->dma_vaddr = VAR_11;

 return (0);
}
