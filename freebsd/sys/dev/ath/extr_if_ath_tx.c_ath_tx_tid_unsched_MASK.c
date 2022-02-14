
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_txq {int axq_tidq; } ;
struct ath_tid {size_t ac; scalar_t__ sched; } ;
struct ath_softc {struct ath_txq** sc_ac2q; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (int *,struct ath_tid*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct ath_softc *VAR_1, struct ath_tid *VAR_2)
{
 struct ath_txq *VAR_3 = VAR_1->sc_ac2q[VAR_2->ac];

 FUNC_0(VAR_1);

 if (VAR_2->sched == 0)
  return;

 VAR_2->sched = 0;
 FUNC_1(&VAR_3->axq_tidq, VAR_2, VAR_0);
}
