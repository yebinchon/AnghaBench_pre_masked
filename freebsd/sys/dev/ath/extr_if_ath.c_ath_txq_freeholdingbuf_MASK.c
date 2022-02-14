
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_txq {TYPE_1__* axq_holdingbf; } ;
struct ath_softc {int dummy; } ;
struct TYPE_2__ {int bf_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_txq*) ;
 int FUNC_4 (struct ath_softc*,TYPE_1__*) ;

void
FUNC_5(struct ath_softc *VAR_1, struct ath_txq *VAR_2)
{
 FUNC_2(VAR_1);
 FUNC_3(VAR_2);

 if (VAR_2->axq_holdingbf == ((void*)0))
  return;

 VAR_2->axq_holdingbf->bf_flags &= ~VAR_0;

 FUNC_0(VAR_1);
 FUNC_4(VAR_1, VAR_2->axq_holdingbf);
 FUNC_1(VAR_1);

 VAR_2->axq_holdingbf = ((void*)0);
}
