
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_txq {int dummy; } ;
struct mwl_softc {struct mwl_txq** sc_ac2q; struct mwl_txq* sc_txq; int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct mwl_softc*,struct mwl_txq*,int) ;
 int FUNC_2 (struct mwl_txq**) ;

__attribute__((used)) static int
FUNC_3(struct mwl_softc *VAR_1, int VAR_2, int VAR_3)
{
 struct mwl_txq *VAR_4;

 if (VAR_2 >= FUNC_2(VAR_1->sc_ac2q)) {
  FUNC_0(VAR_1->sc_dev, "AC %u out of range, max %zu!\n",
   VAR_2, FUNC_2(VAR_1->sc_ac2q));
  return 0;
 }
 if (VAR_3 >= VAR_0) {
  FUNC_0(VAR_1->sc_dev, "mvtype %u out of range, max %u!\n",
   VAR_3, VAR_0);
  return 0;
 }
 VAR_4 = &VAR_1->sc_txq[VAR_3];
 FUNC_1(VAR_1, VAR_4, VAR_3);
 VAR_1->sc_ac2q[VAR_2] = VAR_4;
 return 1;
}
