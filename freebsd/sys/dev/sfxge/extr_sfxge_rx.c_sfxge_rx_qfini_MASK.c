
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {struct sfxge_rxq** rxq; } ;
struct sfxge_rxq {scalar_t__ init_state; int mem; struct sfxge_rxq* queue; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sfxge_rxq*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sfxge_rxq*) ;

__attribute__((used)) static void
FUNC_4(struct sfxge_softc *VAR_2, unsigned int VAR_3)
{
 struct sfxge_rxq *VAR_4;

 VAR_4 = VAR_2->rxq[VAR_3];

 FUNC_0(VAR_4->init_state == VAR_1,
     ("rxq->init_state != SFXGE_RXQ_INITIALIZED"));


 FUNC_1(VAR_4->queue, VAR_0);
 FUNC_3(VAR_4);


 FUNC_2(&VAR_4->mem);

 VAR_2->rxq[VAR_3] = ((void*)0);

 FUNC_1(VAR_4, VAR_0);
}
