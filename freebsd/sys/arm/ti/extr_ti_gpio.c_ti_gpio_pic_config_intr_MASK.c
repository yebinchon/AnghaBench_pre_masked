
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ti_gpio_softc {int dummy; } ;
struct ti_gpio_irqsrc {scalar_t__ tgi_mode; int tgi_mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ti_gpio_softc*) ;
 int VAR_8 ;
 int FUNC_1 (struct ti_gpio_softc*) ;
 int FUNC_2 (struct ti_gpio_softc*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ti_gpio_softc *VAR_9, struct ti_gpio_irqsrc *VAR_10,
    uint32_t VAR_11)
{

 FUNC_0(VAR_9);
 FUNC_2(VAR_9, VAR_8, VAR_10->tgi_mask,
     VAR_11 == VAR_2 || VAR_11 == VAR_0);
 FUNC_2(VAR_9, VAR_5, VAR_10->tgi_mask,
     VAR_11 == VAR_1 || VAR_11 == VAR_0);
 FUNC_2(VAR_9, VAR_7, VAR_10->tgi_mask,
     VAR_11 == VAR_3);
 FUNC_2(VAR_9, VAR_6, VAR_10->tgi_mask,
     VAR_11 == VAR_4);
 VAR_10->tgi_mode = VAR_11;
 FUNC_1(VAR_9);
}
