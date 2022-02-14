
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct jz4780_gpio_softc {TYPE_1__* pins; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {struct intr_irqsrc pin_irqsrc; } ;


 struct jz4780_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct intr_map_data*,size_t*,int *,int *) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, struct intr_map_data *VAR_1,
    struct intr_irqsrc **VAR_2)
{
 struct jz4780_gpio_softc *VAR_3;
 int VAR_4;
 u_int VAR_5;

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_5, ((void*)0), ((void*)0));
 if (VAR_4 == 0) {
  VAR_3 = FUNC_0(VAR_0);
  *VAR_2 = &VAR_3->pins[VAR_5].pin_irqsrc;
 }
 return (VAR_4);
}
