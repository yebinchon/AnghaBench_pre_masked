
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap4_prcm_softc {int sc_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct omap4_prcm_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct omap4_prcm_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3 == ((void*)0))
  return;

 FUNC_1(VAR_3->sc_res, VAR_1,
     FUNC_0(VAR_3->sc_res, VAR_1) | VAR_2);
 FUNC_0(VAR_3->sc_res, VAR_1);
}
