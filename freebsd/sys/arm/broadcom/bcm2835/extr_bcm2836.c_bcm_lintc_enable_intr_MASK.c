
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int dummy; } ;
struct bcm_lintc_irqsrc {int bli_irq; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct bcm_lintc_irqsrc*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct bcm_lintc_irqsrc *VAR_2 = (struct bcm_lintc_irqsrc *)VAR_1;

 FUNC_0(VAR_2->bli_irq);
 FUNC_1(FUNC_2(VAR_0), VAR_2);
}
