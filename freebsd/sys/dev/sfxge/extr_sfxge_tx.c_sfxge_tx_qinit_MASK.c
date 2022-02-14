
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sfxge_tx_dpl {int std_put_hiwat; int std_get_hiwat; int std_get_non_tcp_count; int std_get_count; int std_get; int * std_getp; int std_get_non_tcp_max; int std_get_max; int std_put_max; } ;
struct sfxge_txq {int entries; int ptr_mask; int type; unsigned int evq_index; int packet_dma_tag; TYPE_2__* stmp; TYPE_2__* pend_desc; int init_state; struct sfxge_tx_dpl dpl; int buf_base_id; int mem; struct sfxge_softc* sc; } ;
struct sfxge_tx_mapping {int dummy; } ;
struct sfxge_softc {int txq_entries; int dev; struct sysctl_oid* txqs_node; int parent_dma_tag; struct sfxge_evq** evq; struct sfxge_txq** txq; int enp; } ;
struct sfxge_evq {int dummy; } ;
typedef int name ;
typedef enum sfxge_txq_type { ____Placeholder_sfxge_txq_type } sfxge_txq_type ;
struct TYPE_4__ {int enc_tx_dma_desc_size_max; int enc_tx_dma_desc_boundary; } ;
typedef TYPE_1__ efx_nic_cfg_t ;
typedef int efx_desc_t ;
typedef int efsys_mem_t ;
struct TYPE_5__ {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct sfxge_txq*,int ,unsigned int) ;
 int VAR_10 ;
 struct sysctl_oid* FUNC_4 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,char*) ;
 int FUNC_5 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_6 (struct sysctl_oid*) ;
 scalar_t__ FUNC_7 (int ,int,int ,int ,int ,int *,int *,int,int ,int ,int ,int *,int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 struct sysctl_ctx_list* FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 TYPE_1__* FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 void* FUNC_16 (int,int ,int) ;
 int FUNC_17 (struct sfxge_softc*,int ,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct sfxge_softc*,int ,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_20 (struct sfxge_txq*,struct sysctl_oid*) ;
 int FUNC_21 (char*,int,char*,unsigned int) ;
 int FUNC_22 (struct sfxge_txq*) ;

__attribute__((used)) static int
FUNC_23(struct sfxge_softc *VAR_14, unsigned int VAR_15,
        enum sfxge_txq_type VAR_16, unsigned int VAR_17)
{
 const efx_nic_cfg_t *VAR_18 = FUNC_14(VAR_14->enp);
 char VAR_19[16];
 struct sysctl_ctx_list *VAR_20 = FUNC_12(VAR_14->dev);
 struct sysctl_oid *VAR_21;
 struct sfxge_txq *VAR_22;
 struct sfxge_evq *VAR_23;
 struct sfxge_tx_dpl *VAR_24;
 struct sysctl_oid *VAR_25;
 efsys_mem_t *VAR_26;
 unsigned int VAR_27;
 int VAR_28;

 VAR_22 = FUNC_16(sizeof(struct sfxge_txq), VAR_4, VAR_6 | VAR_5);
 VAR_22->sc = VAR_14;
 VAR_22->entries = VAR_14->txq_entries;
 VAR_22->ptr_mask = VAR_22->entries - 1;

 VAR_14->txq[VAR_15] = VAR_22;
 VAR_26 = &VAR_22->mem;

 VAR_23 = VAR_14->evq[VAR_17];


 if ((VAR_28 = FUNC_17(VAR_14, FUNC_1(VAR_14->txq_entries), VAR_26)) != 0)
  return (VAR_28);


 FUNC_19(VAR_14, FUNC_0(VAR_14->txq_entries),
     &VAR_22->buf_base_id);


 if (FUNC_7(VAR_14->parent_dma_tag, 1,
     VAR_18->enc_tx_dma_desc_boundary,
     FUNC_2(0x3FFFFFFFFFFFUL, VAR_0), VAR_0, ((void*)0),
     ((void*)0), 0x11000, VAR_10,
     VAR_18->enc_tx_dma_desc_size_max, 0, ((void*)0), ((void*)0),
     &VAR_22->packet_dma_tag) != 0) {
  FUNC_13(VAR_14->dev, "Couldn't allocate txq DMA tag\n");
  VAR_28 = VAR_3;
  goto fail;
 }


 VAR_22->pend_desc = FUNC_16(sizeof(efx_desc_t) * VAR_14->txq_entries,
    VAR_4, VAR_6 | VAR_5);


 VAR_22->stmp = FUNC_16(sizeof(struct sfxge_tx_mapping) * VAR_14->txq_entries,
     VAR_4, VAR_6 | VAR_5);
 for (VAR_27 = 0; VAR_27 < VAR_14->txq_entries; VAR_27++) {
  VAR_28 = FUNC_9(VAR_22->packet_dma_tag, 0,
           &VAR_22->stmp[VAR_27].map);
  if (VAR_28 != 0)
   goto fail2;
 }

 FUNC_21(VAR_19, sizeof(VAR_19), "%u", VAR_15);
 VAR_21 = FUNC_4(VAR_20, FUNC_6(VAR_14->txqs_node),
       VAR_7, VAR_19, VAR_1, ((void*)0), "");
 if (VAR_21 == ((void*)0)) {
  VAR_28 = VAR_3;
  goto fail_txq_node;
 }

 if (VAR_16 == VAR_9 &&
     (VAR_28 = FUNC_22(VAR_22)) != 0)
  goto fail3;


 VAR_24 = &VAR_22->dpl;
 VAR_24->std_put_max = VAR_13;
 VAR_24->std_get_max = VAR_11;
 VAR_24->std_get_non_tcp_max = VAR_12;
 VAR_24->std_getp = &VAR_24->std_get;

 FUNC_3(VAR_22, FUNC_11(VAR_14->dev), VAR_15);

 VAR_25 = FUNC_4(VAR_20, FUNC_6(VAR_21), VAR_7,
       "dpl", VAR_1, ((void*)0),
       "Deferred packet list statistics");
 if (VAR_25 == ((void*)0)) {
  VAR_28 = VAR_3;
  goto fail_dpl_node;
 }

 FUNC_5(VAR_20, FUNC_6(VAR_25), VAR_7,
   "get_count", VAR_1 | VAR_2,
   &VAR_24->std_get_count, 0, "");
 FUNC_5(VAR_20, FUNC_6(VAR_25), VAR_7,
   "get_non_tcp_count", VAR_1 | VAR_2,
   &VAR_24->std_get_non_tcp_count, 0, "");
 FUNC_5(VAR_20, FUNC_6(VAR_25), VAR_7,
   "get_hiwat", VAR_1 | VAR_2,
   &VAR_24->std_get_hiwat, 0, "");
 FUNC_5(VAR_20, FUNC_6(VAR_25), VAR_7,
   "put_hiwat", VAR_1 | VAR_2,
   &VAR_24->std_put_hiwat, 0, "");

 VAR_28 = FUNC_20(VAR_22, VAR_21);
 if (VAR_28 != 0)
  goto fail_txq_stat_init;

 VAR_22->type = VAR_16;
 VAR_22->evq_index = VAR_17;
 VAR_22->init_state = VAR_8;

 return (0);

fail_txq_stat_init:
fail_dpl_node:
fail3:
fail_txq_node:
 FUNC_15(VAR_22->pend_desc, VAR_4);
fail2:
 while (VAR_27-- != 0)
  FUNC_10(VAR_22->packet_dma_tag, VAR_22->stmp[VAR_27].map);
 FUNC_15(VAR_22->stmp, VAR_4);
 FUNC_8(VAR_22->packet_dma_tag);

fail:
 FUNC_18(VAR_26);

 return (VAR_28);
}
