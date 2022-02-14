
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tzic_softc {int dummy; } ;
struct tzic_irqsrc {int irq; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 struct tzic_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct tzic_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 u_int VAR_2 = ((struct tzic_irqsrc *)VAR_1)->irq;
 struct tzic_softc *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_3, VAR_2);
}
