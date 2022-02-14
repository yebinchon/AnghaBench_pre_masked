
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct usie_softc {scalar_t__ sc_nucom; int * sc_uc_xfer; int sc_if_xfer; int sc_ucom; int sc_super_ucom; int * sc_ifp; } ;
typedef int device_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct usie_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct usie_softc*) ;
 int FUNC_8 (struct usie_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct usie_softc *VAR_4 = FUNC_2(VAR_3);
 uint8_t VAR_5;


 if (VAR_4->sc_ifp != ((void*)0)) {
  FUNC_8(VAR_4);
  FUNC_6(VAR_4->sc_if_xfer, VAR_0);
  FUNC_0(VAR_4->sc_ifp);
  FUNC_3(VAR_4->sc_ifp);
  FUNC_4(VAR_4->sc_ifp);
  VAR_4->sc_ifp = ((void*)0);
 }

 if (VAR_4->sc_nucom > 0)
  FUNC_5(&VAR_4->sc_super_ucom, VAR_4->sc_ucom);


 FUNC_6(VAR_4->sc_if_xfer, VAR_0);

 for (VAR_5 = 0; VAR_5 != VAR_1; VAR_5++)
  FUNC_6(VAR_4->sc_uc_xfer[VAR_5], VAR_2);


 FUNC_1(VAR_3);

 FUNC_7(VAR_4);

 return (0);
}
