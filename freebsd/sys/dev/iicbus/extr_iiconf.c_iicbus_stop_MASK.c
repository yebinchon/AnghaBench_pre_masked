
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_softc {scalar_t__ started; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_1)
{
 struct iicbus_softc *VAR_2 = (struct iicbus_softc *)FUNC_2(VAR_1);
 int VAR_3 = 0;

 if (!VAR_2->started)
  return (VAR_0);

 VAR_3 = FUNC_0(FUNC_1(VAR_1));


 VAR_2->started = 0;

 return (VAR_3);
}
