
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl_softc {scalar_t__ sc_type; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct twl_softc* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_1)
{
 struct twl_softc *VAR_2 = FUNC_0(VAR_1);
 return (VAR_2->sc_type == VAR_0);
}
