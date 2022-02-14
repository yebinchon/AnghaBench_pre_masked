
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct an_softc {int irq_rid; struct resource* irq_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_0 (int ,int ,int*,int) ;
 struct an_softc* FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_3, int VAR_4, int VAR_5)
{
 struct an_softc *VAR_6 = FUNC_1(VAR_3);
 struct resource *VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_2, &VAR_4,
         (VAR_1 | VAR_5));
 if (VAR_7) {
  VAR_6->irq_rid = VAR_4;
  VAR_6->irq_res = VAR_7;
  return (0);
 } else {
  return (VAR_0);
 }
}
