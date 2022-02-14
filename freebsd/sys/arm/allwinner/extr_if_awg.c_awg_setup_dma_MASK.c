
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ desc_ring_paddr; int desc_map; int desc_tag; TYPE_4__* buf_map; int buf_tag; TYPE_5__* desc_ring; int buf_spare_map; } ;
struct TYPE_7__ {scalar_t__ desc_ring_paddr; TYPE_1__* buf_map; int buf_tag; scalar_t__ queued; TYPE_5__* desc_ring; int desc_map; int desc_tag; } ;
struct awg_softc {TYPE_3__ rx; TYPE_2__ tx; } ;
typedef int device_t ;
struct TYPE_10__ {void* next; } ;
struct TYPE_9__ {int * mbuf; int map; } ;
struct TYPE_6__ {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct awg_softc*,int ,scalar_t__) ;
 int VAR_15 ;
 int FUNC_4 (struct awg_softc*,int) ;
 int FUNC_5 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,TYPE_5__*,int ,int ,scalar_t__*,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,void**,int,int *) ;
 int FUNC_10 (int ) ;
 struct awg_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 void* FUNC_13 (scalar_t__) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_16)
{
 struct awg_softc *VAR_17;
 int VAR_18, VAR_19;

 VAR_17 = FUNC_11(VAR_16);


 VAR_18 = FUNC_5(
     FUNC_10(VAR_16),
     VAR_6, 0,
     VAR_5,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_13, 1,
     VAR_13,
     0,
     ((void*)0), ((void*)0),
     &VAR_17->tx.desc_tag);
 if (VAR_18 != 0) {
  FUNC_12(VAR_16, "cannot create TX descriptor ring tag\n");
  return (VAR_18);
 }

 VAR_18 = FUNC_9(VAR_17->tx.desc_tag, (void **)&VAR_17->tx.desc_ring,
     VAR_1 | VAR_2 | VAR_3, &VAR_17->tx.desc_map);
 if (VAR_18 != 0) {
  FUNC_12(VAR_16, "cannot allocate TX descriptor ring\n");
  return (VAR_18);
 }

 VAR_18 = FUNC_7(VAR_17->tx.desc_tag, VAR_17->tx.desc_map,
     VAR_17->tx.desc_ring, VAR_13, VAR_15,
     &VAR_17->tx.desc_ring_paddr, 0);
 if (VAR_18 != 0) {
  FUNC_12(VAR_16, "cannot load TX descriptor ring\n");
  return (VAR_18);
 }

 for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++)
  VAR_17->tx.desc_ring[VAR_19].next =
      FUNC_13(VAR_17->tx.desc_ring_paddr + FUNC_0(FUNC_2(VAR_19)));

 VAR_18 = FUNC_5(
     FUNC_10(VAR_16),
     1, 0,
     VAR_5,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_9, VAR_14,
     VAR_9,
     0,
     ((void*)0), ((void*)0),
     &VAR_17->tx.buf_tag);
 if (VAR_18 != 0) {
  FUNC_12(VAR_16, "cannot create TX buffer tag\n");
  return (VAR_18);
 }

 VAR_17->tx.queued = 0;
 for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++) {
  VAR_18 = FUNC_6(VAR_17->tx.buf_tag, 0,
      &VAR_17->tx.buf_map[VAR_19].map);
  if (VAR_18 != 0) {
   FUNC_12(VAR_16, "cannot create TX buffer map\n");
   return (VAR_18);
  }
 }


 VAR_18 = FUNC_5(
     FUNC_10(VAR_16),
     VAR_6, 0,
     VAR_5,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_11, 1,
     VAR_11,
     0,
     ((void*)0), ((void*)0),
     &VAR_17->rx.desc_tag);
 if (VAR_18 != 0) {
  FUNC_12(VAR_16, "cannot create RX descriptor ring tag\n");
  return (VAR_18);
 }

 VAR_18 = FUNC_9(VAR_17->rx.desc_tag, (void **)&VAR_17->rx.desc_ring,
     VAR_1 | VAR_2 | VAR_3, &VAR_17->rx.desc_map);
 if (VAR_18 != 0) {
  FUNC_12(VAR_16, "cannot allocate RX descriptor ring\n");
  return (VAR_18);
 }

 VAR_18 = FUNC_7(VAR_17->rx.desc_tag, VAR_17->rx.desc_map,
     VAR_17->rx.desc_ring, VAR_11, VAR_15,
     &VAR_17->rx.desc_ring_paddr, 0);
 if (VAR_18 != 0) {
  FUNC_12(VAR_16, "cannot load RX descriptor ring\n");
  return (VAR_18);
 }

 VAR_18 = FUNC_5(
     FUNC_10(VAR_16),
     1, 0,
     VAR_5,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_9, 1,
     VAR_9,
     0,
     ((void*)0), ((void*)0),
     &VAR_17->rx.buf_tag);
 if (VAR_18 != 0) {
  FUNC_12(VAR_16, "cannot create RX buffer tag\n");
  return (VAR_18);
 }

 VAR_18 = FUNC_6(VAR_17->rx.buf_tag, 0, &VAR_17->rx.buf_spare_map);
 if (VAR_18 != 0) {
  FUNC_12(VAR_16,
      "cannot create RX buffer spare map\n");
  return (VAR_18);
 }

 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
  VAR_17->rx.desc_ring[VAR_19].next =
      FUNC_13(VAR_17->rx.desc_ring_paddr + FUNC_0(FUNC_1(VAR_19)));

  VAR_18 = FUNC_6(VAR_17->rx.buf_tag, 0,
      &VAR_17->rx.buf_map[VAR_19].map);
  if (VAR_18 != 0) {
   FUNC_12(VAR_16, "cannot create RX buffer map\n");
   return (VAR_18);
  }
  VAR_17->rx.buf_map[VAR_19].mbuf = ((void*)0);
  VAR_18 = FUNC_4(VAR_17, VAR_19);
  if (VAR_18 != 0) {
   FUNC_12(VAR_16, "cannot create RX buffer\n");
   return (VAR_18);
  }
 }
 FUNC_8(VAR_17->rx.desc_tag, VAR_17->rx.desc_map,
     VAR_0);


 FUNC_3(VAR_17, VAR_8, VAR_17->tx.desc_ring_paddr);
 FUNC_3(VAR_17, VAR_7, VAR_17->rx.desc_ring_paddr);

 return (0);
}
