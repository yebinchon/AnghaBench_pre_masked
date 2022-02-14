
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {int dummy; } ;
struct irq_desc {unsigned int status; int lock; TYPE_1__* chip; struct irqaction* action; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* end ) (unsigned int) ;int (* ack ) (unsigned int) ;} ;


 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (unsigned int,struct irqaction*) ;
 struct irq_desc* FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,struct irq_desc*) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (unsigned int,struct irq_desc*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 scalar_t__ FUNC_12 (int) ;

unsigned int FUNC_13(unsigned int VAR_6)
{
 struct irq_desc *VAR_7 = FUNC_2(VAR_6);
 struct irqaction *VAR_8;
 unsigned int VAR_9;

 FUNC_3(VAR_6, VAR_7);

 if (FUNC_0(VAR_7->status)) {
  irqreturn_t VAR_10;




  if (VAR_7->chip->ack)
   VAR_7->chip->ack(VAR_6);
  if (FUNC_4(!(VAR_7->status & VAR_0))) {
   VAR_10 = FUNC_1(VAR_6, VAR_7->action);
   if (!VAR_5)
    FUNC_5(VAR_6, VAR_7, VAR_10);
  }
  VAR_7->chip->end(VAR_6);
  return 1;
 }

 FUNC_6(&VAR_7->lock);
 if (VAR_7->chip->ack)
  VAR_7->chip->ack(VAR_6);




 VAR_9 = VAR_7->status & ~(VAR_3 | VAR_4);
 VAR_9 |= VAR_2;





 VAR_8 = ((void*)0);
 if (FUNC_4(!(VAR_9 & (VAR_0 | VAR_1)))) {
  VAR_8 = VAR_7->action;
  VAR_9 &= ~VAR_2;
  VAR_9 |= VAR_1;
 }
 VAR_7->status = VAR_9;







 if (FUNC_12(!VAR_8))
  goto out;
 for (;;) {
  irqreturn_t VAR_11;

  FUNC_7(&VAR_7->lock);

  VAR_11 = FUNC_1(VAR_6, VAR_8);
  if (!VAR_5)
   FUNC_5(VAR_6, VAR_7, VAR_11);

  FUNC_6(&VAR_7->lock);
  if (FUNC_4(!(VAR_7->status & VAR_2)))
   break;
  VAR_7->status &= ~VAR_2;
 }
 VAR_7->status &= ~VAR_1;

out:




 VAR_7->chip->end(VAR_6);
 FUNC_7(&VAR_7->lock);

 return 1;
}
