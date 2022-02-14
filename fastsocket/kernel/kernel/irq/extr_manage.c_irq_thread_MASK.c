
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sched_param {int sched_priority; } ;
struct irqaction {int irq; int dev_id; int (* thread_fn ) (int ,int ) ;} ;
struct irq_desc {int status; int wait_for_threads; int threads_active; int lock; } ;
struct TYPE_3__ {struct irqaction* irqaction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int ,struct irq_desc*) ;
 int FUNC_3 (struct irq_desc*,struct irqaction*) ;
 struct irq_desc* FUNC_4 (int ) ;
 int FUNC_5 (struct irqaction*) ;
 int FUNC_6 (TYPE_1__*,int ,struct sched_param*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(void *VAR_6)
{
 struct sched_param VAR_7 = { .sched_priority = VAR_3/2, };
 struct irqaction *VAR_8 = VAR_6;
 struct irq_desc *VAR_9 = FUNC_4(VAR_8->irq);
 int VAR_10, VAR_11 = VAR_9->status & VAR_1;

 FUNC_6(VAR_5, VAR_4, &VAR_7);
 VAR_5->irqaction = VAR_8;

 while (!FUNC_5(VAR_8)) {

  FUNC_3(VAR_9, VAR_8);

  FUNC_1(&VAR_9->threads_active);

  FUNC_7(&VAR_9->lock);
  if (FUNC_10(VAR_9->status & VAR_0)) {







   VAR_9->status |= VAR_2;
   FUNC_8(&VAR_9->lock);
  } else {
   FUNC_8(&VAR_9->lock);

   VAR_8->thread_fn(VAR_8->irq, VAR_8->dev_id);

   if (VAR_11)
    FUNC_2(VAR_8->irq, VAR_9);
  }

  VAR_10 = FUNC_0(&VAR_9->threads_active);

  if (VAR_10 && FUNC_11(&VAR_9->wait_for_threads))
   FUNC_12(&VAR_9->wait_for_threads);
 }





 VAR_5->irqaction = ((void*)0);
 return 0;
}
