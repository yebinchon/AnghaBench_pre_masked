
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct bcm_gpio_softc {int sc_dev; struct bcm_gpio_irqsrc* sc_isrcs; } ;
struct bcm_gpio_irqsrc {int bgi_mask; int bgi_isrc; } ;
struct TYPE_2__ {int td_intr_frame; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct bcm_gpio_softc*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct bcm_gpio_softc*,struct bcm_gpio_irqsrc*) ;
 scalar_t__ FUNC_3 (struct bcm_gpio_irqsrc*) ;
 int FUNC_4 (struct bcm_gpio_softc*,struct bcm_gpio_irqsrc*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static int
FUNC_8(struct bcm_gpio_softc *VAR_3, uint32_t VAR_4)
{
 u_int VAR_5;
 struct bcm_gpio_irqsrc *VAR_6;
 uint32_t VAR_7;


 VAR_7 = FUNC_1(VAR_3, FUNC_0(VAR_4));
 while (VAR_7 != 0) {
  VAR_5 = VAR_0 * VAR_4 + FUNC_6(VAR_7) - 1;
  VAR_6 = VAR_3->sc_isrcs + VAR_5;
  if (!FUNC_3(VAR_6))
   FUNC_2(VAR_3, VAR_6);
  if (FUNC_7(&VAR_6->bgi_isrc,
      VAR_2->td_intr_frame) != 0) {
   FUNC_4(VAR_3, VAR_6);
   if (FUNC_3(VAR_6))
    FUNC_2(VAR_3, VAR_6);
   FUNC_5(VAR_3->sc_dev, "Stray irq %u disabled\n",
       VAR_5);
  }
  VAR_7 &= ~VAR_6->bgi_mask;
 }
 return (VAR_1);
}
