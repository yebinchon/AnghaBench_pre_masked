
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octebus_softc {int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct octebus_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct octebus_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 VAR_2->sc_dev = VAR_1;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 != 0)
  return (VAR_0);

 return (0);
}
