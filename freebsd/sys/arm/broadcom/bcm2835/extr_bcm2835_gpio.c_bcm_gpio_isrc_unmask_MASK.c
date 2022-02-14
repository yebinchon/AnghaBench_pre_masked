
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_gpio_softc {int dummy; } ;
struct bcm_gpio_irqsrc {int bgi_mode; int bgi_mask; int bgi_irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bcm_gpio_softc*) ;
 int FUNC_6 (struct bcm_gpio_softc*,int ,int ) ;
 int FUNC_7 (struct bcm_gpio_softc*) ;






__attribute__((used)) static inline void
FUNC_8(struct bcm_gpio_softc *VAR_0, struct bcm_gpio_irqsrc *VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = FUNC_0(VAR_1->bgi_irq);
 FUNC_5(VAR_0);
 switch (VAR_1->bgi_mode) {
 case 128:
  FUNC_6(VAR_0, FUNC_3(VAR_2), VAR_1->bgi_mask);
  break;
 case 129:
  FUNC_6(VAR_0, FUNC_2(VAR_2), VAR_1->bgi_mask);
  break;
 case 130:
  FUNC_6(VAR_0, FUNC_4(VAR_2), VAR_1->bgi_mask);
  break;
 case 131:
  FUNC_6(VAR_0, FUNC_1(VAR_2), VAR_1->bgi_mask);
  break;
 case 132:
  FUNC_6(VAR_0, FUNC_4(VAR_2), VAR_1->bgi_mask);
  FUNC_6(VAR_0, FUNC_1(VAR_2), VAR_1->bgi_mask);
  break;
 }
 FUNC_7(VAR_0);
}
