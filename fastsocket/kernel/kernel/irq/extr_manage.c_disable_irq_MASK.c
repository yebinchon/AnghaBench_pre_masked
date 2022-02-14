
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {scalar_t__ action; } ;


 int FUNC_0 (unsigned int) ;
 struct irq_desc* FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;

void FUNC_3(unsigned int VAR_0)
{
 struct irq_desc *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return;

 FUNC_0(VAR_0);
 if (VAR_1->action)
  FUNC_2(VAR_0);
}
