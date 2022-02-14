
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int flags; int (* handler ) (unsigned int,int ) ;struct irqaction* next; int thread; int thread_flags; int thread_fn; int dev_id; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (unsigned int,struct irqaction*) ;
 int FUNC_8 (unsigned int,struct irqaction*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (unsigned int,struct irqaction*) ;

irqreturn_t FUNC_12(unsigned int VAR_5, struct irqaction *VAR_6)
{
 irqreturn_t VAR_7, VAR_8 = VAR_4;
 unsigned int VAR_9 = 0;

 if (!(VAR_6->flags & VAR_0))
  FUNC_3();

 do {
  FUNC_7(VAR_5, VAR_6);
  VAR_7 = VAR_6->handler(VAR_5, VAR_6->dev_id);
  FUNC_8(VAR_5, VAR_6, VAR_7);

  switch (VAR_7) {
  case 128:




   VAR_7 = 129;





   if (FUNC_9(!VAR_6->thread_fn)) {
    FUNC_11(VAR_5, VAR_6);
    break;
   }
   if (FUNC_1(!FUNC_6(VAR_2,
          &VAR_6->thread_flags))) {
    FUNC_4(VAR_3, &VAR_6->thread_flags);
    FUNC_10(VAR_6->thread);
   }


  case 129:
   VAR_9 |= VAR_6->flags;
   break;

  default:
   break;
  }

  VAR_8 |= VAR_7;
  VAR_6 = VAR_6->next;
 } while (VAR_6);

 if (VAR_9 & VAR_1)
  FUNC_0(VAR_5);
 FUNC_2();

 return VAR_8;
}
