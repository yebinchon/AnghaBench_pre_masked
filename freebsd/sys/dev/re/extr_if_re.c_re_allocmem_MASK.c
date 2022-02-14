
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct rl_stats {int dummy; } ;
struct TYPE_8__ {int rl_rx_desc_cnt; int rl_tx_desc_cnt; scalar_t__ rl_tx_list_addr; scalar_t__ rl_rx_list_addr; scalar_t__ rl_stats_addr; int rl_stats; int rl_smap; int rl_stag; TYPE_3__* rl_rx_desc; int rl_rx_mtag; int rl_rx_sparemap; TYPE_2__* rl_jrx_desc; int rl_jrx_mtag; int rl_jrx_sparemap; int rl_rx_list; int rl_rx_list_map; int rl_rx_list_tag; TYPE_1__* rl_tx_desc; int rl_tx_mtag; int rl_tx_list; int rl_tx_list_map; int rl_tx_list_tag; } ;
struct rl_softc {int rl_flags; TYPE_4__ rl_ldata; int rl_parent_tag; } ;
struct rl_desc {int dummy; } ;
typedef int device_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;
struct TYPE_7__ {int rx_dmamap; } ;
struct TYPE_6__ {int rx_dmamap; } ;
struct TYPE_5__ {int tx_dmamap; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int,int ,scalar_t__*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_16, struct rl_softc *VAR_17)
{
 bus_addr_t VAR_18;
 bus_size_t VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;

 VAR_19 = VAR_17->rl_ldata.rl_rx_desc_cnt * sizeof(struct rl_desc);
 VAR_20 = VAR_17->rl_ldata.rl_tx_desc_cnt * sizeof(struct rl_desc);
 VAR_18 = VAR_4;
 if ((VAR_17->rl_flags & VAR_12) == 0)
  VAR_18 = VAR_5;
 VAR_21 = FUNC_0(FUNC_4(VAR_16), 1, 0,
     VAR_18, VAR_4, ((void*)0), ((void*)0),
     VAR_6, 0, VAR_6, 0,
     ((void*)0), ((void*)0), &VAR_17->rl_parent_tag);
 if (VAR_21) {
  FUNC_5(VAR_16, "could not allocate parent DMA tag\n");
  return (VAR_21);
 }




 VAR_21 = FUNC_0(VAR_17->rl_parent_tag, 1, 0,
     VAR_4, VAR_4, ((void*)0),
     ((void*)0), VAR_8 * VAR_13, VAR_13, 4096, 0,
     ((void*)0), ((void*)0), &VAR_17->rl_ldata.rl_tx_mtag);
 if (VAR_21) {
  FUNC_5(VAR_16, "could not allocate TX DMA tag\n");
  return (VAR_21);
 }





 if ((VAR_17->rl_flags & VAR_11) != 0) {
  VAR_21 = FUNC_0(VAR_17->rl_parent_tag, sizeof(uint64_t),
      0, VAR_4, VAR_4, ((void*)0), ((void*)0),
      VAR_9, 1, VAR_9, 0, ((void*)0), ((void*)0),
      &VAR_17->rl_ldata.rl_jrx_mtag);
  if (VAR_21) {
   FUNC_5(VAR_16,
       "could not allocate jumbo RX DMA tag\n");
   return (VAR_21);
  }
 }
 VAR_21 = FUNC_0(VAR_17->rl_parent_tag, sizeof(uint64_t), 0,
     VAR_4, VAR_4, ((void*)0), ((void*)0),
     VAR_8, 1, VAR_8, 0, ((void*)0), ((void*)0), &VAR_17->rl_ldata.rl_rx_mtag);
 if (VAR_21) {
  FUNC_5(VAR_16, "could not allocate RX DMA tag\n");
  return (VAR_21);
 }




 VAR_21 = FUNC_0(VAR_17->rl_parent_tag, VAR_14,
     0, VAR_5, VAR_4, ((void*)0),
     ((void*)0), VAR_20, 1, VAR_20, 0,
     ((void*)0), ((void*)0), &VAR_17->rl_ldata.rl_tx_list_tag);
 if (VAR_21) {
  FUNC_5(VAR_16, "could not allocate TX DMA ring tag\n");
  return (VAR_21);
 }



 VAR_21 = FUNC_3(VAR_17->rl_ldata.rl_tx_list_tag,
     (void **)&VAR_17->rl_ldata.rl_tx_list,
     VAR_2 | VAR_0 | VAR_3,
     &VAR_17->rl_ldata.rl_tx_list_map);
 if (VAR_21) {
  FUNC_5(VAR_16, "could not allocate TX DMA ring\n");
  return (VAR_21);
 }



 VAR_17->rl_ldata.rl_tx_list_addr = 0;
 VAR_21 = FUNC_2(VAR_17->rl_ldata.rl_tx_list_tag,
      VAR_17->rl_ldata.rl_tx_list_map, VAR_17->rl_ldata.rl_tx_list,
      VAR_20, VAR_15,
      &VAR_17->rl_ldata.rl_tx_list_addr, VAR_1);
 if (VAR_21 != 0 || VAR_17->rl_ldata.rl_tx_list_addr == 0) {
  FUNC_5(VAR_16, "could not load TX DMA ring\n");
  return (VAR_7);
 }



