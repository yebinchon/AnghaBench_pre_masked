
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap4_prcm_softc {int sc_instance; } ;
typedef int device_t ;
typedef int devclass_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 struct omap4_prcm_softc* FUNC_3 (int ) ;

__attribute__((used)) static struct omap4_prcm_softc *
FUNC_4(int VAR_0)
{
 int VAR_1, VAR_2;
 devclass_t VAR_3;
 device_t VAR_4;
 struct omap4_prcm_softc *VAR_5;

 VAR_3 = FUNC_0("omap4_prcm");
 VAR_2 = FUNC_2(VAR_3);

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
  VAR_4 = FUNC_1(VAR_3, VAR_1);
  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5->sc_instance == VAR_0)
   return (VAR_5);
 }

 return (((void*)0));
}
