
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {int flags; scalar_t__ (* handler ) (int,int ) ;struct irqaction* next; int dev_id; } ;
struct irq_desc {int status; int lock; TYPE_1__* chip; struct irqaction* action; } ;
struct TYPE_2__ {int (* end ) (int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct irqaction*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(int VAR_4, struct irq_desc *VAR_5)
{
 struct irqaction *VAR_6;
 int VAR_7 = 0, VAR_8 = 0;

 FUNC_2(&VAR_5->lock);

 if (VAR_5->status & VAR_2) {




  if (VAR_5->action && (VAR_5->action->flags & VAR_0))
   VAR_5->status |= VAR_3;
  FUNC_3(&VAR_5->lock);
  return VAR_7;
 }

 VAR_5->status |= VAR_2;
 VAR_6 = VAR_5->action;
 FUNC_3(&VAR_5->lock);

 while (VAR_6) {

  if (VAR_6->flags & VAR_0) {
   if (VAR_6->handler(VAR_4, VAR_6->dev_id) ==
    VAR_1)
    VAR_7 = 1;
  }
  VAR_6 = VAR_6->next;
 }
 FUNC_1();

 FUNC_2(&VAR_5->lock);
 VAR_6 = VAR_5->action;





 while ((VAR_5->status & VAR_3) && VAR_6) {



  VAR_8 = 1;
  FUNC_3(&VAR_5->lock);
  FUNC_0(VAR_4, VAR_6);
  FUNC_2(&VAR_5->lock);
  VAR_5->status &= ~VAR_3;
 }
 VAR_5->status &= ~VAR_2;




 if (VAR_8 && VAR_5->chip && VAR_5->chip->end)
  VAR_5->chip->end(VAR_4);
 FUNC_3(&VAR_5->lock);

 return VAR_7;
}
