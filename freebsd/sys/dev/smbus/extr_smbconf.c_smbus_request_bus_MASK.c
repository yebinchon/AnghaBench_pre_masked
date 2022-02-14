
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbus_softc {scalar_t__ owner; int lock; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct smbus_softc* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct smbus_softc*,int) ;

int
FUNC_6(device_t VAR_3, device_t VAR_4, int VAR_5)
{
 struct smbus_softc *VAR_6 = FUNC_2(VAR_3);
 device_t VAR_7;
 int VAR_8;


 VAR_7 = FUNC_1(VAR_3);
 FUNC_3(&VAR_6->lock);
 do {
  FUNC_4(&VAR_6->lock);
  VAR_8 = FUNC_0(VAR_7, VAR_2, &VAR_5);
  FUNC_3(&VAR_6->lock);

  if (VAR_8)
   VAR_8 = FUNC_5(VAR_6, VAR_5);
 } while (VAR_8 == VAR_0);

 while (VAR_8 == 0) {
  if (VAR_6->owner && VAR_6->owner != VAR_4)
   VAR_8 = FUNC_5(VAR_6, VAR_5);
  else {
   VAR_6->owner = VAR_4;
   break;
  }


  if (VAR_8) {
   FUNC_4(&VAR_6->lock);
   FUNC_0(VAR_7, VAR_1, &VAR_5);
   return (VAR_8);
  }
 }
 FUNC_4(&VAR_6->lock);

 return (VAR_8);
}
