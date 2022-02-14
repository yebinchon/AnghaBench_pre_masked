
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bcm_gpio_softc {int dummy; } ;
struct bcm_gpio_irqsrc {scalar_t__ bgi_mode; int bgi_mask; int bgi_irq; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct bcm_gpio_softc*) ;
 int FUNC_6 (struct bcm_gpio_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (struct bcm_gpio_softc*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct bcm_gpio_softc *VAR_5, struct bcm_gpio_irqsrc *VAR_6,
    uint32_t VAR_7)
{
 uint32_t VAR_8;

 VAR_8 = FUNC_0(VAR_6->bgi_irq);
 FUNC_5(VAR_5);
 FUNC_7(VAR_5, FUNC_4(VAR_8), VAR_6->bgi_mask,
     VAR_7 == VAR_2 || VAR_7 == VAR_0);
 FUNC_7(VAR_5, FUNC_1(VAR_8), VAR_6->bgi_mask,
     VAR_7 == VAR_1 || VAR_7 == VAR_0);
 FUNC_7(VAR_5, FUNC_2(VAR_8), VAR_6->bgi_mask,
     VAR_7 == VAR_3);
 FUNC_7(VAR_5, FUNC_3(VAR_8), VAR_6->bgi_mask,
     VAR_7 == VAR_4);
 VAR_6->bgi_mode = VAR_7;
 FUNC_6(VAR_5);
}
