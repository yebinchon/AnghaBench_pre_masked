
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiokeys_softc {int sc_dev; } ;
struct gpiokey {scalar_t__ pin; int debounce_callout; int repeat_callout; scalar_t__ irq_res; int irq_rid; scalar_t__ intr_hl; } ;


 int FUNC_0 (struct gpiokey*) ;
 int FUNC_1 (struct gpiokey*) ;
 int FUNC_2 (struct gpiokey*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8(struct gpiokeys_softc *VAR_1, struct gpiokey *VAR_2)
{

 FUNC_0(VAR_2);
 if (VAR_2->intr_hl)
  FUNC_4(VAR_1->sc_dev, VAR_2->irq_res, VAR_2->intr_hl);
 if (VAR_2->irq_res)
  FUNC_3(VAR_1->sc_dev, VAR_0,
      VAR_2->irq_rid, VAR_2->irq_res);
 if (FUNC_6(&VAR_2->repeat_callout))
  FUNC_5(&VAR_2->repeat_callout);
 if (FUNC_6(&VAR_2->debounce_callout))
  FUNC_5(&VAR_2->debounce_callout);
 if (VAR_2->pin)
  FUNC_7(VAR_2->pin);
 FUNC_2(VAR_2);

 FUNC_1(VAR_2);
}
