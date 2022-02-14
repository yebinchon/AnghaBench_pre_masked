
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int status; int pending_mask; int affinity; TYPE_1__* chip; int lock; } ;
struct TYPE_2__ {int (* set_affinity ) (int,int ) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct irq_desc*) ;
 struct irq_desc* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (int,int ) ;
 scalar_t__ FUNC_11 (int ) ;

void FUNC_12(int VAR_3)
{
 struct irq_desc *VAR_4 = FUNC_8(VAR_3);

 if (FUNC_9(!(VAR_4->status & VAR_0)))
  return;




 if (FUNC_0(VAR_4->status)) {
  FUNC_1(1);
  return;
 }

 VAR_4->status &= ~VAR_0;

 if (FUNC_11(FUNC_6(VAR_4->pending_mask)))
  return;

 if (!VAR_4->chip->set_affinity)
  return;

 FUNC_2(&VAR_4->lock);
 if (FUNC_9(FUNC_3(VAR_4->pending_mask, VAR_1)
     < VAR_2))
  if (!VAR_4->chip->set_affinity(VAR_3, VAR_4->pending_mask)) {
   FUNC_5(VAR_4->affinity, VAR_4->pending_mask);
   FUNC_7(VAR_4);
  }

 FUNC_4(VAR_4->pending_mask);
}
