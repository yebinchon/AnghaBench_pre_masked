
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
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct rt1310_intc_softc*,int ) ;
 struct rt1310_intc_softc* VAR_3 ;
 int FUNC_1 (struct rt1310_intc_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_4, struct intr_irqsrc *VAR_5)
{
 u_int VAR_6;
 unsigned int VAR_7;
 struct rt1310_intc_softc *VAR_8;

 VAR_8 = VAR_3;
 VAR_6 = ((struct rt1310_irqsrc *)VAR_5)->ri_irq;


 VAR_7 = FUNC_0(VAR_8, VAR_1);
 VAR_7 &= ~(1 << VAR_6);
 FUNC_1(VAR_8, VAR_1, VAR_7);
 FUNC_1(VAR_8, VAR_2, VAR_7);

 FUNC_1(VAR_8, VAR_0, 1 << VAR_6);
}
