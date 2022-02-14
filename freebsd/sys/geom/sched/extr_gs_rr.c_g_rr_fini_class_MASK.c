
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_rr_queue {TYPE_1__* q_sc; int q_bioq; } ;
struct TYPE_4__ {int queues; } ;
struct TYPE_3__ {int sc_nqueues; } ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, void *VAR_2)
{
 struct g_rr_queue *VAR_3 = VAR_2;

 FUNC_0(FUNC_1(&VAR_3->q_bioq) == ((void*)0),
   ("released nonempty queue"));
 VAR_3->q_sc->sc_nqueues--;
 VAR_0.queues--;
}
