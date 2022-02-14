
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_i2c_softc {scalar_t__ sc_iicbus; } ;
typedef int device_t ;


 int FUNC_0 (struct ti_i2c_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct ti_i2c_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0)
{
 struct ti_i2c_softc *VAR_1;
 int VAR_2;

  VAR_1 = FUNC_3(VAR_0);

 if ((VAR_2 = FUNC_1(VAR_0)) != 0) {
  FUNC_4(VAR_0, "cannot detach child devices\n");
  return (VAR_2);
 }

    if (VAR_1->sc_iicbus &&
     (VAR_2 = FUNC_2(VAR_0, VAR_1->sc_iicbus)) != 0)
  return (VAR_2);

 FUNC_5(VAR_0);
 FUNC_0(VAR_1);

 return (0);
}
