
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbus_softc {scalar_t__ owner; int lock; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 struct smbus_softc* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct smbus_softc*) ;

int
FUNC_6(device_t VAR_2, device_t VAR_3)
{
 struct smbus_softc *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;


 VAR_5 = FUNC_0(FUNC_1(VAR_2), VAR_1, ((void*)0));

 if (VAR_5)
  return (VAR_5);

 FUNC_3(&VAR_4->lock);
 if (VAR_4->owner == VAR_3) {
  VAR_4->owner = ((void*)0);


  FUNC_5(VAR_4);
 } else
  VAR_5 = VAR_0;
 FUNC_4(&VAR_4->lock);

 return (VAR_5);
}
