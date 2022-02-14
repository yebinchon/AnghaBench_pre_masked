
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl_clks_softc {int sc_init_hook; int sc_pdev; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 struct twl_clks_softc* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct twl_clks_softc*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2)
{
 struct twl_clks_softc *VAR_3;

 VAR_3 = FUNC_1((device_t)VAR_2);

 if (FUNC_3(VAR_3->sc_pdev))
  FUNC_2(VAR_3, VAR_0);
 else if (FUNC_5(VAR_3->sc_pdev) || FUNC_4(VAR_3->sc_pdev))
  FUNC_2(VAR_3, VAR_1);

 FUNC_0(&VAR_3->sc_init_hook);
}
