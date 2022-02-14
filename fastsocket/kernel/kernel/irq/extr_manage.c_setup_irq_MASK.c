
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int dummy; } ;
struct irq_desc {int dummy; } ;


 int FUNC_0 (unsigned int,struct irq_desc*,struct irqaction*) ;
 struct irq_desc* FUNC_1 (unsigned int) ;

int FUNC_2(unsigned int VAR_0, struct irqaction *VAR_1)
{
 struct irq_desc *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0, VAR_2, VAR_1);
}
