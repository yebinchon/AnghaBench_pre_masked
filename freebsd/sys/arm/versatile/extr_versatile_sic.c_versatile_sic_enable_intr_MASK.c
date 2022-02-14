
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct versatile_sic_softc {int dummy; } ;
struct versatile_sic_irqsrc {int irq; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct versatile_sic_softc*) ;
 int FUNC_1 (struct versatile_sic_softc*) ;
 int FUNC_2 (struct versatile_sic_softc*,int ,int) ;
 struct versatile_sic_softc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1, struct intr_irqsrc *VAR_2)
{
 struct versatile_sic_softc *VAR_3;
 struct versatile_sic_irqsrc *VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 VAR_4 = (struct versatile_sic_irqsrc *)VAR_2;

 FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_0, (1 << VAR_4->irq));
 FUNC_1(VAR_3);
}
