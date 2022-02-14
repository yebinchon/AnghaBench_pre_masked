
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dwmmc_softc {TYPE_1__* desc_ring; } ;
struct TYPE_5__ {int ds_addr; int ds_len; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_4__ {int des0; int des2; int des1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_5, bus_dma_segment_t *VAR_6, int VAR_7, int VAR_8)
{
 struct dwmmc_softc *VAR_9;
 int VAR_10;

 if (VAR_8 != 0)
  return;

 VAR_9 = VAR_5;

 FUNC_0("nsegs %d seg0len %lu\n", VAR_7, VAR_6[0].ds_len);

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_9->desc_ring[VAR_10].des0 = (VAR_4 | VAR_1 | VAR_0);
  VAR_9->desc_ring[VAR_10].des1 = VAR_6[VAR_10].ds_len;
  VAR_9->desc_ring[VAR_10].des2 = VAR_6[VAR_10].ds_addr;

  if (VAR_10 == 0)
   VAR_9->desc_ring[VAR_10].des0 |= VAR_2;

  if (VAR_10 == (VAR_7 - 1)) {
   VAR_9->desc_ring[VAR_10].des0 &= ~(VAR_1 | VAR_0);
   VAR_9->desc_ring[VAR_10].des0 |= VAR_3;
  }
 }
}
