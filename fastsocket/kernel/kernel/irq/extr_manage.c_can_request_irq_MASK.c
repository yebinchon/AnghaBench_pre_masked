
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {unsigned long flags; } ;
struct irq_desc {int status; struct irqaction* action; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct irq_desc* FUNC_0 (unsigned int) ;

int FUNC_1(unsigned int VAR_2, unsigned long VAR_3)
{
 struct irq_desc *VAR_4 = FUNC_0(VAR_2);
 struct irqaction *VAR_5;

 if (!VAR_4)
  return 0;

 if (VAR_4->status & VAR_1)
  return 0;

 VAR_5 = VAR_4->action;
 if (VAR_5)
  if (VAR_3 & VAR_5->flags & VAR_0)
   VAR_5 = ((void*)0);

 return !VAR_5;
}
