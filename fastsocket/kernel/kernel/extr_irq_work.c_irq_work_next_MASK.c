
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_work {scalar_t__ next; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline struct irq_work *FUNC_0(struct irq_work *VAR_1)
{
 unsigned long VAR_2 = (unsigned long)VAR_1->next;
 VAR_2 &= ~VAR_0;
 return (struct irq_work *)VAR_2;
}
