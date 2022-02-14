
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_ap806_sei_softc {int dummy; } ;
struct mv_ap806_sei_irqsrc {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 struct mv_ap806_sei_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct mv_ap806_sei_softc*,struct mv_ap806_sei_irqsrc*,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct mv_ap806_sei_softc *VAR_2;
 struct mv_ap806_sei_irqsrc *VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = (struct mv_ap806_sei_irqsrc *)VAR_1;

 FUNC_1(VAR_2, VAR_3, 1);
}
