
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {TYPE_1__* chip; int action; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* eoi ) (unsigned int) ;int (* ack ) (unsigned int) ;} ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,struct irq_desc*) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int,struct irq_desc*,int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;

void
FUNC_5(unsigned int VAR_1, struct irq_desc *VAR_2)
{
 irqreturn_t VAR_3;

 FUNC_1(VAR_1, VAR_2);

 if (VAR_2->chip->ack)
  VAR_2->chip->ack(VAR_1);

 VAR_3 = FUNC_0(VAR_1, VAR_2->action);
 if (!VAR_0)
  FUNC_2(VAR_1, VAR_2, VAR_3);

 if (VAR_2->chip->eoi)
  VAR_2->chip->eoi(VAR_1);
}
