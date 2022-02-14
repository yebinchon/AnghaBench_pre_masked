
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uintmax_t ;
typedef int uint64_t ;
struct ntb_transport_mw {scalar_t__ phys_size; scalar_t__ tx_size; scalar_t__ buff_size; scalar_t__ dma_addr; int * virt_addr; scalar_t__ rx_size; int addr_limit; int xlat_align_size; int xlat_align; int vbase; int phys_addr; } ;
struct ntb_transport_ctx {int mw_count; int compact; int qp_count; int link_is_up; struct ntb_transport_mw* mw_vec; struct ntb_transport_mw* qp_vec; int link_watchdog; int dev; int link_cleanup; int link_work; struct ntb_transport_child* child; } ;
struct ntb_transport_child {int consumer; int qpoff; int qpcnt; struct ntb_transport_child* next; int * dev; } ;
typedef int device_t ;
typedef int cfg ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ,struct ntb_transport_ctx*) ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int ,struct ntb_transport_ctx*) ;
 int * FUNC_7 (int ,char*,int) ;
 char* FUNC_8 (int ) ;
 struct ntb_transport_ctx* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int *,struct ntb_transport_child*) ;
 scalar_t__ VAR_10 ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct ntb_transport_mw*,int ) ;
 int FUNC_15 (int,int) ;
 void* FUNC_16 (int,int ,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int,int *,int *,scalar_t__*,int *,int *,int *) ;
 int FUNC_21 (int ,int,scalar_t__,scalar_t__) ;
 int FUNC_22 (int ,int,int ) ;
 int FUNC_23 (int ,char*,int,...) ;
 int FUNC_24 (int ,struct ntb_transport_ctx*,int *) ;
 int FUNC_25 (struct ntb_transport_ctx*,int,scalar_t__) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct ntb_transport_ctx*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_28 (char*,...) ;
 int FUNC_29 (char*,int,char*,char*,int) ;
 char* FUNC_30 (char**,char*) ;
 int FUNC_31 (char*,int *,int) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_32(device_t VAR_15)
{
 struct ntb_transport_ctx *VAR_16 = FUNC_9(VAR_15);
 struct ntb_transport_child **VAR_17 = &VAR_16->child;
 struct ntb_transport_child *VAR_18;
 struct ntb_transport_mw *VAR_19;
 uint64_t VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 char VAR_29[128] = "";
 char VAR_30[32];
 char *VAR_31, *VAR_32, *VAR_33, *VAR_34;

 VAR_16->dev = VAR_15;
 VAR_16->mw_count = FUNC_19(VAR_15);
 VAR_24 = FUNC_26(VAR_15);
 VAR_20 = FUNC_17(VAR_15);
 VAR_23 = FUNC_13(VAR_20);
 FUNC_0(VAR_20 == (1 << VAR_23) - 1,
     ("Doorbells are not sequential (%jx).\n", VAR_20));

 if (VAR_16->mw_count == 0) {
  FUNC_11(VAR_15, "At least 1 memory window required.\n");
  return (VAR_0);
 }
 VAR_16->compact = (VAR_24 < 4 + 2 * VAR_16->mw_count);
 FUNC_29(VAR_30, sizeof(VAR_30), "hint.%s.%d.compact", FUNC_8(VAR_15),
     FUNC_10(VAR_15));
 FUNC_2(VAR_30, &VAR_16->compact);
 if (VAR_16->compact) {
  if (VAR_24 < 3) {
   FUNC_11(VAR_15, "At least 3 scratchpads required.\n");
   return (VAR_0);
  }
  if (VAR_24 < 2 + VAR_16->mw_count) {
   VAR_16->mw_count = VAR_24 - 2;
   FUNC_11(VAR_15, "Scratchpads enough only for %d "
       "memory windows.\n", VAR_16->mw_count);
  }
 } else {
  if (VAR_24 < 6) {
   FUNC_11(VAR_15, "At least 6 scratchpads required.\n");
   return (VAR_0);
  }
  if (VAR_24 < 4 + 2 * VAR_16->mw_count) {
   VAR_16->mw_count = (VAR_24 - 4) / 2;
   FUNC_11(VAR_15, "Scratchpads enough only for %d "
       "memory windows.\n", VAR_16->mw_count);
  }
 }
 if (VAR_20 == 0) {
  FUNC_11(VAR_15, "At least one doorbell required.\n");
  return (VAR_0);
 }

 VAR_16->mw_vec = FUNC_16(VAR_16->mw_count * sizeof(*VAR_16->mw_vec), VAR_2,
     VAR_3 | VAR_4);
 for (VAR_22 = 0; VAR_22 < VAR_16->mw_count; VAR_22++) {
  VAR_19 = &VAR_16->mw_vec[VAR_22];

  VAR_21 = FUNC_20(VAR_15, VAR_22, &VAR_19->phys_addr, &VAR_19->vbase,
      &VAR_19->phys_size, &VAR_19->xlat_align, &VAR_19->xlat_align_size,
      &VAR_19->addr_limit);
  if (VAR_21 != 0)
   goto err;

  VAR_19->tx_size = VAR_19->phys_size;
  if (VAR_11 != 0 && VAR_19->tx_size > VAR_11) {
   FUNC_11(VAR_15, "Memory window %d limited from "
       "%ju to %ju\n", VAR_22, (uintmax_t)VAR_19->tx_size,
       VAR_11);
   VAR_19->tx_size = VAR_11;
  }
  if (VAR_16->compact && VAR_19->tx_size > VAR_7) {
   FUNC_11(VAR_15, "Memory window %d is too big "
       "(%ju)\n", VAR_22, (uintmax_t)VAR_19->tx_size);
   VAR_21 = VAR_0;
   goto err;
  }

  VAR_19->rx_size = 0;
  VAR_19->buff_size = 0;
  VAR_19->virt_addr = ((void*)0);
  VAR_19->dma_addr = 0;

  VAR_21 = FUNC_22(VAR_15, VAR_22, VAR_8);
  if (VAR_21)
   FUNC_23(0, "Unable to set mw%d caching\n", VAR_22);







  FUNC_25(VAR_16, VAR_22, VAR_19->tx_size);
 }

 VAR_26 = 0;
 VAR_27 = FUNC_15(VAR_23, VAR_16->mw_count);
 VAR_28 = VAR_23;

 FUNC_29(VAR_30, sizeof(VAR_30), "hint.%s.%d.config", FUNC_8(VAR_15),
     FUNC_10(VAR_15));
 FUNC_3(VAR_30, VAR_29, sizeof(VAR_29));
 VAR_31 = VAR_29;
 VAR_22 = 0;
 while ((VAR_33 = FUNC_30(&VAR_31, ",")) != ((void*)0)) {
  VAR_32 = VAR_33;
  VAR_34 = FUNC_30(&VAR_32, ":");
  if (VAR_34 != ((void*)0) && VAR_34[0] == 0)
   VAR_34 = ((void*)0);
  VAR_25 = (VAR_32 && VAR_32[0] != 0) ? FUNC_31(VAR_32, ((void*)0), 10) : VAR_27 - VAR_26;
  if (VAR_25 <= 0)
   VAR_25 = 1;

  if (VAR_25 > VAR_28 - VAR_26) {
   FUNC_11(VAR_15, "Not enough resources for config\n");
   break;
  }

  VAR_18 = FUNC_16(sizeof(*VAR_18), VAR_1, VAR_3 | VAR_4);
  VAR_18->consumer = VAR_22;
  VAR_18->qpoff = VAR_26;
  VAR_18->qpcnt = VAR_25;
  VAR_18->dev = FUNC_7(VAR_15, VAR_34, -1);
  if (VAR_18->dev == ((void*)0)) {
   FUNC_11(VAR_15, "Can not add child.\n");
   break;
  }
  FUNC_12(VAR_18->dev, VAR_18);
  *VAR_17 = VAR_18;
  VAR_17 = &VAR_18->next;

  if (VAR_9) {
   FUNC_11(VAR_15, "%d \"%s\": queues %d",
       VAR_22, VAR_34, VAR_26);
   if (VAR_25 > 1)
    FUNC_28("-%d", VAR_26 + VAR_25 - 1);
   FUNC_28("\n");
  }

  VAR_26 += VAR_25;
  VAR_22++;
 }
 VAR_16->qp_count = VAR_26;

 VAR_16->qp_vec = FUNC_16(VAR_16->qp_count * sizeof(*VAR_16->qp_vec), VAR_2,
     VAR_3 | VAR_4);

 for (VAR_22 = 0; VAR_22 < VAR_16->qp_count; VAR_22++)
  FUNC_27(VAR_16, VAR_22);

 FUNC_5(&VAR_16->link_work, 0);
 FUNC_5(&VAR_16->link_watchdog, 0);
 FUNC_1(&VAR_16->link_cleanup, 0, VAR_12, VAR_16);
 VAR_16->link_is_up = 0;

 VAR_21 = FUNC_24(VAR_15, VAR_16, &VAR_13);
 if (VAR_21 != 0)
  goto err;

 FUNC_18(VAR_15, VAR_5, VAR_6);

 for (VAR_22 = 0; VAR_22 < VAR_16->mw_count; VAR_22++) {
  VAR_19 = &VAR_16->mw_vec[VAR_22];
  VAR_21 = FUNC_21(VAR_16->dev, VAR_22, VAR_19->dma_addr, VAR_19->buff_size);
  if (VAR_21 != 0)
   FUNC_23(0, "load time mw%d xlat fails, rc %d\n", VAR_22, VAR_21);
 }

 if (VAR_10 != 0)
  FUNC_6(&VAR_16->link_watchdog, 0, VAR_14, VAR_16);

 FUNC_4(VAR_15);
 return (0);

err:
 FUNC_14(VAR_16->qp_vec, VAR_2);
 FUNC_14(VAR_16->mw_vec, VAR_2);
 return (VAR_21);
}
