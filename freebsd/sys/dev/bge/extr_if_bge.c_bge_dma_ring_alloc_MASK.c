
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int bge_parent_tag; } ;
struct bge_softc {int bge_flags; int bge_dev; TYPE_1__ bge_cdata; } ;
struct bge_dmamap_arg {scalar_t__ bge_busaddr; } ;
typedef scalar_t__ bus_size_t ;
typedef int * bus_dmamap_t ;
typedef int * bus_dma_tag_t ;
typedef scalar_t__ bus_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,scalar_t__,int ,scalar_t__,scalar_t__,int *,int *,scalar_t__,int,scalar_t__,int ,int *,int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,scalar_t__,int ,struct bge_dmamap_arg*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,void**,int,int **) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int ,char*,char const*) ;

__attribute__((used)) static int
FUNC_8(struct bge_softc *VAR_9, bus_size_t VAR_10,
    bus_size_t VAR_11, bus_dma_tag_t *VAR_12, uint8_t **VAR_13, bus_dmamap_t *VAR_14,
    bus_addr_t *VAR_15, const char *VAR_16)
{
 struct bge_dmamap_arg VAR_17;
 bus_addr_t VAR_18;
 bus_size_t VAR_19;
 int VAR_20;

 VAR_18 = VAR_4;
again:
 VAR_20 = FUNC_1(VAR_9->bge_cdata.bge_parent_tag,
     VAR_10, 0, VAR_18, VAR_4, ((void*)0),
     ((void*)0), VAR_11, 1, VAR_11, 0, ((void*)0), ((void*)0), VAR_12);
 if (VAR_20 != 0) {
  FUNC_7(VAR_9->bge_dev,
      "could not create %s dma tag\n", VAR_16);
  return (VAR_6);
 }

 VAR_20 = FUNC_5(*VAR_12, (void **)VAR_13,
     VAR_2 | VAR_3 | VAR_1, VAR_14);
 if (VAR_20 != 0) {
  FUNC_7(VAR_9->bge_dev,
      "could not allocate DMA'able memory for %s\n", VAR_16);
  return (VAR_6);
 }

 VAR_17.bge_busaddr = 0;
 VAR_20 = FUNC_3(*VAR_12, *VAR_14, *VAR_13, VAR_11, VAR_7,
     &VAR_17, VAR_2);
 if (VAR_20 != 0) {
  FUNC_7(VAR_9->bge_dev,
      "could not load DMA'able memory for %s\n", VAR_16);
  return (VAR_6);
 }
 *VAR_15 = VAR_17.bge_busaddr;
 VAR_19 = *VAR_15 + VAR_11;
 if ((VAR_9->bge_flags & VAR_0) != 0 &&
     FUNC_0(*VAR_15) != FUNC_0(VAR_19)) {




  FUNC_4(*VAR_12, *VAR_14);
  FUNC_6(*VAR_12, *VAR_13, *VAR_14);
  FUNC_2(*VAR_12);
  if (VAR_8)
   FUNC_7(VAR_9->bge_dev, "4GB boundary crossed, "
       "limit DMA address space to 32bit for %s\n", VAR_16);
  *VAR_13 = ((void*)0);
  *VAR_12 = ((void*)0);
  *VAR_14 = ((void*)0);
  VAR_18 = VAR_5;
  goto again;
 }
 return (0);
}
