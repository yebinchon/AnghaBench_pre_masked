
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {struct sfxge_evq** evq; } ;
struct sfxge_evq {scalar_t__ init_state; int * common; } ;
typedef int efx_evq_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct sfxge_softc *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 struct sfxge_evq *VAR_4;
 efx_evq_t *VAR_5;

 VAR_4 = VAR_1->evq[VAR_2];
 VAR_5 = VAR_4->common;

 FUNC_0(VAR_4->init_state == VAR_0,
     ("evq->init_state != SFXGE_EVQ_STARTED"));

 (void)FUNC_1(VAR_5, VAR_3);
}
