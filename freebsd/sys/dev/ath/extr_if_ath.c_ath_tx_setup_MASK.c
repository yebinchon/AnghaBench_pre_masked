
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_txq {int axq_ac; } ;
struct ath_softc {struct ath_txq** sc_ac2q; int sc_dev; } ;


 int VAR_0 ;
 struct ath_txq* FUNC_0 (struct ath_softc*,int ,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct ath_txq**) ;

__attribute__((used)) static int
FUNC_3(struct ath_softc *VAR_1, int VAR_2, int VAR_3)
{
 struct ath_txq *VAR_4;

 if (VAR_2 >= FUNC_2(VAR_1->sc_ac2q)) {
  FUNC_1(VAR_1->sc_dev, "AC %u out of range, max %zu!\n",
   VAR_2, FUNC_2(VAR_1->sc_ac2q));
  return 0;
 }
 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_3);
 if (VAR_4 != ((void*)0)) {
  VAR_4->axq_ac = VAR_2;
  VAR_1->sc_ac2q[VAR_2] = VAR_4;
  return 1;
 } else
  return 0;
}
