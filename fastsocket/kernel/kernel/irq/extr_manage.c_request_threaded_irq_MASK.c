
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {unsigned long flags; char const* name; void* dev_id; int (* thread_fn ) (unsigned int,void*) ;int (* handler ) (unsigned int,void*) ;} ;
struct irq_desc {int status; } ;
typedef int (* irq_handler_t ) (unsigned int,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int,struct irq_desc*,struct irqaction*) ;
 int FUNC_1 (unsigned int,struct irq_desc*) ;
 int FUNC_2 (unsigned int,struct irq_desc*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int,void*) ;
 struct irq_desc* FUNC_6 (unsigned int) ;
 int FUNC_7 (struct irqaction*) ;
 struct irqaction* FUNC_8 (int,int ) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (char*,unsigned int,char const*) ;

int FUNC_12(unsigned int VAR_6, irq_handler_t VAR_7,
    irq_handler_t VAR_8, unsigned long VAR_9,
    const char *VAR_10, void *VAR_11)
{
 struct irqaction *VAR_12;
 struct irq_desc *VAR_13;
 int VAR_14;







 if ((VAR_9 & (VAR_4|VAR_3)) ==
     (VAR_4|VAR_3)) {
  FUNC_11(
    "IRQ %d/%s: IRQF_DISABLED is not guaranteed on shared IRQs\n",
   VAR_6, VAR_10);
 }
 if ((VAR_9 & VAR_4) && !VAR_11)
  return -VAR_0;

 VAR_13 = FUNC_6(VAR_6);
 if (!VAR_13)
  return -VAR_0;

 if (VAR_13->status & VAR_5)
  return -VAR_0;

 if (!VAR_7) {
  if (!VAR_8)
   return -VAR_0;
  VAR_7 = FUNC_5;
 }

 VAR_12 = FUNC_8(sizeof(struct irqaction), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->handler = VAR_7;
 VAR_12->thread_fn = VAR_8;
 VAR_12->flags = VAR_9;
 VAR_12->name = VAR_10;
 VAR_12->dev_id = VAR_11;

 FUNC_1(VAR_6, VAR_13);
 VAR_14 = FUNC_0(VAR_6, VAR_13, VAR_12);
 FUNC_2(VAR_6, VAR_13);

 if (VAR_14)
  FUNC_7(VAR_12);
 return VAR_14;
}
