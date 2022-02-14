
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int dma_map; int dma_tag; scalar_t__ dma_vaddr; } ;
struct hdac_softc {size_t corb_wp; size_t corb_size; scalar_t__ unsolq_rp; scalar_t__ unsolq_wp; TYPE_2__* codecs; int unsolq_task; int dev; int mem; TYPE_1__ corb_dma; } ;
typedef size_t nid_t ;
struct TYPE_4__ {int response; scalar_t__ pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct hdac_softc*) ;
 scalar_t__ FUNC_5 (struct hdac_softc*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static uint32_t
FUNC_8(struct hdac_softc *VAR_7, nid_t VAR_8, uint32_t VAR_9)
{
 int VAR_10;
 uint32_t *VAR_11;

 if (!FUNC_4(VAR_7))
  FUNC_3(VAR_7->dev, "WARNING!!!! mtx not owned!!!!\n");
 VAR_9 &= ~VAR_3;
 VAR_9 |= ((uint32_t)VAR_8) << VAR_4;
 VAR_7->codecs[VAR_8].response = VAR_5;

 VAR_7->codecs[VAR_8].pending++;
 VAR_7->corb_wp++;
 VAR_7->corb_wp %= VAR_7->corb_size;
 VAR_11 = (uint32_t *)VAR_7->corb_dma.dma_vaddr;
 FUNC_2(VAR_7->corb_dma.dma_tag,
     VAR_7->corb_dma.dma_map, VAR_1);
 VAR_11[VAR_7->corb_wp] = FUNC_6(VAR_9);
 FUNC_2(VAR_7->corb_dma.dma_tag,
     VAR_7->corb_dma.dma_map, VAR_0);
 FUNC_1(&VAR_7->mem, VAR_2, VAR_7->corb_wp);

 VAR_10 = 10000;
 do {
  if (FUNC_5(VAR_7) == 0)
   FUNC_0(10);
 } while (VAR_7->codecs[VAR_8].pending != 0 && --VAR_10);

 if (VAR_7->codecs[VAR_8].pending != 0) {
  FUNC_3(VAR_7->dev, "Command timeout on address %d\n", VAR_8);
  VAR_7->codecs[VAR_8].pending = 0;
 }

 if (VAR_7->unsolq_rp != VAR_7->unsolq_wp)
  FUNC_7(VAR_6, &VAR_7->unsolq_task);
 return (VAR_7->codecs[VAR_8].response);
}
