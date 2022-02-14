
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl_softc {scalar_t__ sc_clks; scalar_t__ sc_vreg; } ;
typedef int device_t ;


 int FUNC_0 (struct twl_softc*) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct twl_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct twl_softc *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->sc_vreg)
  FUNC_1(VAR_0, VAR_1->sc_vreg);
 if (VAR_1->sc_clks)
  FUNC_1(VAR_0, VAR_1->sc_clks);


 FUNC_0(VAR_1);

 return (0);
}
