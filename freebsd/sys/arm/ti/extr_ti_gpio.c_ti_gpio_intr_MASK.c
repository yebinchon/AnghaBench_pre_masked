
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t u_int ;
struct trapframe {int dummy; } ;
struct ti_gpio_softc {size_t sc_maxpin; int sc_dev; struct ti_gpio_irqsrc* sc_isrcs; } ;
struct ti_gpio_irqsrc {int tgi_mask; int tgi_isrc; } ;
struct TYPE_2__ {struct trapframe* td_intr_frame; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,char*,size_t) ;
 scalar_t__ FUNC_1 (int *,struct trapframe*) ;
 int FUNC_2 (struct ti_gpio_softc*) ;
 int FUNC_3 (struct ti_gpio_softc*,struct ti_gpio_irqsrc*) ;
 scalar_t__ FUNC_4 (struct ti_gpio_irqsrc*) ;
 int FUNC_5 (struct ti_gpio_softc*,struct ti_gpio_irqsrc*) ;

__attribute__((used)) static int
FUNC_6(void *VAR_2)
{
 u_int VAR_3;
 uint32_t VAR_4;
 struct ti_gpio_softc *VAR_5;
 struct trapframe *VAR_6;
 struct ti_gpio_irqsrc *VAR_7;

 VAR_5 = (struct ti_gpio_softc *)VAR_2;
 VAR_6 = VAR_1->td_intr_frame;

 VAR_4 = FUNC_2(VAR_5);
 for (VAR_3 = 0; VAR_3 < VAR_5->sc_maxpin; VAR_3++) {
  VAR_7 = &VAR_5->sc_isrcs[VAR_3];
  if ((VAR_4 & VAR_7->tgi_mask) == 0)
   continue;
  if (!FUNC_4(VAR_7))
   FUNC_3(VAR_5, VAR_7);
  if (FUNC_1(&VAR_7->tgi_isrc, VAR_6) != 0) {
   FUNC_5(VAR_5, VAR_7);
   if (FUNC_4(VAR_7))
    FUNC_3(VAR_5, VAR_7);
   FUNC_0(VAR_5->sc_dev, "Stray irq %u disabled\n",
       VAR_3);
  }
 }
 return (VAR_0);
}
