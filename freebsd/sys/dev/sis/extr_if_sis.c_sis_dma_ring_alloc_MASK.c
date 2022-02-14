
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sis_softc {int sis_dev; int sis_parent_tag; } ;
struct sis_dmamap_arg {scalar_t__ sis_busaddr; } ;
typedef int bus_size_t ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *,int ,int ,struct sis_dmamap_arg*,int) ;
 int FUNC_2 (int ,void**,int,int *) ;
 int FUNC_3 (int ,char*,char const*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_4(struct sis_softc *VAR_6, bus_size_t VAR_7,
    bus_size_t VAR_8, bus_dma_tag_t *VAR_9, uint8_t **VAR_10, bus_dmamap_t *VAR_11,
    bus_addr_t *VAR_12, const char *VAR_13)
{
 struct sis_dmamap_arg VAR_14;
 int VAR_15;

 VAR_15 = FUNC_0(VAR_6->sis_parent_tag, VAR_7, 0,
     VAR_3, VAR_3, ((void*)0), ((void*)0), VAR_8, 1,
     VAR_8, 0, ((void*)0), ((void*)0), VAR_9);
 if (VAR_15 != 0) {
  FUNC_3(VAR_6->sis_dev,
      "could not create %s dma tag\n", VAR_13);
  return (VAR_4);
 }

 VAR_15 = FUNC_2(*VAR_9, (void **)VAR_10,
     VAR_1 | VAR_2 | VAR_0, VAR_11);
 if (VAR_15 != 0) {
  FUNC_3(VAR_6->sis_dev,
      "could not allocate DMA'able memory for %s\n", VAR_13);
  return (VAR_4);
 }

 VAR_14.sis_busaddr = 0;
 VAR_15 = FUNC_1(*VAR_9, *VAR_11, *VAR_10, VAR_8, VAR_5,
     &VAR_14, VAR_1);
 if (VAR_15 != 0) {
  FUNC_3(VAR_6->sis_dev,
      "could not load DMA'able memory for %s\n", VAR_13);
  return (VAR_4);
 }
 *VAR_12 = VAR_14.sis_busaddr;
 return (0);
}
