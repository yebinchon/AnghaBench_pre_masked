
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quicc_softc {int sc_rres; int sc_rrid; int sc_rtype; int sc_ires; int sc_irid; int sc_icookie; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct quicc_softc* FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_1)
{
 struct quicc_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1, VAR_2->sc_ires, VAR_2->sc_icookie);
 FUNC_0(VAR_1, VAR_0, VAR_2->sc_irid, VAR_2->sc_ires);
 FUNC_0(VAR_1, VAR_2->sc_rtype, VAR_2->sc_rrid, VAR_2->sc_rres);
 return (0);
}
