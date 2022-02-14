
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int lock; } ;


 int FUNC_0 (struct irq_desc*,unsigned int,int) ;
 int FUNC_1 (unsigned int,struct irq_desc*) ;
 int FUNC_2 (unsigned int,struct irq_desc*) ;
 struct irq_desc* FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(unsigned int VAR_0)
{
 struct irq_desc *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;

 if (!VAR_1)
  return;

 FUNC_1(VAR_0, VAR_1);
 FUNC_4(&VAR_1->lock, VAR_2);
 FUNC_0(VAR_1, VAR_0, 0);
 FUNC_5(&VAR_1->lock, VAR_2);
 FUNC_2(VAR_0, VAR_1);
}
