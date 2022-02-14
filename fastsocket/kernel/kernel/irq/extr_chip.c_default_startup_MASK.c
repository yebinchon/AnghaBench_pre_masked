
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* enable ) (unsigned int) ;} ;


 struct irq_desc* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_0)
{
 struct irq_desc *VAR_1 = FUNC_0(VAR_0);

 VAR_1->chip->enable(VAR_0);
 return 0;
}
