
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl190_intc_softc {int dummy; } ;
struct pl190_intc_irqsrc {int irq; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct pl190_intc_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct pl190_intc_softc*) ;
 int FUNC_2 (struct pl190_intc_softc*) ;
 struct pl190_intc_softc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1, struct intr_irqsrc *VAR_2)
{
 struct pl190_intc_softc *VAR_3;
 struct pl190_intc_irqsrc *VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 VAR_4 = (struct pl190_intc_irqsrc *)VAR_2;

 FUNC_1(VAR_3);
 FUNC_0(VAR_3, VAR_0, (1 << VAR_4->irq));
 FUNC_2(VAR_3);
}
