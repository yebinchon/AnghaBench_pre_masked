
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int * kstat_irqs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct irq_desc *VAR_0, struct irq_desc *VAR_1)
{
 if (VAR_0->kstat_irqs == VAR_1->kstat_irqs)
  return;

 FUNC_0(VAR_0->kstat_irqs);
 VAR_0->kstat_irqs = ((void*)0);
}
