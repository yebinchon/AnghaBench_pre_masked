
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_5__ {int dev; } ;
struct dcons_crom_softc {scalar_t__ bus_addr; int dma_map; int dma_tag; TYPE_1__ fd; } ;
struct TYPE_6__ {scalar_t__ ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_7__ {int cdev; int dma_map; int dma_tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_4__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4, bus_dma_segment_t *VAR_5, int VAR_6, int VAR_7)
{
 struct dcons_crom_softc *VAR_8;

 if (VAR_7)
  FUNC_3("dcons_dmamap_cb: error=%d\n", VAR_7);

 VAR_8 = (struct dcons_crom_softc *)VAR_4;
 VAR_8->bus_addr = VAR_5[0].ds_addr;

 FUNC_0(VAR_8->dma_tag, VAR_8->dma_map, VAR_0);
 FUNC_2(VAR_8->fd.dev,
     "bus_addr 0x%jx\n", (uintmax_t)VAR_8->bus_addr);
 if (VAR_2 != 0) {

  FUNC_2(VAR_8->fd.dev, "dcons_paddr is already set\n");
  return;
 }
 VAR_1->dma_tag = VAR_8->dma_tag;
 VAR_1->dma_map = VAR_8->dma_map;
 VAR_2 = VAR_8->bus_addr;


 if (VAR_3)
  FUNC_1(VAR_1->cdev);
}
