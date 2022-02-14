
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {unsigned long status; int lock; } ;


 unsigned long VAR_0 ;
 struct irq_desc* FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(unsigned int VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 struct irq_desc *VAR_4 = FUNC_0(VAR_1);
 unsigned long VAR_5;

 if (!VAR_4)
  return;


 VAR_3 &= VAR_0;
 VAR_2 &= VAR_0;

 FUNC_1(&VAR_4->lock, VAR_5);
 VAR_4->status &= ~VAR_2;
 VAR_4->status |= VAR_3;
 FUNC_2(&VAR_4->lock, VAR_5);
}
