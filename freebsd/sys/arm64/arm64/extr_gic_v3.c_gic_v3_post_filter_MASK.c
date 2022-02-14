
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int dummy; } ;
struct gic_v3_irqsrc {scalar_t__ gi_trig; int gi_irq; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_2, struct intr_irqsrc *VAR_3)
{
 struct gic_v3_irqsrc *VAR_4 = (struct gic_v3_irqsrc *)VAR_3;

 if (VAR_4->gi_trig == VAR_1)
  return;

 FUNC_0(VAR_0, VAR_4->gi_irq);
}
