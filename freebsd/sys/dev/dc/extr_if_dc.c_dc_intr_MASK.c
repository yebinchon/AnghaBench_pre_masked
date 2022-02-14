
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_capenable; int if_drv_flags; int if_snd; } ;
struct TYPE_2__ {scalar_t__ dc_tx_cnt; } ;
struct dc_softc {TYPE_1__ dc_cdata; struct ifnet* dc_ifp; scalar_t__ suspended; } ;


 int FUNC_0 (struct dc_softc*,int ) ;
 int FUNC_1 (struct dc_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_2 (struct dc_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct dc_softc*,int ,int ) ;
 int VAR_14 ;
 int FUNC_4 (struct dc_softc*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dc_softc*) ;
 scalar_t__ FUNC_7 (struct dc_softc*) ;
 scalar_t__ FUNC_8 (struct dc_softc*) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct dc_softc*) ;
 int FUNC_11 (struct dc_softc*) ;
 int FUNC_12 (struct ifnet*,int ,int) ;

__attribute__((used)) static void
FUNC_13(void *VAR_18)
{
 struct dc_softc *VAR_19;
 struct ifnet *VAR_20;
 uint32_t VAR_21, VAR_22;
 int VAR_23;

 VAR_19 = VAR_18;

 if (VAR_19->suspended)
  return;

 FUNC_2(VAR_19);
 VAR_22 = FUNC_0(VAR_19, VAR_3);
 if (VAR_22 == 0xFFFFFFFF || (VAR_22 & VAR_2) == 0) {
  FUNC_4(VAR_19);
  return;
 }
 VAR_20 = VAR_19->dc_ifp;







 FUNC_1(VAR_19, VAR_1, 0x00000000);

 for (VAR_23 = 16; VAR_23 > 0; VAR_23--) {
  if ((VAR_20->if_drv_flags & VAR_17) == 0)
   break;

  FUNC_1(VAR_19, VAR_3, VAR_22);

  if (VAR_22 & VAR_6) {
   if (FUNC_8(VAR_19) == 0) {
    while (FUNC_7(VAR_19))
     FUNC_8(VAR_19);
   }
  }

  if (VAR_22 & (VAR_10 | VAR_9))
   FUNC_11(VAR_19);

  if (VAR_22 & VAR_8) {
   FUNC_11(VAR_19);
   if (VAR_19->dc_cdata.dc_tx_cnt) {
    FUNC_3(VAR_19, VAR_12, VAR_13);
    FUNC_1(VAR_19, VAR_14, 0xFFFFFFFF);
   }
  }

  if (VAR_22 & VAR_11)
   FUNC_10(VAR_19);

  if ((VAR_22 & VAR_7)
      || (VAR_22 & VAR_5)) {
   VAR_21 = FUNC_0(VAR_19, VAR_0);
   FUNC_12(VAR_20, VAR_16, (VAR_21 & 0xffff) + ((VAR_21 >> 17) & 0x7ff));
   if (FUNC_8(VAR_19) == 0) {
    while (FUNC_7(VAR_19))
     FUNC_8(VAR_19);
   }
  }

  if (!FUNC_5(&VAR_20->if_snd))
   FUNC_9(VAR_20);

  if (VAR_22 & VAR_4) {
   VAR_20->if_drv_flags &= ~VAR_17;
   FUNC_6(VAR_19);
   FUNC_4(VAR_19);
   return;
  }
  VAR_22 = FUNC_0(VAR_19, VAR_3);
  if (VAR_22 == 0xFFFFFFFF || (VAR_22 & VAR_2) == 0)
   break;
 }


 if (VAR_20->if_drv_flags & VAR_17)
  FUNC_1(VAR_19, VAR_1, VAR_2);

 FUNC_4(VAR_19);
}
