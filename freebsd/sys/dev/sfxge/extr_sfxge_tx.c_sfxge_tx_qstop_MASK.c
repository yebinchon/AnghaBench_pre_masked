
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_txq {size_t evq_index; scalar_t__ init_state; scalar_t__ flush_state; scalar_t__ pending; scalar_t__ added; scalar_t__ completed; scalar_t__ reaped; scalar_t__ hw_cksum_flags; int buf_base_id; int * common; scalar_t__ blocked; } ;
struct sfxge_softc {int txq_entries; int enp; int dev; struct sfxge_evq** evq; struct sfxge_txq** txq; } ;
struct sfxge_evq {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int FUNC_3 (struct sfxge_softc*) ;
 int FUNC_4 (struct sfxge_evq*) ;
 int FUNC_5 (struct sfxge_evq*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct sfxge_txq*) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (struct sfxge_txq*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,int ,unsigned int) ;
 int FUNC_13 (struct sfxge_txq*,struct sfxge_evq*) ;
 int FUNC_14 (struct sfxge_txq*) ;

__attribute__((used)) static void
FUNC_15(struct sfxge_softc *VAR_6, unsigned int VAR_7)
{
 struct sfxge_txq *VAR_8;
 struct sfxge_evq *VAR_9;
 unsigned int VAR_10;

 FUNC_3(VAR_6);

 VAR_8 = VAR_6->txq[VAR_7];
 VAR_9 = VAR_6->evq[VAR_8->evq_index];

 FUNC_4(VAR_9);
 FUNC_6(VAR_8);

 FUNC_2(VAR_8->init_state == VAR_5,
     ("txq->init_state != SFXGE_TXQ_STARTED"));

 VAR_8->init_state = VAR_4;

 if (VAR_8->flush_state != VAR_1) {
  VAR_8->flush_state = VAR_3;

  FUNC_5(VAR_9);
  FUNC_7(VAR_8);


  if (FUNC_11(VAR_8->common) != 0) {
   FUNC_12(VAR_0, "%s: Flushing Tx queue %u failed\n",
       FUNC_8(VAR_6->dev), VAR_7);
   VAR_8->flush_state = VAR_1;
  } else {
   VAR_10 = 0;
   do {

    FUNC_0(100000);
    if (VAR_8->flush_state != VAR_3)
     break;
   } while (++VAR_10 < 20);
  }
  FUNC_4(VAR_9);
  FUNC_6(VAR_8);

  FUNC_2(VAR_8->flush_state != VAR_2,
      ("txq->flush_state == SFXGE_FLUSH_FAILED"));

  if (VAR_8->flush_state != VAR_1) {

   FUNC_12(VAR_0, "%s: Cannot flush Tx queue %u\n",
       FUNC_8(VAR_6->dev), VAR_7);
   VAR_8->flush_state = VAR_1;
  }
 }

 VAR_8->blocked = 0;
 VAR_8->pending = VAR_8->added;

 FUNC_13(VAR_8, VAR_9);
 FUNC_2(VAR_8->completed == VAR_8->added,
     ("txq->completed != txq->added"));

 FUNC_14(VAR_8);
 FUNC_2(VAR_8->reaped == VAR_8->completed,
     ("txq->reaped != txq->completed"));

 VAR_8->added = 0;
 VAR_8->pending = 0;
 VAR_8->completed = 0;
 VAR_8->reaped = 0;


 FUNC_10(VAR_8->common);
 VAR_8->common = ((void*)0);

 FUNC_9(VAR_6->enp, VAR_8->buf_base_id,
     FUNC_1(VAR_6->txq_entries));

 VAR_8->hw_cksum_flags = 0;

 FUNC_5(VAR_9);
 FUNC_7(VAR_8);
}
