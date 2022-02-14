
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct intr_irqsrc {int dummy; } ;
struct a10_intr_irqsrc {int irq; } ;
struct a10_aintc_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct a10_aintc_softc*,int ) ;
 struct a10_aintc_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct a10_aintc_softc *VAR_2;
 u_int VAR_3 = ((struct a10_intr_irqsrc *)VAR_1)->irq;

 VAR_2 = FUNC_1(VAR_0);
 FUNC_0(VAR_2, VAR_3);
}
