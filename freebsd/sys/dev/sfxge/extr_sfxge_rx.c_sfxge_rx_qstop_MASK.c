
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int rxq_entries; int enp; int dev; struct sfxge_evq** evq; struct sfxge_rxq** rxq; } ;
struct sfxge_rxq {scalar_t__ init_state; scalar_t__ flush_state; scalar_t__ pending; scalar_t__ added; scalar_t__ completed; int buf_base_id; int common; scalar_t__ loopback; scalar_t__ pushed; int refill_callout; } ;
struct sfxge_evq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct sfxge_softc*) ;
 int FUNC_4 (struct sfxge_evq*) ;
 int FUNC_5 (struct sfxge_evq*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,char*,int ,unsigned int) ;
 int FUNC_12 (struct sfxge_rxq*,int ) ;

__attribute__((used)) static void
FUNC_13(struct sfxge_softc *VAR_7, unsigned int VAR_8)
{
 struct sfxge_rxq *VAR_9;
 struct sfxge_evq *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12 = 3;

 FUNC_3(VAR_7);

 VAR_9 = VAR_7->rxq[VAR_8];
 VAR_10 = VAR_7->evq[VAR_8];

 FUNC_4(VAR_10);

 FUNC_2(VAR_9->init_state == VAR_6,
     ("rxq not started"));

 VAR_9->init_state = VAR_5;

 FUNC_6(&VAR_9->refill_callout);

 while (VAR_9->flush_state != VAR_2 && VAR_12 != 0) {
  VAR_9->flush_state = VAR_4;

  FUNC_5(VAR_10);


  if (FUNC_9(VAR_9->common) != 0) {
   FUNC_4(VAR_10);
   VAR_9->flush_state = VAR_3;
   break;
  }

  VAR_11 = 0;
  do {

   FUNC_0(100000);

   if (VAR_9->flush_state != VAR_4)
    break;

  } while (++VAR_11 < 20);

  FUNC_4(VAR_10);

  if (VAR_9->flush_state == VAR_4) {

   FUNC_11(VAR_1, "%s: Cannot flush Rx queue %u\n",
       FUNC_7(VAR_7->dev), VAR_8);
   VAR_9->flush_state = VAR_2;
  }
  VAR_12--;
 }
 if (VAR_9->flush_state == VAR_3) {
  FUNC_11(VAR_1, "%s: Flushing Rx queue %u failed\n",
      FUNC_7(VAR_7->dev), VAR_8);
  VAR_9->flush_state = VAR_2;
 }

 VAR_9->pending = VAR_9->added;
 FUNC_12(VAR_9, VAR_0);

 FUNC_2(VAR_9->completed == VAR_9->pending,
     ("rxq->completed != rxq->pending"));

 VAR_9->added = 0;
 VAR_9->pushed = 0;
 VAR_9->pending = 0;
 VAR_9->completed = 0;
 VAR_9->loopback = 0;


 FUNC_8(VAR_9->common);

 FUNC_10(VAR_7->enp, VAR_9->buf_base_id,
     FUNC_1(VAR_7->rxq_entries));

 FUNC_5(VAR_10);
}
