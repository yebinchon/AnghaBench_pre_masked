
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ifnet {int dummy; } ;
struct bce_softc {int bce_flags; int bce_phy_flags; int bce_miibus; int bce_ifmedia; int bce_pulse_callout; struct ifnet* bce_ifp; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bce_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bce_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bce_softc*) ;
 int FUNC_5 (struct bce_softc*,int ) ;
 int FUNC_6 (struct bce_softc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 struct bce_softc* FUNC_10 (int ) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_6)
{
 struct bce_softc *VAR_7 = FUNC_10(VAR_6);
 struct ifnet *VAR_8;
 u32 VAR_9;

 FUNC_2(VAR_5 | VAR_4);

 VAR_8 = VAR_7->bce_ifp;


 FUNC_0(VAR_7);


 FUNC_8(&VAR_7->bce_pulse_callout);

 FUNC_6(VAR_7);
 if (VAR_7->bce_flags & VAR_2)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_0;
 FUNC_5(VAR_7, VAR_9);

 FUNC_1(VAR_7);

 FUNC_11(VAR_8);


 if ((VAR_7->bce_phy_flags & VAR_3) != 0)
  FUNC_12(&VAR_7->bce_ifmedia);
 else {
  FUNC_7(VAR_6);
  FUNC_9(VAR_6, VAR_7->bce_miibus);
 }


 FUNC_4(VAR_7);

 FUNC_3(VAR_5 | VAR_4);

 return(0);
}
