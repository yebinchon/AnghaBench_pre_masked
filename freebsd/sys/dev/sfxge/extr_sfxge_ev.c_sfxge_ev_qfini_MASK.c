
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {struct sfxge_evq** evq; } ;
struct sfxge_evq {scalar_t__ init_state; int mem; int txq; int * txqs; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sfxge_evq*) ;
 int FUNC_2 (struct sfxge_evq*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct sfxge_softc *VAR_2, unsigned int VAR_3)
{
 struct sfxge_evq *VAR_4;

 VAR_4 = VAR_2->evq[VAR_3];

 FUNC_0(VAR_4->init_state == VAR_1,
     ("evq->init_state != SFXGE_EVQ_INITIALIZED"));
 FUNC_0(VAR_4->txqs == &VAR_4->txq, ("evq->txqs != &evq->txq"));

 FUNC_3(&VAR_4->mem);

 VAR_2->evq[VAR_3] = ((void*)0);

 FUNC_1(VAR_4);

 FUNC_2(VAR_4, VAR_0);
}
