
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link {int l_num_irqs; int* l_irqs; scalar_t__ l_isa_irq; } ;
struct TYPE_2__ {int SciInterrupt; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct link *VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_4);


 if (!FUNC_1(VAR_6))
  return (VAR_1);


 for (VAR_7 = 0; VAR_7 < VAR_5->l_num_irqs; VAR_7++)
  if (VAR_5->l_irqs[VAR_7] == VAR_6)
    return (VAR_3);





 if (VAR_5->l_isa_irq && VAR_0.SciInterrupt == VAR_6 &&
     VAR_6 < VAR_2)
  return (VAR_3);


 return (VAR_1);
}
