
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ct_timer {int irq_handling; int lock; scalar_t__ reprogram; } ;


 int FUNC_0 (struct ct_timer*) ;
 int FUNC_1 (struct ct_timer*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ct_timer *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 FUNC_3(&VAR_0->lock, VAR_2);
 VAR_0->irq_handling = 1;
 do {
  VAR_1 = FUNC_1(VAR_0, 1);
  FUNC_4(&VAR_0->lock);
  if (VAR_1)
   FUNC_0(VAR_0);
  FUNC_2(&VAR_0->lock);
 } while (VAR_0->reprogram);
 VAR_0->irq_handling = 0;
 FUNC_5(&VAR_0->lock, VAR_2);
}
