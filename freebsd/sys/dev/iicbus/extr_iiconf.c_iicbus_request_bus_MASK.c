
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_softc {void* owner; void* busydev; scalar_t__ owncount; } ;
typedef void* device_t ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct iicbus_softc*) ;
 int FUNC_2 (struct iicbus_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct iicbus_softc*,int) ;
 int FUNC_9 (struct iicbus_softc*) ;

int
FUNC_10(device_t VAR_3, device_t VAR_4, int VAR_5)
{
 struct iicbus_softc *VAR_6 = (struct iicbus_softc *)FUNC_5(VAR_3);
 int VAR_7 = 0;

 FUNC_1(VAR_6);

 for (;;) {
  if (VAR_6->owner == ((void*)0))
   break;
  if ((VAR_5 & VAR_1) && VAR_6->owner == VAR_4)
   break;
  if ((VAR_7 = FUNC_8(VAR_6, VAR_5)) != 0)
   break;
 }

 if (VAR_7 == 0) {
  ++VAR_6->owncount;
  if (VAR_6->owner == ((void*)0)) {
   VAR_6->owner = VAR_4;







   if (FUNC_6(VAR_4) < VAR_0)
    VAR_6->busydev = VAR_3;
   else
    VAR_6->busydev = VAR_4;
   FUNC_3(VAR_6->busydev);






   FUNC_2(VAR_6);

   VAR_7 = FUNC_0(FUNC_4(VAR_3),
       VAR_2, (caddr_t)&VAR_5);
   FUNC_1(VAR_6);

   if (VAR_7 != 0) {
    VAR_6->owner = ((void*)0);
    VAR_6->owncount = 0;
    FUNC_9(VAR_6);
    FUNC_7(VAR_6->busydev);
   }
  }
 }

 FUNC_2(VAR_6);

 return (VAR_7);
}
