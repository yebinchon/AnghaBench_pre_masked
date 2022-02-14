
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct resource {int dummy; } ;
struct mv_ap806_sei_softc {int dummy; } ;
struct mv_ap806_sei_irqsrc {scalar_t__ irq; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct mv_ap806_sei_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct mv_ap806_sei_softc*,struct mv_ap806_sei_irqsrc*,int ) ;
 int FUNC_2 (int ,struct intr_map_data*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, struct intr_irqsrc *VAR_3,
    struct resource *VAR_4, struct intr_map_data *VAR_5)
{
 struct mv_ap806_sei_softc *VAR_6;
 struct mv_ap806_sei_irqsrc *VAR_7;
 u_int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_2);
 VAR_7 = (struct mv_ap806_sei_irqsrc *)VAR_3;
 if (VAR_5 == ((void*)0))
  return (VAR_1);
 VAR_9 = FUNC_2(VAR_2, VAR_5, &VAR_8);
 if (VAR_9 != 0)
  return (VAR_9);
 if (VAR_8 != VAR_7->irq)
  return (VAR_0);
 FUNC_1(VAR_6, VAR_7, 0);
 return (0);
}
