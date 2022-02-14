
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_work {struct irq_work* next; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct irq_work* FUNC_0 (struct irq_work**,struct irq_work*,struct irq_work*) ;
 struct irq_work* FUNC_1 (struct irq_work*,int ) ;

__attribute__((used)) static bool FUNC_2(struct irq_work *VAR_2)
{
 struct irq_work *VAR_3, *VAR_4;

 do {
  VAR_3 = VAR_2->next;
  if ((unsigned long)VAR_3 & VAR_1)
   return 0;
  VAR_4 = FUNC_1(VAR_3, VAR_0);
 } while (FUNC_0(&VAR_2->next, VAR_3, VAR_4) != VAR_3);

 return 1;
}
