
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_txq {int axq_qnum; } ;
struct ath_softc {int sc_dev; scalar_t__ sc_mcastkey; int sc_bhalq; TYPE_1__* sc_cabq; struct ath_txq** sc_ac2q; struct ath_hal* sc_ah; } ;
struct ath_hal {int ah_phyRev; int ah_analog5GhzRev; int ah_analog2GhzRev; int ah_macRev; int ah_macVersion; } ;
struct TYPE_2__ {int axq_qnum; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*,...) ;
 int * VAR_6 ;

__attribute__((used)) static void
FUNC_3(struct ath_softc *VAR_7)
{
 struct ath_hal *VAR_8 = VAR_7->sc_ah;

 FUNC_2(VAR_7->sc_dev, "%s mac %d.%d RF%s phy %d.%d\n",
  FUNC_0(VAR_8), VAR_8->ah_macVersion, VAR_8->ah_macRev,
  FUNC_1(VAR_8), VAR_8->ah_phyRev >> 4, VAR_8->ah_phyRev & 0xf);
 FUNC_2(VAR_7->sc_dev, "2GHz radio: 0x%.4x; 5GHz radio: 0x%.4x\n",
  VAR_8->ah_analog2GhzRev, VAR_8->ah_analog5GhzRev);
 if (VAR_5) {
  int VAR_9;
  for (VAR_9 = 0; VAR_9 <= VAR_2; VAR_9++) {
   struct ath_txq *VAR_10 = VAR_7->sc_ac2q[VAR_9];
   FUNC_2(VAR_7->sc_dev,
       "Use hw queue %u for %s traffic\n",
       VAR_10->axq_qnum, VAR_6[VAR_9]);
  }
  FUNC_2(VAR_7->sc_dev, "Use hw queue %u for CAB traffic\n",
      VAR_7->sc_cabq->axq_qnum);
  FUNC_2(VAR_7->sc_dev, "Use hw queue %u for beacons\n",
      VAR_7->sc_bhalq);
 }
 if (VAR_3 != VAR_0)
  FUNC_2(VAR_7->sc_dev, "using %u rx buffers\n", VAR_3);
 if (VAR_4 != VAR_1)
  FUNC_2(VAR_7->sc_dev, "using %u tx buffers\n", VAR_4);
 if (VAR_7->sc_mcastkey && VAR_5)
  FUNC_2(VAR_7->sc_dev, "using multicast key search\n");
}
