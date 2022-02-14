
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {unsigned int rxq_count; int rxq_entries; struct sfxge_evq** evq; struct sfxge_rxq** rxq; } ;
struct sfxge_rxq {unsigned int index; int entries; int ptr_mask; int init_state; int refill_callout; void* queue; int buf_base_id; int mem; int refill_threshold; struct sfxge_softc* sc; } ;
struct sfxge_rx_sw_desc {int dummy; } ;
struct sfxge_evq {int dummy; } ;
typedef int efsys_mem_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int *,int) ;
 void* FUNC_5 (int,int ,int) ;
 int FUNC_6 (struct sfxge_softc*,int ,int *) ;
 int FUNC_7 (struct sfxge_rxq*) ;
 int FUNC_8 (struct sfxge_softc*,int ,int *) ;

__attribute__((used)) static int
FUNC_9(struct sfxge_softc *VAR_4, unsigned int VAR_5)
{
 struct sfxge_rxq *VAR_6;
 struct sfxge_evq *VAR_7;
 efsys_mem_t *VAR_8;
 int VAR_9;

 FUNC_2(VAR_5 < VAR_4->rxq_count, ("index >= %d", VAR_4->rxq_count));

 VAR_6 = FUNC_5(sizeof(struct sfxge_rxq), VAR_0, VAR_2 | VAR_1);
 VAR_6->sc = VAR_4;
 VAR_6->index = VAR_5;
 VAR_6->entries = VAR_4->rxq_entries;
 VAR_6->ptr_mask = VAR_6->entries - 1;
 VAR_6->refill_threshold = FUNC_3(VAR_6->entries);

 VAR_4->rxq[VAR_5] = VAR_6;
 VAR_8 = &VAR_6->mem;

 VAR_7 = VAR_4->evq[VAR_5];


 if ((VAR_9 = FUNC_6(VAR_4, FUNC_1(VAR_4->rxq_entries), VAR_8)) != 0)
  return (VAR_9);


 FUNC_8(VAR_4, FUNC_0(VAR_4->rxq_entries),
     &VAR_6->buf_base_id);


 VAR_6->queue = FUNC_5(sizeof(struct sfxge_rx_sw_desc) * VAR_4->rxq_entries,
     VAR_0, VAR_1 | VAR_2);
 FUNC_7(VAR_6);

 FUNC_4(&VAR_6->refill_callout, 1);

 VAR_6->init_state = VAR_3;

 return (0);
}