 for (VAR_22 = 0; VAR_22 < VAR_17->rl_ldata.rl_tx_desc_cnt; VAR_22++) {
  VAR_21 = FUNC_1(VAR_17->rl_ldata.rl_tx_mtag, 0,
      &VAR_17->rl_ldata.rl_tx_desc[VAR_22].tx_dmamap);
  if (VAR_21) {
   FUNC_5(VAR_16, "could not create DMA map for TX\n");
   return (VAR_21);
  }
 }




 VAR_21 = FUNC_0(VAR_17->rl_parent_tag, VAR_14,
     0, VAR_5, VAR_4, ((void*)0),
     ((void*)0), VAR_19, 1, VAR_19, 0,
     ((void*)0), ((void*)0), &VAR_17->rl_ldata.rl_rx_list_tag);
 if (VAR_21) {
  FUNC_5(VAR_16, "could not create RX DMA ring tag\n");
  return (VAR_21);
 }



 VAR_21 = FUNC_3(VAR_17->rl_ldata.rl_rx_list_tag,
     (void **)&VAR_17->rl_ldata.rl_rx_list,
     VAR_2 | VAR_0 | VAR_3,
     &VAR_17->rl_ldata.rl_rx_list_map);
 if (VAR_21) {
  FUNC_5(VAR_16, "could not allocate RX DMA ring\n");
  return (VAR_21);
 }



 VAR_17->rl_ldata.rl_rx_list_addr = 0;
 VAR_21 = FUNC_2(VAR_17->rl_ldata.rl_rx_list_tag,
      VAR_17->rl_ldata.rl_rx_list_map, VAR_17->rl_ldata.rl_rx_list,
      VAR_19, VAR_15,
      &VAR_17->rl_ldata.rl_rx_list_addr, VAR_1);
 if (VAR_21 != 0 || VAR_17->rl_ldata.rl_rx_list_addr == 0) {
  FUNC_5(VAR_16, "could not load RX DMA ring\n");
  return (VAR_7);
 }



 if ((VAR_17->rl_flags & VAR_11) != 0) {
  VAR_21 = FUNC_1(VAR_17->rl_ldata.rl_jrx_mtag, 0,
      &VAR_17->rl_ldata.rl_jrx_sparemap);
  if (VAR_21) {
   FUNC_5(VAR_16,
       "could not create spare DMA map for jumbo RX\n");
   return (VAR_21);
  }
  for (VAR_22 = 0; VAR_22 < VAR_17->rl_ldata.rl_rx_desc_cnt; VAR_22++) {
   VAR_21 = FUNC_1(VAR_17->rl_ldata.rl_jrx_mtag, 0,
       &VAR_17->rl_ldata.rl_jrx_desc[VAR_22].rx_dmamap);
   if (VAR_21) {
    FUNC_5(VAR_16,
        "could not create DMA map for jumbo RX\n");
    return (VAR_21);
   }
  }
 }
 VAR_21 = FUNC_1(VAR_17->rl_ldata.rl_rx_mtag, 0,
     &VAR_17->rl_ldata.rl_rx_sparemap);
 if (VAR_21) {
  FUNC_5(VAR_16, "could not create spare DMA map for RX\n");
  return (VAR_21);
 }
 for (VAR_22 = 0; VAR_22 < VAR_17->rl_ldata.rl_rx_desc_cnt; VAR_22++) {
  VAR_21 = FUNC_1(VAR_17->rl_ldata.rl_rx_mtag, 0,
      &VAR_17->rl_ldata.rl_rx_desc[VAR_22].rx_dmamap);
  if (VAR_21) {
   FUNC_5(VAR_16, "could not create DMA map for RX\n");
   return (VAR_21);
  }
 }


 VAR_21 = FUNC_0(VAR_17->rl_parent_tag, VAR_10, 0,
     VAR_4, VAR_4, ((void*)0), ((void*)0),
     sizeof(struct rl_stats), 1, sizeof(struct rl_stats), 0, ((void*)0), ((void*)0),
     &VAR_17->rl_ldata.rl_stag);
 if (VAR_21) {
  FUNC_5(VAR_16, "could not create statistics DMA tag\n");
  return (VAR_21);
 }

 VAR_21 = FUNC_3(VAR_17->rl_ldata.rl_stag,
     (void **)&VAR_17->rl_ldata.rl_stats,
     VAR_2 | VAR_0 | VAR_3,
     &VAR_17->rl_ldata.rl_smap);
 if (VAR_21) {
  FUNC_5(VAR_16,
      "could not allocate statistics DMA memory\n");
  return (VAR_21);
 }

 VAR_17->rl_ldata.rl_stats_addr = 0;
 VAR_21 = FUNC_2(VAR_17->rl_ldata.rl_stag, VAR_17->rl_ldata.rl_smap,
     VAR_17->rl_ldata.rl_stats, sizeof(struct rl_stats), VAR_15,
      &VAR_17->rl_ldata.rl_stats_addr, VAR_1);
 if (VAR_21 != 0 || VAR_17->rl_ldata.rl_stats_addr == 0) {
  FUNC_5(VAR_16, "could not load statistics DMA memory\n");
  return (VAR_7);
 }

 return (0);
}
