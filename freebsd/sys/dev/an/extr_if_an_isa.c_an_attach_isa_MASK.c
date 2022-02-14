
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_softc {int irq_handle; int irq_res; int an_dev; int irq_rid; int port_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct an_softc*,int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int *,int ,struct an_softc*,int *) ;
 int FUNC_5 (int ) ;
 struct an_softc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct an_softc *VAR_3 = FUNC_6(VAR_2);
 int VAR_4 = FUNC_5(VAR_2);
 int VAR_5;

 FUNC_1(VAR_2, VAR_3->port_rid, 1);
 FUNC_0(VAR_2, VAR_3->irq_rid, 0);

 VAR_3->an_dev = VAR_2;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_2);
  return (VAR_5);
 }

 VAR_5 = FUNC_4(VAR_2, VAR_3->irq_res, VAR_0,
          ((void*)0), VAR_1, VAR_3, &VAR_3->irq_handle);
 if (VAR_5) {
  FUNC_3(VAR_2);
  return (VAR_5);
 }
 return (0);
}
