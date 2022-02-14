
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct quicc_softc {int * sc_rres; scalar_t__ sc_rrid; int sc_rtype; int sc_clock; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ,scalar_t__*,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int *) ;
 int * FUNC_2 (int ) ;
 struct quicc_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int ) ;

int
FUNC_6(device_t VAR_6, u_int VAR_7)
{
 struct quicc_softc *VAR_8;
 uint16_t VAR_9;

 VAR_8 = FUNC_3(VAR_6);
 VAR_8->sc_dev = VAR_6;
 if (FUNC_2(VAR_6) == ((void*)0))
  FUNC_4(VAR_6,
      "Quad integrated communications controller");

 VAR_8->sc_rrid = 0;
 VAR_8->sc_rtype = VAR_5;
 VAR_8->sc_rres = FUNC_0(VAR_6, VAR_8->sc_rtype, &VAR_8->sc_rrid,
     VAR_3);
 if (VAR_8->sc_rres == ((void*)0)) {
  VAR_8->sc_rrid = 0;
  VAR_8->sc_rtype = VAR_4;
  VAR_8->sc_rres = FUNC_0(VAR_6, VAR_8->sc_rtype,
      &VAR_8->sc_rrid, VAR_3);
  if (VAR_8->sc_rres == ((void*)0))
   return (VAR_1);
 }

 VAR_8->sc_clock = VAR_7;






 VAR_9 = FUNC_5(VAR_8->sc_rres, VAR_2);

 FUNC_1(VAR_6, VAR_8->sc_rtype, VAR_8->sc_rrid, VAR_8->sc_rres);
 return ((VAR_9 == 0x00e8) ? VAR_0 : VAR_1);
}
