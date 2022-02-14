
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int status; TYPE_1__* chip; } ;
struct TYPE_2__ {int (* unmask ) (int) ;int (* mask ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct irq_desc* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(int VAR_2)
{
 struct irq_desc *VAR_3 = FUNC_0(VAR_2);

 if (FUNC_1(!(VAR_3->status & VAR_1)))
  return;

 if (FUNC_5(VAR_3->status & VAR_0))
  return;

 VAR_3->chip->mask(VAR_2);
 FUNC_2(VAR_2);
 VAR_3->chip->unmask(VAR_2);
}
