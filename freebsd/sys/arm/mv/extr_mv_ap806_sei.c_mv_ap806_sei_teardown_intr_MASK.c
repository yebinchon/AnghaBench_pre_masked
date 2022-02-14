
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mv_ap806_sei_softc {int dummy; } ;
struct mv_ap806_sei_irqsrc {int dummy; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 struct mv_ap806_sei_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct mv_ap806_sei_softc*,struct mv_ap806_sei_irqsrc*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, struct intr_irqsrc *VAR_1,
    struct resource *VAR_2, struct intr_map_data *VAR_3)
{
 struct mv_ap806_sei_softc *VAR_4;
 struct mv_ap806_sei_irqsrc *VAR_5;

 VAR_4 = FUNC_0(VAR_0);
 VAR_5 = (struct mv_ap806_sei_irqsrc *)VAR_1;

 FUNC_1(VAR_4, VAR_5, 1);
 return (0);
}
