
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int dummy; } ;
struct gic_v3_irqsrc {int gi_irq; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct intr_irqsrc*) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1, struct intr_irqsrc *VAR_2)
{
 struct gic_v3_irqsrc *VAR_3 = (struct gic_v3_irqsrc *)VAR_2;

 FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_3->gi_irq);
}
