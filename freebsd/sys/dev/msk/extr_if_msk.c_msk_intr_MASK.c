
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msk_softc {int msk_pflags; int msk_intrmask; int msk_dev; struct msk_if_softc** msk_if; } ;
struct msk_if_softc {struct ifnet* msk_ifp; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msk_softc*,int ) ;
 int FUNC_1 (struct msk_softc*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (struct msk_softc*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_4 (struct msk_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct msk_softc*) ;
 int FUNC_7 (struct msk_if_softc*) ;
 int FUNC_8 (struct msk_softc*) ;
 int FUNC_9 (struct msk_if_softc*) ;
 int FUNC_10 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_19)
{
 struct msk_softc *VAR_20;
 struct msk_if_softc *VAR_21, *VAR_22;
 struct ifnet *VAR_23, *VAR_24;
 uint32_t VAR_25;
 int VAR_26;

 VAR_20 = VAR_19;
 FUNC_3(VAR_20);


 VAR_25 = FUNC_0(VAR_20, VAR_2);
 if (VAR_25 == 0 || VAR_25 == 0xffffffff ||
     (VAR_20->msk_pflags & VAR_4) != 0 ||
     (VAR_25 & VAR_20->msk_intrmask) == 0) {
  FUNC_1(VAR_20, VAR_1, 2);
  FUNC_4(VAR_20);
  return;
 }

 VAR_21 = VAR_20->msk_if[VAR_5];
 VAR_22 = VAR_20->msk_if[VAR_6];
 VAR_23 = VAR_24 = ((void*)0);
 if (VAR_21 != ((void*)0))
  VAR_23 = VAR_21->msk_ifp;
 if (VAR_22 != ((void*)0))
  VAR_24 = VAR_22->msk_ifp;

 if ((VAR_25 & VAR_16) != 0 && VAR_21 != ((void*)0))
  FUNC_9(VAR_21);
 if ((VAR_25 & VAR_17) != 0 && VAR_22 != ((void*)0))
  FUNC_9(VAR_22);
 if ((VAR_25 & VAR_14) != 0 && VAR_21 != ((void*)0))
  FUNC_7(VAR_21);
 if ((VAR_25 & VAR_15) != 0 && VAR_22 != ((void*)0))
  FUNC_7(VAR_22);
 if ((VAR_25 & (VAR_9 | VAR_10)) != 0) {
  FUNC_5(VAR_20->msk_dev, "Rx descriptor error\n");
  VAR_20->msk_intrmask &= ~(VAR_9 | VAR_10);
  FUNC_1(VAR_20, VAR_0, VAR_20->msk_intrmask);
  FUNC_0(VAR_20, VAR_0);
 }
        if ((VAR_25 & (VAR_11 | VAR_12)) != 0) {
  FUNC_5(VAR_20->msk_dev, "Tx descriptor error\n");
  VAR_20->msk_intrmask &= ~(VAR_11 | VAR_12);
  FUNC_1(VAR_20, VAR_0, VAR_20->msk_intrmask);
  FUNC_0(VAR_20, VAR_0);
 }
 if ((VAR_25 & VAR_13) != 0)
  FUNC_8(VAR_20);

 VAR_26 = FUNC_6(VAR_20);
 if ((VAR_25 & VAR_18) != 0 && VAR_26 == 0)
  FUNC_1(VAR_20, VAR_8, VAR_7);


 FUNC_1(VAR_20, VAR_1, 2);

 if (VAR_23 != ((void*)0) && (VAR_23->if_drv_flags & VAR_3) != 0 &&
     !FUNC_2(&VAR_23->if_snd))
  FUNC_10(VAR_23);
 if (VAR_24 != ((void*)0) && (VAR_24->if_drv_flags & VAR_3) != 0 &&
     !FUNC_2(&VAR_24->if_snd))
  FUNC_10(VAR_24);

 FUNC_4(VAR_20);
}
