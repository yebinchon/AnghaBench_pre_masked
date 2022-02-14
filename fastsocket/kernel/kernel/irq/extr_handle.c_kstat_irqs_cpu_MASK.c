
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {unsigned int* kstat_irqs; } ;


 struct irq_desc* FUNC_0 (unsigned int) ;

unsigned int FUNC_1(unsigned int VAR_0, int VAR_1)
{
 struct irq_desc *VAR_2 = FUNC_0(VAR_0);
 return VAR_2 ? VAR_2->kstat_irqs[VAR_1] : 0;
}
