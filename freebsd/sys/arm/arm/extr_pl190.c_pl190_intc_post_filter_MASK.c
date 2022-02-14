
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl190_intc_irqsrc {int irq; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct pl190_intc_irqsrc *VAR_2;

 VAR_2 = (struct pl190_intc_irqsrc *)VAR_1;
 FUNC_0(VAR_2->irq);
}
