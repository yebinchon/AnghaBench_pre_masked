
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_softc {scalar_t__ owner; } ;
typedef int device_t ;


 int FUNC_0 (scalar_t__,int,char*) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(device_t VAR_0, int VAR_1, char *VAR_2)
{
 struct iicbus_softc *VAR_3 = (struct iicbus_softc *)FUNC_1(VAR_0);


 if (VAR_3->owner)
  FUNC_0(VAR_3->owner, VAR_1, VAR_2);

 return;
}
