
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_txq {scalar_t__ axq_qnum; } ;
struct ath_softc {int sc_alq; } ;
struct ath_buf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*,struct ath_buf*) ;
 int FUNC_2 (struct ath_softc*,struct ath_txq*,struct ath_buf*) ;
 int FUNC_3 (struct ath_softc*,struct ath_txq*,struct ath_buf*) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct ath_softc *VAR_2, struct ath_txq *VAR_3,
    struct ath_buf *VAR_4)
{
 FUNC_0(VAR_2);






 if (VAR_3->axq_qnum == VAR_1)
  FUNC_3(VAR_2, VAR_3, VAR_4);
 else
  FUNC_2(VAR_2, VAR_3, VAR_4);
}
