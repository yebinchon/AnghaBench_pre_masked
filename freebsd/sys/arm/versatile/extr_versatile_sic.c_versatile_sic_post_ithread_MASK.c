
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct versatile_sic_irqsrc {int irq; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct intr_irqsrc*) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct versatile_sic_irqsrc *VAR_2;

 VAR_2 = (struct versatile_sic_irqsrc *)VAR_1;
 FUNC_0(VAR_2->irq);
 FUNC_1(VAR_0, VAR_1);
}
