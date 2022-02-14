
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct emu_mem {int dmat; TYPE_1__* card; } ;
typedef int bus_dmamap_t ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_2__ {int dbg_level; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,void*,int ,int ,scalar_t__*,int ) ;
 int FUNC_1 (int ,void**,int ,int *) ;
 int FUNC_2 (int ,void*,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void *
FUNC_4(struct emu_mem *VAR_2, uint32_t VAR_3, bus_addr_t * VAR_4,
    bus_dmamap_t *VAR_5)
{
 void *VAR_6;
 int VAR_7;

 *VAR_4 = 0;
 if ((VAR_7 = FUNC_1(VAR_2->dmat, &VAR_6, VAR_0, VAR_5))) {
  if (VAR_2->card->dbg_level > 2)
   FUNC_3(VAR_2->card->dev, "emu_malloc: failed to alloc DMA map: %d\n", VAR_7);
  return (((void*)0));
  }
 if ((VAR_7 = FUNC_0(VAR_2->dmat, *VAR_5, VAR_6, VAR_3, VAR_1, VAR_4, 0)) || !*VAR_4) {
  if (VAR_2->card->dbg_level > 2)
   FUNC_3(VAR_2->card->dev, "emu_malloc: failed to load DMA memory: %d\n", VAR_7);
  FUNC_2(VAR_2->dmat, VAR_6, *VAR_5);
  return (((void*)0));
  }
 return (VAR_6);
}
