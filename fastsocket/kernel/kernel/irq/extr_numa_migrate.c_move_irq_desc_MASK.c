
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {scalar_t__ irq; int node; } ;


 scalar_t__ VAR_0 ;
 struct irq_desc* FUNC_0 (struct irq_desc*,int) ;

struct irq_desc *FUNC_1(struct irq_desc *VAR_1, int VAR_2)
{

 if (VAR_1->irq < VAR_0 || VAR_2 == -1)
  return VAR_1;

 if (VAR_1->node != VAR_2)
  VAR_1 = FUNC_0(VAR_1, VAR_2);

 return VAR_1;
}
