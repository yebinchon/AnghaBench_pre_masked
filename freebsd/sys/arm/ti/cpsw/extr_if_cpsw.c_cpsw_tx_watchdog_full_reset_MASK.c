
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpswp_softc {int dummy; } ;
struct TYPE_3__ {int active; } ;
struct cpsw_softc {int active_slave; TYPE_2__* port; int dualemac; TYPE_1__ tx; int dev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct cpswp_softc*) ;
 int FUNC_3 (struct cpswp_softc*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct cpsw_softc*,int *) ;
 int FUNC_6 (struct cpsw_softc*,int ) ;
 int FUNC_7 (struct cpswp_softc*) ;
 struct cpswp_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_11(struct cpsw_softc *VAR_1)
{
 struct cpswp_softc *VAR_2;
 int VAR_3;

 FUNC_4("CPSW watchdog");
 FUNC_9(VAR_1->dev, "watchdog timeout\n");
 FUNC_10("CPSW_CPDMA_TX%d_HDP=0x%x\n", 0,
     FUNC_6(VAR_1, FUNC_1(0)));
 FUNC_10("CPSW_CPDMA_TX%d_CP=0x%x\n", 0,
     FUNC_6(VAR_1, FUNC_0(0)));
 FUNC_5(VAR_1, &VAR_1->tx.active);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!VAR_1->dualemac && VAR_3 != VAR_1->active_slave)
   continue;
  VAR_2 = FUNC_8(VAR_1->port[VAR_3].dev);
  FUNC_2(VAR_2);
  FUNC_7(VAR_2);
  FUNC_3(VAR_2);
 }
}
