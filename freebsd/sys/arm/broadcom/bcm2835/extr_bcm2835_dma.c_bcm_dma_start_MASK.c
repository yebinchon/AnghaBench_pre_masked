
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
struct bcm_dma_softc {TYPE_1__* sc_dma_ch; int sc_mem; int sc_dma_tag; } ;
struct bcm_dma_cb {int len; void* dst; void* src; } ;
struct TYPE_2__ {int flags; struct bcm_dma_cb* cb; int vc_cb; int dma_map; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct bcm_dma_cb*) ;
 int FUNC_6 (int) ;
 struct bcm_dma_softc* VAR_4 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;

int
FUNC_9(int VAR_5, vm_paddr_t VAR_6, vm_paddr_t VAR_7, int VAR_8)
{
 struct bcm_dma_softc *VAR_9 = VAR_4;
 struct bcm_dma_cb *VAR_10;

 if (VAR_5 < 0 || VAR_5 >= VAR_0)
  return (-1);

 if (!(VAR_9->sc_dma_ch[VAR_5].flags & VAR_1))
  return (-1);

 VAR_10 = VAR_9->sc_dma_ch[VAR_5].cb;
 if (FUNC_0(VAR_6))
  VAR_10->src = FUNC_3(VAR_6);
 else
  VAR_10->src = FUNC_4(VAR_6);
 if (FUNC_0(VAR_7))
  VAR_10->dst = FUNC_3(VAR_7);
 else
  VAR_10->dst = FUNC_4(VAR_7);
 VAR_10->len = VAR_8;

 FUNC_7(VAR_9->sc_dma_tag,
     VAR_9->sc_dma_ch[VAR_5].dma_map, VAR_2);

 FUNC_8(VAR_9->sc_mem, FUNC_1(VAR_5),
     VAR_9->sc_dma_ch[VAR_5].vc_cb);
 FUNC_8(VAR_9->sc_mem, FUNC_2(VAR_5), VAR_3);






 return (0);
}
