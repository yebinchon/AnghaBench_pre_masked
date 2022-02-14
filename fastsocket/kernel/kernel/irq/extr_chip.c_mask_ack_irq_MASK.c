
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* ack ) (int) ;int (* mask ) (int) ;int (* mask_ack ) (int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct irq_desc *VAR_0, int VAR_1)
{
 if (VAR_0->chip->mask_ack)
  VAR_0->chip->mask_ack(VAR_1);
 else {
  VAR_0->chip->mask(VAR_1);
  if (VAR_0->chip->ack)
   VAR_0->chip->ack(VAR_1);
 }
}
