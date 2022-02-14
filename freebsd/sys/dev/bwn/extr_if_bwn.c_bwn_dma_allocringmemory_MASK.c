
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwn_softc {int sc_dev; } ;
struct bwn_dma {int parent_dtag; } ;
struct TYPE_2__ {struct bwn_dma dma; } ;
struct bwn_mac {struct bwn_softc* mac_sc; TYPE_1__ mac_method; } ;
struct bwn_dma_ring {int dr_ring_dmabase; int dr_ring_descbase; int dr_ring_dmap; int dr_ring_dtag; struct bwn_mac* dr_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_2 (int ,int *,int,int *) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct bwn_dma_ring *VAR_8)
{
 struct bwn_mac *VAR_9 = VAR_8->dr_mac;
 struct bwn_dma *VAR_10 = &VAR_9->mac_method.dma;
 struct bwn_softc *VAR_11 = VAR_9->mac_sc;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_10->parent_dtag,
       VAR_5, 0,
       VAR_3,
       VAR_3,
       ((void*)0), ((void*)0),
       VAR_6,
       1,
       VAR_4,
       0,
       ((void*)0), ((void*)0),
       &VAR_8->dr_ring_dtag);
 if (VAR_12) {
  FUNC_3(VAR_11->sc_dev,
      "can't create TX ring DMA tag: TODO frees\n");
  return (-1);
 }

 VAR_12 = FUNC_2(VAR_8->dr_ring_dtag,
     &VAR_8->dr_ring_descbase, VAR_1 | VAR_2,
     &VAR_8->dr_ring_dmap);
 if (VAR_12) {
  FUNC_3(VAR_11->sc_dev,
      "can't allocate DMA mem: TODO frees\n");
  return (-1);
 }
 VAR_12 = FUNC_1(VAR_8->dr_ring_dtag, VAR_8->dr_ring_dmap,
     VAR_8->dr_ring_descbase, VAR_6,
     VAR_7, &VAR_8->dr_ring_dmabase, VAR_0);
 if (VAR_12) {
  FUNC_3(VAR_11->sc_dev,
      "can't load DMA mem: TODO free\n");
  return (-1);
 }

 return (0);
}
