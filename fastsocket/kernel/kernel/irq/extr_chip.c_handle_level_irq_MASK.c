
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {int dummy; } ;
struct irq_desc {int status; int lock; TYPE_1__* chip; struct irqaction* action; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* unmask ) (unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int,struct irqaction*) ;
 int FUNC_1 (unsigned int,struct irq_desc*) ;
 int FUNC_2 (struct irq_desc*,unsigned int) ;
 int VAR_6 ;
 int FUNC_3 (unsigned int,struct irq_desc*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (int) ;

void
FUNC_8(unsigned int VAR_7, struct irq_desc *VAR_8)
{
 struct irqaction *VAR_9;
 irqreturn_t VAR_10;

 FUNC_4(&VAR_8->lock);
 FUNC_2(VAR_8, VAR_7);

 if (FUNC_7(VAR_8->status & VAR_1))
  goto out_unlock;
 VAR_8->status &= ~(VAR_4 | VAR_5);
 FUNC_1(VAR_7, VAR_8);





 VAR_9 = VAR_8->action;
 if (FUNC_7(!VAR_9 || (VAR_8->status & VAR_0)))
  goto out_unlock;

 VAR_8->status |= VAR_1;
 FUNC_5(&VAR_8->lock);

 VAR_10 = FUNC_0(VAR_7, VAR_9);
 if (!VAR_6)
  FUNC_3(VAR_7, VAR_8, VAR_10);

 FUNC_4(&VAR_8->lock);
 VAR_8->status &= ~VAR_1;

 if (FUNC_7(VAR_8->status & VAR_3))
  VAR_8->status |= VAR_2;
 else if (!(VAR_8->status & VAR_0) && VAR_8->chip->unmask)
  VAR_8->chip->unmask(VAR_7);
out_unlock:
 FUNC_5(&VAR_8->lock);
}
