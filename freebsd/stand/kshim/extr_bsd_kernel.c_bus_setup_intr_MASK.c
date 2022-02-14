
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef TYPE_1__* device_t ;
struct TYPE_3__ {void* dev_irq_arg; int dev_irq_fn; int dev_irq_filter; } ;



int
FUNC_0(device_t VAR_0, struct resource *VAR_1, int VAR_2,
    driver_filter_t VAR_3, driver_intr_t VAR_4, void *VAR_5, void **VAR_6)
{

 VAR_0->dev_irq_filter = VAR_3;
 VAR_0->dev_irq_fn = VAR_4;
 VAR_0->dev_irq_arg = VAR_5;

 return (0);
}
