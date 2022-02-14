
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl_txq {int qnum; } ;
struct TYPE_2__ {int fwReleaseNumber; int regionCode; int hwVersion; } ;
struct mwl_softc {int sc_fwrelease; int sc_dev; int sc_mh; struct mwl_txq** sc_ac2q; TYPE_1__ sc_hwspecs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int * VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_2(struct mwl_softc *VAR_9)
{

 FUNC_0(VAR_9->sc_dev, "Rev A%d hardware, v%d.%d.%d.%d firmware (regioncode %d)\n",
  VAR_9->sc_hwspecs.hwVersion,
  (VAR_9->sc_hwspecs.fwReleaseNumber>>24) & 0xff,
  (VAR_9->sc_hwspecs.fwReleaseNumber>>16) & 0xff,
  (VAR_9->sc_hwspecs.fwReleaseNumber>>8) & 0xff,
  (VAR_9->sc_hwspecs.fwReleaseNumber>>0) & 0xff,
  VAR_9->sc_hwspecs.regionCode);
 VAR_9->sc_fwrelease = VAR_9->sc_hwspecs.fwReleaseNumber;

 if (VAR_4) {
  int VAR_10;
  for (VAR_10 = 0; VAR_10 <= VAR_3; VAR_10++) {
   struct mwl_txq *VAR_11 = VAR_9->sc_ac2q[VAR_10];
   FUNC_0(VAR_9->sc_dev, "Use hw queue %u for %s traffic\n",
    VAR_11->qnum, VAR_5[VAR_10]);
  }
 }
 if (VAR_4 || VAR_7 != VAR_1)
  FUNC_0(VAR_9->sc_dev, "using %u rx descriptors\n", VAR_7);
 if (VAR_4 || VAR_6 != VAR_0)
  FUNC_0(VAR_9->sc_dev, "using %u rx buffers\n", VAR_6);
 if (VAR_4 || VAR_8 != VAR_2)
  FUNC_0(VAR_9->sc_dev, "using %u tx buffers\n", VAR_8);
 if (VAR_4 && FUNC_1(VAR_9->sc_mh))
  FUNC_0(VAR_9->sc_dev, "multi-bss support\n");




}
