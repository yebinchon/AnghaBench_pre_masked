
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
typedef TYPE_1__* device_t ;
struct TYPE_3__ {int * dev_irq_arg; int * dev_irq_fn; int * dev_irq_filter; } ;



int
FUNC_0(device_t VAR_0, struct resource *VAR_1, void *VAR_2)
{

 VAR_0->dev_irq_filter = ((void*)0);
 VAR_0->dev_irq_fn = ((void*)0);
 VAR_0->dev_irq_arg = ((void*)0);

 return (0);
}
