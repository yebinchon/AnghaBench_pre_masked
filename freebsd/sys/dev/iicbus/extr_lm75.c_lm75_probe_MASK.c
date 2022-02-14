
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm75_softc {int sc_hwtype; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lm75_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct lm75_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 VAR_4->sc_hwtype = VAR_2;




 FUNC_1(VAR_3, "LM75 temperature sensor");

 return (VAR_0);
}
