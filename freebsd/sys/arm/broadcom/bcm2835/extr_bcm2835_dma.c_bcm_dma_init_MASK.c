
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int uint32_t ;
struct bcm_dma_softc {int sc_mem; int sc_dma_tag; struct bcm_dma_ch* sc_dma_ch; } ;
struct bcm_dma_ch {int ch; TYPE_1__* cb; int flags; int vc_cb; int dma_map; } ;
struct bcm_dma_cb {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,void*,int,int ,int *,int) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct bcm_dma_ch*,int) ;
 struct bcm_dma_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_15)
{
 struct bcm_dma_softc *VAR_16 = FUNC_8(VAR_15);
 uint32_t VAR_17;
 struct bcm_dma_ch *VAR_18;
 void *VAR_19;
 vm_paddr_t VAR_20;
 int VAR_21;
 int VAR_22;
 VAR_17 = FUNC_5(VAR_16->sc_mem, VAR_3);
 if ((VAR_17 & VAR_13) != VAR_13)
  FUNC_9(VAR_15, "channels are not enabled\n");
 VAR_17 = FUNC_5(VAR_16->sc_mem, VAR_4);
 if ((VAR_17 & VAR_13) != 0)
  FUNC_9(VAR_15, "statuses are not cleared\n");



 VAR_21 = FUNC_1(FUNC_4(VAR_15),
     1, 0, VAR_10,
     VAR_9, ((void*)0), ((void*)0),
     sizeof(struct bcm_dma_cb), 1,
     sizeof(struct bcm_dma_cb),
     VAR_5, ((void*)0), ((void*)0),
     &VAR_16->sc_dma_tag);

 if (VAR_21) {
  FUNC_9(VAR_15, "failed allocate DMA tag\n");
  return (VAR_21);
 }


 for (VAR_22 = 0; VAR_22 < VAR_1; VAR_22++) {
  VAR_18 = &VAR_16->sc_dma_ch[VAR_22];

  FUNC_7(VAR_18, sizeof(struct bcm_dma_ch));
  VAR_18->ch = VAR_22;
  VAR_18->flags = VAR_2;

  if ((VAR_13 & (1 << VAR_22)) == 0)
   continue;

  VAR_21 = FUNC_3(VAR_16->sc_dma_tag, &VAR_19,
      VAR_7 | VAR_6 | VAR_8,
      &VAR_18->dma_map);
  if (VAR_21) {
   FUNC_9(VAR_15, "cannot allocate DMA memory\n");
   break;
  }






  if ((uintptr_t)VAR_19 & 0x1f) {
   FUNC_9(VAR_15,
       "DMA address is not 32-bytes aligned: %p\n",
       (void*)VAR_19);
   break;
  }

  VAR_21 = FUNC_2(VAR_16->sc_dma_tag, VAR_18->dma_map, VAR_19,
      sizeof(struct bcm_dma_cb), VAR_14, &VAR_20,
      VAR_7);
  if (VAR_21) {
   FUNC_9(VAR_15, "cannot load DMA memory\n");
   break;
  }

  VAR_18->cb = VAR_19;
  VAR_18->vc_cb = VAR_20;
  VAR_18->flags = VAR_0;
  VAR_18->cb->info = VAR_12;


  FUNC_6(VAR_16->sc_mem, FUNC_0(VAR_22), VAR_11);
 }

 return (0);
}
