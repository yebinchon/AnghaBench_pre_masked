
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5315_gpio_softc {int gpio_mtx; scalar_t__ gpio_pins; scalar_t__ gpio_mem_res; int gpio_mem_rid; scalar_t__ gpio_irq_res; int gpio_irq_rid; scalar_t__ gpio_ih; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 struct ar5315_gpio_softc* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 struct ar5315_gpio_softc *VAR_4 = FUNC_3(VAR_3);

 FUNC_0(FUNC_7(&VAR_4->gpio_mtx), ("gpio mutex not initialized"));

 FUNC_5(VAR_3);
 if (VAR_4->gpio_ih)
  FUNC_2(VAR_3, VAR_4->gpio_irq_res, VAR_4->gpio_ih);
 if (VAR_4->gpio_irq_res)
  FUNC_1(VAR_3, VAR_1, VAR_4->gpio_irq_rid,
      VAR_4->gpio_irq_res);
 if (VAR_4->gpio_mem_res)
  FUNC_1(VAR_3, VAR_2, VAR_4->gpio_mem_rid,
      VAR_4->gpio_mem_res);
 if (VAR_4->gpio_pins)
  FUNC_4(VAR_4->gpio_pins, VAR_0);
 FUNC_6(&VAR_4->gpio_mtx);

 return(0);
}
