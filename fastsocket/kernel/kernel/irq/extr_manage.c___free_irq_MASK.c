
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {void* dev_id; int flags; scalar_t__ thread; int thread_flags; int (* handler ) (unsigned int,void*) ;struct irqaction* next; } ;
struct irq_desc {int lock; int * affinity_hint; TYPE_1__* chip; int status; struct irqaction* action; } ;
struct TYPE_2__ {int (* disable ) (unsigned int) ;int (* shutdown ) (unsigned int) ;int (* release ) (unsigned int,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,unsigned int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 struct irq_desc* FUNC_3 (unsigned int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (unsigned int,void*) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (unsigned int,void*) ;
 int FUNC_14 (unsigned int) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (unsigned int,struct irqaction*) ;

__attribute__((used)) static struct irqaction *FUNC_17(unsigned int VAR_3, void *VAR_4)
{
 struct irq_desc *VAR_5 = FUNC_3(VAR_3);
 struct irqaction *VAR_6, **VAR_7;
 unsigned long VAR_8;

 FUNC_0(FUNC_2(), "Trying to free IRQ %d from IRQ context!\n", VAR_3);

 if (!VAR_5)
  return ((void*)0);

 FUNC_8(&VAR_5->lock, VAR_8);





 VAR_7 = &VAR_5->action;
 for (;;) {
  VAR_6 = *VAR_7;

  if (!VAR_6) {
   FUNC_0(1, "Trying to free already-free IRQ %d\n", VAR_3);
   FUNC_9(&VAR_5->lock, VAR_8);

   return ((void*)0);
  }

  if (VAR_6->dev_id == VAR_4)
   break;
  VAR_7 = &VAR_6->next;
 }


 *VAR_7 = VAR_6->next;
 if (!VAR_5->action) {
  VAR_5->status |= VAR_2;
  if (VAR_5->chip->shutdown)
   VAR_5->chip->shutdown(VAR_3);
  else
   VAR_5->chip->disable(VAR_3);
 }







 FUNC_9(&VAR_5->lock, VAR_8);

 FUNC_16(VAR_3, VAR_6);


 FUNC_14(VAR_3);
 if (VAR_6->thread) {
  if (!FUNC_15(VAR_1, &VAR_6->thread_flags))
   FUNC_4(VAR_6->thread);
  FUNC_7(VAR_6->thread);
 }

 return VAR_6;
}
