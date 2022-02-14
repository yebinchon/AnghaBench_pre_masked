
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int dev_id; int irq; int (* thread_fn ) (int ,int ) ;} ;
struct irq_desc {int status; int lock; struct irqaction* action; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct irq_desc* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,struct irq_desc*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (unsigned int,struct irq_desc*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(unsigned int VAR_3)
{
 struct irq_desc *VAR_4 = FUNC_0(VAR_3);
 struct irqaction *VAR_5;
 irqreturn_t VAR_6;

 FUNC_2();

 FUNC_4(&VAR_4->lock);

 FUNC_1(VAR_3, VAR_4);

 VAR_5 = VAR_4->action;
 if (FUNC_7(!VAR_5 || (VAR_4->status & VAR_0)))
  goto out_unlock;

 VAR_4->status |= VAR_1;
 FUNC_5(&VAR_4->lock);

 VAR_6 = VAR_5->thread_fn(VAR_5->irq, VAR_5->dev_id);
 if (!VAR_2)
  FUNC_3(VAR_3, VAR_4, VAR_6);

 FUNC_4(&VAR_4->lock);
 VAR_4->status &= ~VAR_1;

out_unlock:
 FUNC_5(&VAR_4->lock);
}
