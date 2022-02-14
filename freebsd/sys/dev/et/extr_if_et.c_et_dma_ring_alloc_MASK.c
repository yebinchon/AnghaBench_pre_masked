
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct et_softc {int dev; int sc_dtag; } ;
struct et_dmamap_arg {scalar_t__ et_busaddr; } ;
typedef int bus_size_t ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *,int ,int ,struct et_dmamap_arg*,int) ;
 int FUNC_2 (int ,void**,int,int *) ;
 int FUNC_3 (int ,char*,char const*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct et_softc *VAR_5, bus_size_t VAR_6, bus_size_t VAR_7,
    bus_dma_tag_t *VAR_8, uint8_t **VAR_9, bus_dmamap_t *VAR_10, bus_addr_t *VAR_11,
    const char *VAR_12)
{
 struct et_dmamap_arg VAR_13;
 int VAR_14;

 VAR_14 = FUNC_0(VAR_5->sc_dtag, VAR_6, 0, VAR_3,
     VAR_3, ((void*)0), ((void*)0), VAR_7, 1, VAR_7, 0, ((void*)0), ((void*)0),
     VAR_8);
 if (VAR_14 != 0) {
  FUNC_3(VAR_5->dev, "could not create %s dma tag\n", VAR_12);
  return (VAR_14);
 }

 VAR_14 = FUNC_2(*VAR_8, (void **)VAR_9,
     VAR_1 | VAR_2 | VAR_0, VAR_10);
 if (VAR_14 != 0) {
  FUNC_3(VAR_5->dev,
      "could not allocate DMA'able memory for %s\n", VAR_12);
  return (VAR_14);
 }

 VAR_13.et_busaddr = 0;
 VAR_14 = FUNC_1(*VAR_8, *VAR_10, *VAR_9, VAR_7, VAR_4,
     &VAR_13, VAR_1);
 if (VAR_14 != 0) {
  FUNC_3(VAR_5->dev,
      "could not load DMA'able memory for %s\n", VAR_12);
  return (VAR_14);
 }
 *VAR_11 = VAR_13.et_busaddr;
 return (0);
}
