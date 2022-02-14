
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_rr_softc {int sc_nqueues; } ;
struct g_rr_queue {int q_budget; int q_slice_duration; int q_wait_ticks; struct g_rr_softc* q_sc; int q_bioq; } ;
struct TYPE_2__ {int queues; int wait_ms; int quantum_ms; int quantum_kb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, void *VAR_2)
{
 struct g_rr_softc *VAR_3 = VAR_1;
 struct g_rr_queue *VAR_4 = VAR_2;

 FUNC_0(&VAR_4->q_bioq);
 VAR_4->q_budget = 1024 * FUNC_1(&VAR_0.quantum_kb, 0);
 VAR_4->q_slice_duration = FUNC_1(&VAR_0.quantum_ms, 2);
 VAR_4->q_wait_ticks = FUNC_1(&VAR_0.wait_ms, 2);

 VAR_4->q_sc = VAR_3;
 VAR_4->q_sc->sc_nqueues++;
 VAR_0.queues++;

 return (0);
}
