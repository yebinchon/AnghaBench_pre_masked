
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sfxge_txq {size_t evq_index; scalar_t__ init_state; int type; unsigned int added; unsigned int pending; unsigned int completed; unsigned int reaped; unsigned int tso_fw_assisted; int hw_cksum_flags; int buf_base_id; scalar_t__ hw_vlan_tci; int max_pkt_desc; int flush_state; int common; int mem; } ;
struct sfxge_softc {unsigned int tso_fw_assisted; int txq_entries; int enp; scalar_t__ txq_dynamic_cksum_toggle_supported; struct sfxge_evq** evq; struct sfxge_txq** txq; } ;
struct sfxge_evq {scalar_t__ init_state; int common; } ;
typedef int efsys_mem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct sfxge_softc*) ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;


 int FUNC_3 (struct sfxge_txq*) ;

 scalar_t__ VAR_8 ;
 int FUNC_4 (struct sfxge_txq*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int *,int ) ;
 int FUNC_7 (int ,unsigned int,unsigned int,int *,int ,int ,int,int ,int *,unsigned int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sfxge_softc*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_10(struct sfxge_softc *VAR_9, unsigned int VAR_10)
{
 struct sfxge_txq *VAR_11;
 efsys_mem_t *VAR_12;
 uint16_t VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 struct sfxge_evq *VAR_16;
 unsigned int VAR_17;
 int VAR_18;

 FUNC_2(VAR_9);

 VAR_11 = VAR_9->txq[VAR_10];
 VAR_12 = &VAR_11->mem;
 VAR_16 = VAR_9->evq[VAR_11->evq_index];

 FUNC_1(VAR_11->init_state == VAR_7,
     ("txq->init_state != SFXGE_TXQ_INITIALIZED"));
 FUNC_1(VAR_16->init_state == VAR_4,
     ("evq->init_state != SFXGE_EVQ_STARTED"));


 if ((VAR_18 = FUNC_6(VAR_9->enp, VAR_11->buf_base_id, VAR_12,
     FUNC_0(VAR_9->txq_entries))) != 0)
  return (VAR_18);


 VAR_14 = 0;
 switch (VAR_11->type) {
 case 128:
  VAR_13 = 0;
  break;
 case 130:
  VAR_13 = VAR_0;
  break;
 case 129:
  VAR_13 = VAR_0 | VAR_1;
  VAR_14 = VAR_9->tso_fw_assisted;
  if (VAR_14 & VAR_5)
   VAR_13 |= VAR_2;
  break;
 default:
  FUNC_1(0, ("Impossible TX queue"));
  VAR_13 = 0;
  break;
 }

 VAR_15 = (VAR_9->txq_dynamic_cksum_toggle_supported) ? 0 : VAR_11->type;


 if ((VAR_18 = FUNC_7(VAR_9->enp, VAR_10, VAR_15, VAR_12,
     VAR_9->txq_entries, VAR_11->buf_base_id, VAR_13, VAR_16->common,
     &VAR_11->common, &VAR_17)) != 0) {

  if ((VAR_18 != VAR_3) || (~VAR_13 & VAR_2))
   goto fail;


  VAR_13 &= ~VAR_2;
  VAR_14 &= ~VAR_5;
  if ((VAR_18 = FUNC_7(VAR_9->enp, VAR_10, VAR_15, VAR_12,
      VAR_9->txq_entries, VAR_11->buf_base_id, VAR_13, VAR_16->common,
      &VAR_11->common, &VAR_17)) != 0)
   goto fail;
 }


 VAR_11->added = VAR_11->pending = VAR_11->completed = VAR_11->reaped = VAR_17;

 FUNC_3(VAR_11);


 FUNC_8(VAR_11->common);

 VAR_11->init_state = VAR_8;
 VAR_11->flush_state = VAR_6;
 VAR_11->tso_fw_assisted = VAR_14;

 VAR_11->max_pkt_desc = FUNC_9(VAR_9, VAR_11->type,
        VAR_14);

 VAR_11->hw_vlan_tci = 0;

 VAR_11->hw_cksum_flags = VAR_13 &
         (VAR_0 | VAR_1);

 FUNC_4(VAR_11);

 return (0);

fail:
 FUNC_5(VAR_9->enp, VAR_11->buf_base_id,
     FUNC_0(VAR_9->txq_entries));
 return (VAR_18);
}
