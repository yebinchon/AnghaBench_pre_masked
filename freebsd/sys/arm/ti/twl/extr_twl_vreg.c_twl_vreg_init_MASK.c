
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl_vreg_softc {int sc_init_hook; int sc_pdev; } ;
typedef int device_t ;


 int FUNC_0 (struct twl_vreg_softc*) ;
 int FUNC_1 (struct twl_vreg_softc*) ;
 int FUNC_2 (int *) ;
 struct twl_vreg_softc* FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct twl_vreg_softc*,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2)
{
 struct twl_vreg_softc *VAR_3;

 VAR_3 = FUNC_3((device_t)VAR_2);

 FUNC_0(VAR_3);

 if (FUNC_4(VAR_3->sc_pdev))
  FUNC_7(VAR_3, VAR_0);
 else if (FUNC_6(VAR_3->sc_pdev) || FUNC_5(VAR_3->sc_pdev))
  FUNC_7(VAR_3, VAR_1);

 FUNC_1(VAR_3);

 FUNC_2(&VAR_3->sc_init_hook);
}
