
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int bst; int bsh; } ;
struct tsec_softc {int is_etsec; int * sc_rres; scalar_t__ sc_rrid; TYPE_1__ sc_bas; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tsec_softc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int ,int ,scalar_t__*,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int *) ;
 struct tsec_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,char*) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_7)
{
 struct tsec_softc *VAR_8;
 uint32_t VAR_9;

 if (!FUNC_8(VAR_7))
  return (VAR_1);

 if (FUNC_6(VAR_7) == ((void*)0) ||
     FUNC_11(FUNC_6(VAR_7), "network") != 0)
  return (VAR_1);

 if (!FUNC_7(VAR_7, "gianfar") &&
     !FUNC_7(VAR_7, "fsl,etsec2"))
  return (VAR_1);

 VAR_8 = FUNC_3(VAR_7);





 if (FUNC_7(VAR_7, "fsl,etsec2"))
  VAR_8->is_etsec = 1;
 else {
  VAR_8->sc_rrid = 0;
  VAR_8->sc_rres = FUNC_1(VAR_7, VAR_3, &VAR_8->sc_rrid,
      VAR_2);
  if (VAR_8->sc_rres == ((void*)0))
   return (VAR_1);

  VAR_8->sc_bas.bsh = FUNC_9(VAR_8->sc_rres);
  VAR_8->sc_bas.bst = FUNC_10(VAR_8->sc_rres);


  VAR_9 = FUNC_0(VAR_8, VAR_5);
  VAR_8->is_etsec = ((VAR_9 >> 16) == VAR_4) ? 1 : 0;
  VAR_9 |= FUNC_0(VAR_8, VAR_6);

  FUNC_2(VAR_7, VAR_3, VAR_8->sc_rrid, VAR_8->sc_rres);

  if (VAR_9 == 0) {
   FUNC_4(VAR_7, "could not identify TSEC type\n");
   return (VAR_1);
  }
 }

 if (VAR_8->is_etsec)
  FUNC_5(VAR_7, "Enhanced Three-Speed Ethernet Controller");
 else
  FUNC_5(VAR_7, "Three-Speed Ethernet Controller");

 return (VAR_0);
}
