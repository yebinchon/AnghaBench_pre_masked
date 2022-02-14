
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_txq {int axq_tidq; } ;
struct ath_tid {size_t ac; int sched; TYPE_1__* an; } ;
struct ath_softc {struct ath_txq** sc_ac2q; } ;
struct TYPE_2__ {scalar_t__ an_leak_count; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (int *,struct ath_tid*,int ) ;
 int FUNC_2 (int *,struct ath_tid*,int ) ;
 int FUNC_3 (struct ath_softc*,struct ath_tid*) ;
 int VAR_0 ;

void
FUNC_4(struct ath_softc *VAR_1, struct ath_tid *VAR_2)
{
 struct ath_txq *VAR_3 = VAR_1->sc_ac2q[VAR_2->ac];

 FUNC_0(VAR_1);






 if (! FUNC_3(VAR_1, VAR_2))
  return;

 if (VAR_2->sched)
  return;

 VAR_2->sched = 1;
 FUNC_2(&VAR_3->axq_tidq, VAR_2, VAR_0);
}
