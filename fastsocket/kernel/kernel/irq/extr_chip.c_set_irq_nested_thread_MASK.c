
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int lock; int status; } ;


 int VAR_0 ;
 struct irq_desc* FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(unsigned int VAR_1, int VAR_2)
{
 struct irq_desc *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;

 if (!VAR_3)
  return;

 FUNC_1(&VAR_3->lock, VAR_4);
 if (VAR_2)
  VAR_3->status |= VAR_0;
 else
  VAR_3->status &= ~VAR_0;
 FUNC_2(&VAR_3->lock, VAR_4);
}
