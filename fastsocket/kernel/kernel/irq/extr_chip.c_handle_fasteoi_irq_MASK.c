
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {int dummy; } ;
struct irq_desc {int status; int lock; TYPE_1__* chip; struct irqaction* action; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* eoi ) (unsigned int) ;int (* mask ) (unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int,struct irqaction*) ;
 int FUNC_1 (unsigned int,struct irq_desc*) ;
 int VAR_5 ;
 int FUNC_2 (unsigned int,struct irq_desc*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (int) ;

void
FUNC_8(unsigned int VAR_6, struct irq_desc *VAR_7)
{
 struct irqaction *VAR_8;
 irqreturn_t VAR_9;

 FUNC_3(&VAR_7->lock);

 if (FUNC_7(VAR_7->status & VAR_1))
  goto out;

 VAR_7->status &= ~(VAR_3 | VAR_4);
 FUNC_1(VAR_6, VAR_7);





 VAR_8 = VAR_7->action;
 if (FUNC_7(!VAR_8 || (VAR_7->status & VAR_0))) {
  VAR_7->status |= VAR_2;
  if (VAR_7->chip->mask)
   VAR_7->chip->mask(VAR_6);
  goto out;
 }

 VAR_7->status |= VAR_1;
 VAR_7->status &= ~VAR_2;
 FUNC_4(&VAR_7->lock);

 VAR_9 = FUNC_0(VAR_6, VAR_8);
 if (!VAR_5)
  FUNC_2(VAR_6, VAR_7, VAR_9);

 FUNC_3(&VAR_7->lock);
 VAR_7->status &= ~VAR_1;
out:
 VAR_7->chip->eoi(VAR_6);

 FUNC_4(&VAR_7->lock);
}
