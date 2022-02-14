
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct et_softc {int dummy; } ;
typedef int bus_dmamap_t ;
typedef int * bus_dma_tag_t ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct et_softc *VAR_0, bus_dma_tag_t *VAR_1, uint8_t **VAR_2,
    bus_dmamap_t VAR_3, bus_addr_t *VAR_4)
{

 if (*VAR_4 != 0) {
  FUNC_1(*VAR_1, VAR_3);
  *VAR_4 = 0;
 }
 if (*VAR_2 != ((void*)0)) {
  FUNC_2(*VAR_1, *VAR_2, VAR_3);
  *VAR_2 = ((void*)0);
 }
 if (*VAR_1) {
  FUNC_0(*VAR_1);
  *VAR_1 = ((void*)0);
 }
}
