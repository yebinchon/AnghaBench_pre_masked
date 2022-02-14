
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_txq {unsigned int evq_index; scalar_t__ pending; scalar_t__ completed; struct sfxge_txq* next; } ;
struct sfxge_softc {struct sfxge_rxq** rxq; } ;
struct sfxge_rxq {scalar_t__ pending; scalar_t__ completed; } ;
struct sfxge_evq {unsigned int index; struct sfxge_txq* txq; struct sfxge_txq** txqs; struct sfxge_softc* sc; } ;
typedef int boolean_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sfxge_evq*) ;
 int FUNC_2 (struct sfxge_rxq*,int ) ;
 int FUNC_3 (struct sfxge_txq*,struct sfxge_evq*) ;

__attribute__((used)) static void
FUNC_4(struct sfxge_evq *VAR_0, boolean_t VAR_1)
{
 struct sfxge_softc *VAR_2;
 unsigned int VAR_3;
 struct sfxge_rxq *VAR_4;
 struct sfxge_txq *VAR_5;

 FUNC_1(VAR_0);

 VAR_2 = VAR_0->sc;
 VAR_3 = VAR_0->index;
 VAR_4 = VAR_2->rxq[VAR_3];

 if ((VAR_5 = VAR_0->txq) != ((void*)0)) {
  VAR_0->txq = ((void*)0);
  VAR_0->txqs = &(VAR_0->txq);

  do {
   struct sfxge_txq *VAR_6;

   VAR_6 = VAR_5->next;
   VAR_5->next = ((void*)0);

   FUNC_0(VAR_5->evq_index == VAR_3,
       ("txq->evq_index != index"));

   if (VAR_5->pending != VAR_5->completed)
    FUNC_3(VAR_5, VAR_0);

   VAR_5 = VAR_6;
  } while (VAR_5 != ((void*)0));
 }

 if (VAR_4->pending != VAR_4->completed)
  FUNC_2(VAR_4, VAR_1);
}
