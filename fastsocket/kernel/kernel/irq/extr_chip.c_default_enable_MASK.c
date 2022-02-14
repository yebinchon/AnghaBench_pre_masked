
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int status; TYPE_1__* chip; } ;
struct TYPE_2__ {int (* unmask ) (unsigned int) ;} ;


 int VAR_0 ;
 struct irq_desc* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_1)
{
 struct irq_desc *VAR_2 = FUNC_0(VAR_1);

 VAR_2->chip->unmask(VAR_1);
 VAR_2->status &= ~VAR_0;
}
