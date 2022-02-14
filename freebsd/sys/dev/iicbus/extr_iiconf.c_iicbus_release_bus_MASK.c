
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_softc {scalar_t__ owner; scalar_t__ owncount; int busydev; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct iicbus_softc*) ;
 int FUNC_2 (struct iicbus_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct iicbus_softc*) ;

int
FUNC_7(device_t VAR_2, device_t VAR_3)
{
 struct iicbus_softc *VAR_4 = (struct iicbus_softc *)FUNC_4(VAR_2);

 FUNC_1(VAR_4);

 if (VAR_4->owner != VAR_3) {
  FUNC_2(VAR_4);
  return (VAR_0);
 }

 if (--VAR_4->owncount == 0) {

  FUNC_2(VAR_4);
  FUNC_0(FUNC_3(VAR_2), VAR_1, ((void*)0));
  FUNC_1(VAR_4);
  VAR_4->owner = ((void*)0);
  FUNC_6(VAR_4);
  FUNC_5(VAR_4->busydev);
 }
 FUNC_2(VAR_4);
 return (0);
}
