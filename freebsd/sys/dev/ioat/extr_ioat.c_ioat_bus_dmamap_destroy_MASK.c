
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_softc {int dummy; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,char const*,int) ;

__attribute__((used)) static inline int
FUNC_2(struct ioat_softc *VAR_0, const char *VAR_1,
    bus_dma_tag_t VAR_2, bus_dmamap_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 != 0) {
  FUNC_1(0,
      "%s: bus_dmamap_destroy failed %d\n", VAR_1, VAR_4);
 }

 return (VAR_4);
}
