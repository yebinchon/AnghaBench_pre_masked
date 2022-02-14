
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int dma_map; int dma_tag; scalar_t__ dma_vaddr; } ;
struct hdac_softc {size_t rirb_rp; size_t rirb_size; int* unsolq; TYPE_2__ rirb_dma; TYPE_1__* codecs; int dev; int unsolq_wp; int mem; } ;
struct hdac_rirb {int response_ex; int response; } ;
typedef size_t nid_t ;
struct TYPE_3__ {scalar_t__ pending; int response; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,int ) ;
 int VAR_2 ;
 size_t FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,size_t,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct hdac_softc *VAR_5)
{
 struct hdac_rirb *VAR_6, *VAR_7;
 nid_t VAR_8;
 uint32_t VAR_9, VAR_10;
 uint8_t VAR_11;
 int VAR_12;

 VAR_6 = (struct hdac_rirb *)VAR_5->rirb_dma.dma_vaddr;
 VAR_11 = FUNC_0(&VAR_5->mem, VAR_2);
 FUNC_2(VAR_5->rirb_dma.dma_tag, VAR_5->rirb_dma.dma_map,
     VAR_0);

 VAR_12 = 0;
 while (VAR_5->rirb_rp != VAR_11) {
  VAR_5->rirb_rp++;
  VAR_5->rirb_rp %= VAR_5->rirb_size;
  VAR_7 = &VAR_6[VAR_5->rirb_rp];
  VAR_9 = FUNC_4(VAR_7->response);
  VAR_10 = FUNC_4(VAR_7->response_ex);
  VAR_8 = FUNC_1(VAR_10);
  if (VAR_10 & VAR_3) {
   VAR_5->unsolq[VAR_5->unsolq_wp++] = VAR_9;
   VAR_5->unsolq_wp %= VAR_4;
   VAR_5->unsolq[VAR_5->unsolq_wp++] = VAR_8;
   VAR_5->unsolq_wp %= VAR_4;
  } else if (VAR_5->codecs[VAR_8].pending <= 0) {
   FUNC_3(VAR_5->dev, "Unexpected unsolicited "
       "response from address %d: %08x\n", VAR_8, VAR_9);
  } else {
   VAR_5->codecs[VAR_8].response = VAR_9;
   VAR_5->codecs[VAR_8].pending--;
  }
  VAR_12++;
 }

 FUNC_2(VAR_5->rirb_dma.dma_tag, VAR_5->rirb_dma.dma_map,
     VAR_1);
 return (VAR_12);
}
