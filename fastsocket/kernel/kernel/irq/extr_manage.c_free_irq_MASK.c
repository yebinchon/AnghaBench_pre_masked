
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int * affinity_notify; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (unsigned int,void*) ;
 int FUNC_2 (unsigned int,struct irq_desc*) ;
 int FUNC_3 (unsigned int,struct irq_desc*) ;
 struct irq_desc* FUNC_4 (unsigned int) ;
 int FUNC_5 (int ) ;

void FUNC_6(unsigned int VAR_0, void *VAR_1)
{
 struct irq_desc *VAR_2 = FUNC_4(VAR_0);

 if (!VAR_2)
  return;






 FUNC_2(VAR_0, VAR_2);
 FUNC_5(FUNC_1(VAR_0, VAR_1));
 FUNC_3(VAR_0, VAR_2);
}
