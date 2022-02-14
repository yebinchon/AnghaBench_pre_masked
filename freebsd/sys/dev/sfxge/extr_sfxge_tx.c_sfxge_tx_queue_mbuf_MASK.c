
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint16_t ;
struct sfxge_txq {scalar_t__ tso_fw_assisted; scalar_t__ init_state; unsigned int added; unsigned int ptr_mask; int n_pend_desc; int drops; int packet_dma_tag; void* hw_cksum_flags; void* hw_vlan_tci; int common; int * pend_desc; struct sfxge_tx_mapping* stmp; int collapses; int blocked; } ;
struct TYPE_7__ {struct mbuf* mbuf; } ;
struct sfxge_tx_mapping {int flags; TYPE_2__ u; scalar_t__ map; } ;
struct TYPE_6__ {int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; int m_data; } ;
typedef int efx_desc_t ;
typedef scalar_t__ bus_dmamap_t ;
struct TYPE_8__ {int ds_len; int ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,struct mbuf*,TYPE_3__*,int*,int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,int,int *) ;
 struct mbuf* FUNC_6 (struct mbuf*,int ,int) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sfxge_txq*,struct sfxge_tx_mapping**) ;
 scalar_t__ FUNC_10 (struct sfxge_txq*,struct mbuf*,struct sfxge_tx_mapping**) ;
 int FUNC_11 (struct sfxge_txq*,struct mbuf*,struct sfxge_tx_mapping**) ;
 int FUNC_12 (struct sfxge_txq*) ;
 int FUNC_13 (struct sfxge_txq*,struct mbuf*,TYPE_3__*,int,int) ;

__attribute__((used)) static int FUNC_14(struct sfxge_txq *VAR_9, struct mbuf *VAR_10)
{
 bus_dmamap_t *VAR_11;
 bus_dmamap_t VAR_12;
 bus_dma_segment_t VAR_13[VAR_6];
 unsigned int VAR_14;
 struct sfxge_tx_mapping *VAR_15;
 efx_desc_t *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 uint16_t VAR_21;
 uint16_t VAR_22;
 int VAR_23;

 FUNC_0(!VAR_9->blocked, ("txq->blocked"));
 if (VAR_10->m_pkthdr.csum_flags & VAR_1)
  FUNC_8(VAR_10->m_data);


 if (FUNC_1(VAR_9->init_state != VAR_5)) {
  VAR_18 = VAR_3;
  goto reject;
 }


 VAR_14 = VAR_9->added & VAR_9->ptr_mask;
 VAR_15 = &VAR_9->stmp[VAR_14];
 VAR_18 = FUNC_2(VAR_9->packet_dma_tag, VAR_15->map,
         VAR_10, VAR_13, &VAR_17, 0);
 if (VAR_18 == VAR_2) {

  struct mbuf *VAR_24 = FUNC_6(VAR_10, VAR_4,
         VAR_6);
  if (VAR_24 == ((void*)0))
   goto reject;
  ++VAR_9->collapses;
  VAR_10 = VAR_24;
  VAR_18 = FUNC_2(VAR_9->packet_dma_tag,
          VAR_15->map, VAR_10,
          VAR_13, &VAR_17, 0);
 }
 if (VAR_18 != 0)
  goto reject;


 FUNC_3(VAR_9->packet_dma_tag, VAR_15->map, VAR_0);

 VAR_11 = &VAR_15->map;

 VAR_21 = VAR_9->hw_cksum_flags;
 VAR_22 = VAR_9->hw_vlan_tci;






 VAR_23 = FUNC_11(VAR_9, VAR_10, &VAR_15);
 VAR_23 += FUNC_10(VAR_9, VAR_10, &VAR_15);

 if (VAR_10->m_pkthdr.csum_flags & VAR_1) {
  VAR_18 = FUNC_13(VAR_9, VAR_10, VAR_13, VAR_17,
     VAR_23);
  if (VAR_18 < 0)
   goto reject_mapped;
  VAR_15 = &VAR_9->stmp[(VAR_18 - 1) & VAR_9->ptr_mask];
 } else {




  VAR_19 = 0;
  for (;;) {
   VAR_16 = &VAR_9->pend_desc[VAR_19 + VAR_23];
   VAR_20 = (VAR_19 == VAR_17 - 1);
   FUNC_5(VAR_9->common,
      VAR_13[VAR_19].ds_addr,
      VAR_13[VAR_19].ds_len,
      VAR_20,
      VAR_16);
   if (VAR_20)
    break;
   VAR_19++;
   FUNC_9(VAR_9, &VAR_15);
  }
  VAR_9->n_pend_desc = VAR_17 + VAR_23;
 }






 if (VAR_11 != &VAR_15->map) {
  VAR_12 = VAR_15->map;
  VAR_15->map = *VAR_11;
  *VAR_11 = VAR_12;
 }

 VAR_15->u.mbuf = VAR_10;
 VAR_15->flags = VAR_8 | VAR_7;


 FUNC_12(VAR_9);

 return (0);

reject_mapped:
 VAR_9->hw_vlan_tci = VAR_22;
 VAR_9->hw_cksum_flags = VAR_21;
 FUNC_4(VAR_9->packet_dma_tag, *VAR_11);
reject:

 FUNC_7(VAR_10);
 ++VAR_9->drops;

 return (VAR_18);
}
