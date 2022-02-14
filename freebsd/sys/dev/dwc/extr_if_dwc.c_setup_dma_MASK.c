
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct dwc_softc {int dev; TYPE_2__* rxbuf_map; int rxbuf_tag; scalar_t__ rxdesc_ring_paddr; TYPE_3__* rxdesc_ring; int rxdesc_map; int rxdesc_tag; TYPE_1__* txbuf_map; int txbuf_tag; scalar_t__ txdesc_ring_paddr; TYPE_3__* txdesc_ring; int txdesc_map; int txdesc_tag; } ;
struct dwc_hwdesc {int dummy; } ;
struct TYPE_6__ {scalar_t__ addr_next; } ;
struct TYPE_5__ {int map; } ;
struct TYPE_4__ {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int ,TYPE_3__*,int ,int ,scalar_t__*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 struct mbuf* FUNC_6 (struct dwc_softc*) ;
 int VAR_13 ;
 int FUNC_7 (struct dwc_softc*,int,struct mbuf*) ;
 int FUNC_8 (struct dwc_softc*,int,int ,int ) ;
 int FUNC_9 (struct dwc_softc*,int) ;

__attribute__((used)) static int
FUNC_10(struct dwc_softc *VAR_14)
{
 struct mbuf *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;




 VAR_16 = FUNC_0(
     FUNC_4(VAR_14->dev),
     VAR_5, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_12, 1,
     VAR_12,
     0,
     ((void*)0), ((void*)0),
     &VAR_14->txdesc_tag);
 if (VAR_16 != 0) {
  FUNC_5(VAR_14->dev,
      "could not create TX ring DMA tag.\n");
  goto out;
 }

 VAR_16 = FUNC_3(VAR_14->txdesc_tag, (void**)&VAR_14->txdesc_ring,
     VAR_0 | VAR_1 | VAR_2,
     &VAR_14->txdesc_map);
 if (VAR_16 != 0) {
  FUNC_5(VAR_14->dev,
      "could not allocate TX descriptor ring.\n");
  goto out;
 }

 VAR_16 = FUNC_2(VAR_14->txdesc_tag, VAR_14->txdesc_map,
     VAR_14->txdesc_ring, VAR_12, VAR_13,
     &VAR_14->txdesc_ring_paddr, 0);
 if (VAR_16 != 0) {
  FUNC_5(VAR_14->dev,
      "could not load TX descriptor ring map.\n");
  goto out;
 }

 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
  VAR_17 = FUNC_9(VAR_14, VAR_18);
  VAR_14->txdesc_ring[VAR_18].addr_next = VAR_14->txdesc_ring_paddr +
      (VAR_17 * sizeof(struct dwc_hwdesc));
 }

 VAR_16 = FUNC_0(
     FUNC_4(VAR_14->dev),
     1, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_8, 1,
     VAR_8,
     0,
     ((void*)0), ((void*)0),
     &VAR_14->txbuf_tag);
 if (VAR_16 != 0) {
  FUNC_5(VAR_14->dev,
      "could not create TX ring DMA tag.\n");
  goto out;
 }

 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
  VAR_16 = FUNC_1(VAR_14->txbuf_tag, VAR_0,
      &VAR_14->txbuf_map[VAR_18].map);
  if (VAR_16 != 0) {
   FUNC_5(VAR_14->dev,
       "could not create TX buffer DMA map.\n");
   goto out;
  }
  FUNC_8(VAR_14, VAR_18, 0, 0);
 }




 VAR_16 = FUNC_0(
     FUNC_4(VAR_14->dev),
     VAR_5, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_10, 1,
     VAR_10,
     0,
     ((void*)0), ((void*)0),
     &VAR_14->rxdesc_tag);
 if (VAR_16 != 0) {
  FUNC_5(VAR_14->dev,
      "could not create RX ring DMA tag.\n");
  goto out;
 }

 VAR_16 = FUNC_3(VAR_14->rxdesc_tag, (void **)&VAR_14->rxdesc_ring,
     VAR_0 | VAR_1 | VAR_2,
     &VAR_14->rxdesc_map);
 if (VAR_16 != 0) {
  FUNC_5(VAR_14->dev,
      "could not allocate RX descriptor ring.\n");
  goto out;
 }

 VAR_16 = FUNC_2(VAR_14->rxdesc_tag, VAR_14->rxdesc_map,
     VAR_14->rxdesc_ring, VAR_10, VAR_13,
     &VAR_14->rxdesc_ring_paddr, 0);
 if (VAR_16 != 0) {
  FUNC_5(VAR_14->dev,
      "could not load RX descriptor ring map.\n");
  goto out;
 }

 VAR_16 = FUNC_0(
     FUNC_4(VAR_14->dev),
     1, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_8, 1,
     VAR_8,
     0,
     ((void*)0), ((void*)0),
     &VAR_14->rxbuf_tag);
 if (VAR_16 != 0) {
  FUNC_5(VAR_14->dev,
      "could not create RX buf DMA tag.\n");
  goto out;
 }

 for (VAR_18 = 0; VAR_18 < VAR_9; VAR_18++) {
  VAR_16 = FUNC_1(VAR_14->rxbuf_tag, VAR_0,
      &VAR_14->rxbuf_map[VAR_18].map);
  if (VAR_16 != 0) {
   FUNC_5(VAR_14->dev,
       "could not create RX buffer DMA map.\n");
   goto out;
  }
  if ((VAR_15 = FUNC_6(VAR_14)) == ((void*)0)) {
   FUNC_5(VAR_14->dev, "Could not alloc mbuf\n");
   VAR_16 = VAR_6;
   goto out;
  }
  if ((VAR_16 = FUNC_7(VAR_14, VAR_18, VAR_15)) != 0) {
   FUNC_5(VAR_14->dev,
       "could not create new RX buffer.\n");
   goto out;
  }
 }

out:
 if (VAR_16 != 0)
  return (VAR_7);

 return (0);
}
