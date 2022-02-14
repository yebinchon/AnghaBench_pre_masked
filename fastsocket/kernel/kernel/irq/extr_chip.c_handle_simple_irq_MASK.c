
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int dummy; } ;
struct irq_desc {int status; int lock; struct irqaction* action; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,struct irqaction*) ;
 int FUNC_1 (unsigned int,struct irq_desc*) ;
 int VAR_4 ;
 int FUNC_2 (unsigned int,struct irq_desc*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

void
FUNC_6(unsigned int VAR_5, struct irq_desc *VAR_6)
{
 struct irqaction *VAR_7;
 irqreturn_t VAR_8;

 FUNC_3(&VAR_6->lock);

 if (FUNC_5(VAR_6->status & VAR_1))
  goto out_unlock;
 VAR_6->status &= ~(VAR_2 | VAR_3);
 FUNC_1(VAR_5, VAR_6);

 VAR_7 = VAR_6->action;
 if (FUNC_5(!VAR_7 || (VAR_6->status & VAR_0)))
  goto out_unlock;

 VAR_6->status |= VAR_1;
 FUNC_4(&VAR_6->lock);

 VAR_8 = FUNC_0(VAR_5, VAR_7);
 if (!VAR_4)
  FUNC_2(VAR_5, VAR_6, VAR_8);

 FUNC_3(&VAR_6->lock);
 VAR_6->status &= ~VAR_1;
out_unlock:
 FUNC_4(&VAR_6->lock);
}
