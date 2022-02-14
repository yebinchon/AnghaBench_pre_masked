
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rt1310_irqsrc {int ri_irq; } ;
struct rt1310_intc_softc {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct rt1310_intc_softc* VAR_1 ;
 int FUNC_1 (struct rt1310_intc_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_2, struct intr_irqsrc *VAR_3)
{
 u_int VAR_4;
 struct rt1310_intc_softc *VAR_5;

 FUNC_0(0);
 VAR_5 = VAR_1;
 VAR_4 = ((struct rt1310_irqsrc *)VAR_3)->ri_irq;

    FUNC_1(VAR_5, VAR_0, 1 << VAR_4);
}
