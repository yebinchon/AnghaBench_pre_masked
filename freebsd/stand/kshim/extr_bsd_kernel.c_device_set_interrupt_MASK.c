
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef TYPE_1__* device_t ;
struct TYPE_3__ {void* dev_irq_arg; int * dev_irq_fn; int * dev_irq_filter; } ;



void
FUNC_0(device_t VAR_0, driver_filter_t *VAR_1,
    driver_intr_t *VAR_2, void *VAR_3)
{
 VAR_0->dev_irq_filter = VAR_1;
 VAR_0->dev_irq_fn = VAR_2;
 VAR_0->dev_irq_arg = VAR_3;
}
