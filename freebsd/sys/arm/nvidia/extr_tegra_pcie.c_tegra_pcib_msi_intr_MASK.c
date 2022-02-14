
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct trapframe {int dummy; } ;
struct tegra_pcib_softc {int dev; struct tegra_pcib_irqsrc* isrcs; } ;
struct tegra_pcib_irqsrc {int isrc; } ;
struct TYPE_2__ {struct trapframe* td_intr_frame; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct tegra_pcib_softc*,int ) ;
 int FUNC_2 (struct tegra_pcib_softc*,int ,int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *,struct trapframe*) ;
 int FUNC_6 (struct tegra_pcib_softc*,struct tegra_pcib_irqsrc*,int ) ;

__attribute__((used)) static int
FUNC_7(void *VAR_4)
{
 u_int VAR_5, VAR_6, VAR_7, VAR_8;
 struct tegra_pcib_softc *VAR_9;
 struct trapframe *VAR_10;
 struct tegra_pcib_irqsrc *VAR_11;

 VAR_9 = (struct tegra_pcib_softc *)VAR_4;
 VAR_10 = VAR_3->td_intr_frame;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_8 = FUNC_1(VAR_9, FUNC_0(VAR_6));

  while (VAR_8 != 0) {
   VAR_7 = FUNC_4(VAR_8) - 1;

   FUNC_2(VAR_9, FUNC_0(VAR_6), 1 << VAR_7);
   VAR_5 = VAR_6 * VAR_0 + VAR_7;
   VAR_11 = &VAR_9->isrcs[VAR_5];
   if (FUNC_5(&VAR_11->isrc, VAR_10) != 0) {

    FUNC_6(VAR_9, VAR_11, 0);
    FUNC_3(VAR_9->dev,
        "Stray irq %u disabled\n", VAR_5);
   }
   VAR_8 = FUNC_1(VAR_9, FUNC_0(VAR_6));
  }
 }
 return (VAR_2);
}
