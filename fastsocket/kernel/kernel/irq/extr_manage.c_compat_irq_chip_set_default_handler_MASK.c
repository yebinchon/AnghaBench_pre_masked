
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int * handle_irq; } ;


 int VAR_0 ;

void FUNC_0(struct irq_desc *VAR_1)
{





 if (VAR_1->handle_irq == &VAR_0)
  VAR_1->handle_irq = ((void*)0);
}
