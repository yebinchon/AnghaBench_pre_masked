
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_gpio_softc {int gpio_mtx; scalar_t__* gpio_irq_res; int * gpio_irq_rid; scalar_t__* gpio_ih; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 struct octeon_gpio_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct octeon_gpio_softc *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_0(FUNC_6(&VAR_3->gpio_mtx), ("gpio mutex not initialized"));

 for ( VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->gpio_ih[VAR_4])
   FUNC_2(VAR_2, VAR_3->gpio_irq_res[VAR_4],
       VAR_3->gpio_ih[VAR_4]);
  if (VAR_3->gpio_irq_res[VAR_4])
   FUNC_1(VAR_2, VAR_1,
       VAR_3->gpio_irq_rid[VAR_4], VAR_3->gpio_irq_res[VAR_4]);
 }
 FUNC_4(VAR_2);
 FUNC_5(&VAR_3->gpio_mtx);

 return(0);
}
