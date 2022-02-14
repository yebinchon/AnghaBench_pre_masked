
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct hn_txdesc {int flags; int rndis_pkt_dmap; int rndis_pkt; int data_dmap; int rndis_pkt_paddr; int agg_list; int chim_index; struct hn_tx_ring* txr; } ;
struct hn_tx_ring {int hn_tx_idx; int hn_txdesc_cnt; int hn_sched_tx; int hn_txdesc_avail; int hn_oactive; int hn_sends; int hn_pkts; int * hn_tx_sysctl_tree; void* hn_txdesc_br; int hn_txlist; int hn_tx_rndis_dtag; int hn_tx_data_dtag; struct hn_txdesc* hn_txdesc; int hn_direct_tx_size; int hn_tx_lock; void* hn_mbuf_br; int hn_txeof_task; int hn_tx_task; int hn_txeof; int hn_tx_taskq; int hn_txlist_spin; struct hn_softc* hn_sc; } ;
struct hn_softc {int * hn_tx_sysctl_tree; int * hn_tx_taskqs; int hn_dev; struct hn_tx_ring* hn_tx_ring; } ;
typedef int name ;
typedef int device_t ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct hn_softc*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct hn_txdesc*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int*,int ,char*) ;
 int * FUNC_5 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int ,char*) ;
 int FUNC_6 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,struct hn_tx_ring*) ;
 int FUNC_9 (int ,int ,int ) ;
 void* FUNC_10 (int,int ,int,int *) ;
 int FUNC_11 (void*,struct hn_txdesc*) ;
 int FUNC_12 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_13 (int ,int ,int *) ;
 int FUNC_14 (int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,void**,int,int *) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 struct sysctl_ctx_list* FUNC_20 (int ) ;
 int FUNC_21 (int ,char*,...) ;
 int VAR_25 ;
 int FUNC_22 (struct hn_tx_ring*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 struct hn_txdesc* FUNC_23 (int,int ,int) ;
 int FUNC_24 (int *,char*,int *,int ) ;
 int FUNC_25 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_26(struct hn_softc *VAR_37, int VAR_38)
{
 struct hn_tx_ring *VAR_39 = &VAR_37->hn_tx_ring[VAR_38];
 device_t VAR_40 = VAR_37->hn_dev;
 bus_dma_tag_t VAR_41;
 int VAR_42, VAR_43;

 VAR_39->hn_sc = VAR_37;
 VAR_39->hn_tx_idx = VAR_38;


 FUNC_24(&VAR_39->hn_txlist_spin, "hn txlist", ((void*)0), VAR_20);

 FUNC_24(&VAR_39->hn_tx_lock, "hn tx", ((void*)0), VAR_19);

 VAR_39->hn_txdesc_cnt = VAR_17;
 VAR_39->hn_txdesc = FUNC_23(sizeof(struct hn_txdesc) * VAR_39->hn_txdesc_cnt,
     VAR_21, VAR_22 | VAR_23);

 FUNC_1(&VAR_39->hn_txlist);





 if (VAR_30 == VAR_18) {
  VAR_39->hn_tx_taskq = FUNC_9(
      FUNC_19(VAR_40), VAR_40, FUNC_0(VAR_37, VAR_38));
 } else {
  VAR_39->hn_tx_taskq = VAR_37->hn_tx_taskqs[VAR_38 % VAR_29];
 }
 {
  int VAR_44;

  VAR_39->hn_txeof = VAR_33;
  FUNC_8(&VAR_39->hn_tx_task, 0, VAR_32, VAR_39);
  FUNC_8(&VAR_39->hn_txeof_task, 0, VAR_34, VAR_39);

  VAR_44 = FUNC_22(VAR_39);
  VAR_39->hn_mbuf_br = FUNC_10(VAR_44, VAR_21,
      VAR_22, &VAR_39->hn_tx_lock);
 }

 VAR_39->hn_direct_tx_size = VAR_25;





 VAR_39->hn_sched_tx = 1;

 VAR_41 = FUNC_18(VAR_40);


 VAR_42 = FUNC_12(VAR_41,
     VAR_9,
     VAR_10,
     VAR_4,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_11,
     1,
     VAR_11,
     0,
     ((void*)0),
     ((void*)0),
     &VAR_39->hn_tx_rndis_dtag);
 if (VAR_42) {
  FUNC_21(VAR_40, "failed to create rndis dmatag\n");
  return VAR_42;
 }


 VAR_42 = FUNC_12(VAR_41,
     1,
     VAR_13,
     VAR_4,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_14,
     VAR_15,
     VAR_16,
     0,
     ((void*)0),
     ((void*)0),
     &VAR_39->hn_tx_data_dtag);
 if (VAR_42) {
  FUNC_21(VAR_40, "failed to create data dmatag\n");
  return VAR_42;
 }

 for (VAR_43 = 0; VAR_43 < VAR_39->hn_txdesc_cnt; ++VAR_43) {
  struct hn_txdesc *VAR_45 = &VAR_39->hn_txdesc[VAR_43];

  VAR_45->txr = VAR_39;
  VAR_45->chim_index = VAR_8;
  FUNC_3(&VAR_45->agg_list);




         VAR_42 = FUNC_16(VAR_39->hn_tx_rndis_dtag,
      (void **)&VAR_45->rndis_pkt,
      VAR_2 | VAR_0 | VAR_3,
      &VAR_45->rndis_pkt_dmap);
  if (VAR_42) {
   FUNC_21(VAR_40,
       "failed to allocate rndis_packet_msg, %d\n", VAR_43);
   return VAR_42;
  }

  VAR_42 = FUNC_14(VAR_39->hn_tx_rndis_dtag,
      VAR_45->rndis_pkt_dmap,
      VAR_45->rndis_pkt, VAR_11,
      VAR_35, &VAR_45->rndis_pkt_paddr,
      VAR_1);
  if (VAR_42) {
   FUNC_21(VAR_40,
       "failed to load rndis_packet_msg, %d\n", VAR_43);
   FUNC_17(VAR_39->hn_tx_rndis_dtag,
       VAR_45->rndis_pkt, VAR_45->rndis_pkt_dmap);
   return VAR_42;
  }


  VAR_42 = FUNC_13(VAR_39->hn_tx_data_dtag, 0,
      &VAR_45->data_dmap);
  if (VAR_42) {
   FUNC_21(VAR_40,
       "failed to allocate tx data dmamap\n");
   FUNC_15(VAR_39->hn_tx_rndis_dtag,
       VAR_45->rndis_pkt_dmap);
   FUNC_17(VAR_39->hn_tx_rndis_dtag,
       VAR_45->rndis_pkt, VAR_45->rndis_pkt_dmap);
   return VAR_42;
  }


  VAR_45->flags |= VAR_12;

  FUNC_2(&VAR_39->hn_txlist, VAR_45, VAR_36);



 }
 VAR_39->hn_txdesc_avail = VAR_39->hn_txdesc_cnt;

 if (VAR_37->hn_tx_sysctl_tree != ((void*)0)) {
  struct sysctl_oid_list *VAR_46;
  struct sysctl_ctx_list *VAR_47;
  char VAR_48[16];





  VAR_47 = FUNC_20(VAR_40);
  VAR_46 = FUNC_7(VAR_37->hn_tx_sysctl_tree);

  FUNC_25(VAR_48, sizeof(VAR_48), "%d", VAR_38);
  VAR_39->hn_tx_sysctl_tree = FUNC_5(VAR_47, VAR_46, VAR_24,
      VAR_48, VAR_6 | VAR_5, 0, "");

  if (VAR_39->hn_tx_sysctl_tree != ((void*)0)) {
   VAR_46 = FUNC_7(VAR_39->hn_tx_sysctl_tree);
   {
    FUNC_4(VAR_47, VAR_46, VAR_24, "oactive",
        VAR_6, &VAR_39->hn_oactive, 0,
        "over active");
   }
   FUNC_6(VAR_47, VAR_46, VAR_24, "packets",
       VAR_7, &VAR_39->hn_pkts,
       "# of packets transmitted");
   FUNC_6(VAR_47, VAR_46, VAR_24, "sends",
       VAR_7, &VAR_39->hn_sends, "# of sends");
  }
 }

 return 0;
}
