
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_softc {int started; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_0)
{
 struct iicbus_softc *VAR_1 = (struct iicbus_softc *)FUNC_0(VAR_0);

 return (VAR_1->started);
}
