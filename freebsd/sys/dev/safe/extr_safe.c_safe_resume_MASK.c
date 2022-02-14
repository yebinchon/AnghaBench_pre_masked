
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safe_softc {scalar_t__ sc_suspended; } ;
typedef int device_t ;


 struct safe_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0)
{
 struct safe_softc *VAR_1 = FUNC_0(VAR_0);




 VAR_1->sc_suspended = 0;
 return (0);
}
