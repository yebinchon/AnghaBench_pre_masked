
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int rxq_entries; int enp; struct sfxge_evq** evq; struct sfxge_rxq** rxq; } ;
struct sfxge_rxq {scalar_t__ init_state; int buf_base_id; int flush_state; int common; int mem; } ;
struct sfxge_evq {scalar_t__ init_state; int common; } ;
typedef int efsys_mem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct sfxge_softc*) ;
 int FUNC_4 (struct sfxge_evq*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct sfxge_evq*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,unsigned int,int ,int ,int *,int ,int ,int ,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int *,int ) ;
 int FUNC_10 (struct sfxge_rxq*,int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct sfxge_softc *VAR_7, unsigned int VAR_8)
{
 struct sfxge_rxq *VAR_9;
 efsys_mem_t *VAR_10;
 struct sfxge_evq *VAR_11;
 int VAR_12;

 FUNC_3(VAR_7);

 VAR_9 = VAR_7->rxq[VAR_8];
 VAR_10 = &VAR_9->mem;
 VAR_11 = VAR_7->evq[VAR_8];

 FUNC_2(VAR_9->init_state == VAR_5,
     ("rxq->init_state != SFXGE_RXQ_INITIALIZED"));
 FUNC_2(VAR_11->init_state == VAR_3,
     ("evq->init_state != SFXGE_EVQ_STARTED"));


 if ((VAR_12 = FUNC_9(VAR_7->enp, VAR_9->buf_base_id, VAR_10,
     FUNC_1(VAR_7->rxq_entries))) != 0)
  return (VAR_12);


 if ((VAR_12 = FUNC_6(VAR_7->enp, VAR_8, 0, VAR_2,
     VAR_10, VAR_7->rxq_entries, VAR_9->buf_base_id, VAR_1,
     VAR_11->common, &VAR_9->common)) != 0)
  goto fail;

 FUNC_4(VAR_11);


 FUNC_7(VAR_9->common);

 VAR_9->init_state = VAR_6;
 VAR_9->flush_state = VAR_4;


 FUNC_10(VAR_9, FUNC_0(VAR_7->rxq_entries), VAR_0);

 FUNC_5(VAR_11);

 return (0);

fail:
 FUNC_8(VAR_7->enp, VAR_9->buf_base_id,
     FUNC_1(VAR_7->rxq_entries));
 return (VAR_12);
}
