
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct trapframe {int dummy; } ;
struct tegra_gpio_softc {int dev; struct tegra_gpio_irqsrc* isrcs; int mem_res; } ;
struct tegra_gpio_irqsrc {int isrc; } ;
struct tegra_gpio_irq_cookie {int bank_num; struct tegra_gpio_softc* sc; } ;
struct TYPE_2__ {struct trapframe* td_intr_frame; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int *,struct trapframe*) ;
 int FUNC_4 (struct tegra_gpio_softc*,struct tegra_gpio_irqsrc*) ;
 scalar_t__ FUNC_5 (struct tegra_gpio_irqsrc*) ;
 int FUNC_6 (struct tegra_gpio_softc*,struct tegra_gpio_irqsrc*,int ) ;

__attribute__((used)) static int
FUNC_7(void *VAR_6)
{
 u_int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 struct tegra_gpio_softc *VAR_12;
 struct trapframe *VAR_13;
 struct tegra_gpio_irqsrc *VAR_14;
 struct tegra_gpio_irq_cookie *VAR_15;

 VAR_15 = (struct tegra_gpio_irq_cookie *)VAR_6;
 VAR_12 = VAR_15->sc;
 VAR_13 = VAR_5->td_intr_frame;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_11 = VAR_15->bank_num * VAR_4 *
      VAR_3 + VAR_8 * VAR_3;

  VAR_10 = FUNC_1(VAR_12->mem_res, VAR_2 +
      FUNC_0(VAR_11));
  VAR_10 &= FUNC_1(VAR_12->mem_res, VAR_1 +
      FUNC_0(VAR_11));

  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
   if ((VAR_10 & (1 << VAR_9)) == 0)
    continue;
   VAR_7 = VAR_11 + VAR_9;
   VAR_14 = &VAR_12->isrcs[VAR_7];
   if (!FUNC_5(VAR_14))
    FUNC_4(VAR_12, VAR_14);
   if (FUNC_3(&VAR_14->isrc, VAR_13) != 0) {
    FUNC_6(VAR_12, VAR_14, 0);
    if (FUNC_5(VAR_14))
     FUNC_4(VAR_12, VAR_14);
    FUNC_2(VAR_12->dev,
        "Stray irq %u disabled\n", VAR_7);
   }

  }
 }

 return (VAR_0);
}
