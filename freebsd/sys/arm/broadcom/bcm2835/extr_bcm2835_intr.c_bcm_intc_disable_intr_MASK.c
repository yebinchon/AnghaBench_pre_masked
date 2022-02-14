
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int dummy; } ;
struct bcm_intc_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,struct bcm_intc_irqsrc*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, struct intr_irqsrc *VAR_1)
{

 FUNC_0(FUNC_1(VAR_0),
     (struct bcm_intc_irqsrc *)VAR_1);
}
