
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {scalar_t__ name; struct irqaction* next; } ;
struct irq_desc {int lock; struct irqaction* action; } ;


 struct irq_desc* FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_0, struct irqaction *VAR_1)
{
 struct irq_desc *VAR_2 = FUNC_0(VAR_0);
 struct irqaction *VAR_3;
 unsigned long VAR_4;
 int VAR_5 = 1;

 FUNC_1(&VAR_2->lock, VAR_4);
 for (VAR_3 = VAR_2->action ; VAR_3; VAR_3 = VAR_3->next) {
  if ((VAR_3 != VAR_1) && VAR_3->name &&
    !FUNC_3(VAR_1->name, VAR_3->name)) {
   VAR_5 = 0;
   break;
  }
 }
 FUNC_2(&VAR_2->lock, VAR_4);
 return VAR_5;
}
