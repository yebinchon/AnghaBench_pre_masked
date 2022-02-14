
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ste_softc {int ste_int_rx_act; scalar_t__ ste_int_rx_mod; struct ifnet* ste_ifp; } ;
struct ifnet {int if_capenable; int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct ste_softc*,int ) ;
 int FUNC_1 (struct ste_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct ste_softc*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ste_softc*) ;
 int FUNC_6 (struct ste_softc*) ;
 int FUNC_7 (struct ste_softc*,int) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct ste_softc*) ;
 int FUNC_10 (struct ste_softc*) ;
 int FUNC_11 (struct ste_softc*) ;

__attribute__((used)) static void
FUNC_12(void *VAR_13)
{
 struct ste_softc *VAR_14;
 struct ifnet *VAR_15;
 uint16_t VAR_16, VAR_17;

 VAR_14 = VAR_13;
 FUNC_3(VAR_14);
 VAR_15 = VAR_14->ste_ifp;
 VAR_17 = FUNC_0(VAR_14, VAR_6);
 if ((VAR_15->if_drv_flags & VAR_1) == 0) {
  FUNC_5(VAR_14);
  return;
 }

 VAR_16 = VAR_5;
 if (VAR_17 == 0xFFFF || (VAR_17 & VAR_16) == 0)
  goto done;

 if (VAR_14->ste_int_rx_act > 0) {
  VAR_17 &= ~VAR_8;
  VAR_16 &= ~VAR_4;
 }

 if ((VAR_17 & (VAR_9 | VAR_8)) != 0) {
  FUNC_7(VAR_14, -1);
  if ((VAR_15->if_drv_flags & VAR_1) != 0 &&
      (VAR_14->ste_int_rx_mod != 0)) {
   if ((VAR_17 & VAR_8) != 0) {
    FUNC_1(VAR_14, VAR_2,
        FUNC_4(VAR_14->ste_int_rx_mod));
    VAR_16 &= ~VAR_4;
    VAR_14->ste_int_rx_act = 1;
   } else {
    VAR_16 |= VAR_4;
    VAR_14->ste_int_rx_act = 0;
   }
  }
 }
 if ((VAR_15->if_drv_flags & VAR_1) != 0) {
  if ((VAR_17 & VAR_11) != 0)
   FUNC_11(VAR_14);
  if ((VAR_17 & VAR_12) != 0)
   FUNC_10(VAR_14);
  if ((VAR_17 & VAR_10) != 0)
   FUNC_9(VAR_14);
  if ((VAR_17 & VAR_7) != 0) {
   VAR_15->if_drv_flags &= ~VAR_1;
   FUNC_6(VAR_14);
   FUNC_5(VAR_14);
   return;
  }
  if (!FUNC_2(&VAR_15->if_snd))
   FUNC_8(VAR_15);
done:

  FUNC_1(VAR_14, VAR_3, VAR_16);
 }
 FUNC_5(VAR_14);
}
