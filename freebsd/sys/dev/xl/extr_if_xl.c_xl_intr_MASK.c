
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct xl_softc {scalar_t__ xl_type; struct ifnet* xl_ifp; } ;
struct ifnet {int if_capenable; int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct xl_softc*,int ) ;
 int FUNC_1 (struct xl_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct xl_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (struct xl_softc*) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (struct xl_softc*) ;
 scalar_t__ FUNC_7 (struct xl_softc*) ;
 scalar_t__ FUNC_8 (struct xl_softc*) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct xl_softc*) ;
 int FUNC_12 (struct xl_softc*) ;
 int FUNC_13 (struct xl_softc*) ;
 int FUNC_14 (struct xl_softc*) ;

__attribute__((used)) static void
FUNC_15(void *VAR_13)
{
 struct xl_softc *VAR_14 = VAR_13;
 struct ifnet *VAR_15 = VAR_14->xl_ifp;
 u_int16_t VAR_16;

 FUNC_3(VAR_14);
 for (;;) {
  VAR_16 = FUNC_0(VAR_14, VAR_6);
  if ((VAR_16 & VAR_5) == 0 || VAR_16 == 0xFFFF)
   break;
  FUNC_1(VAR_14, VAR_4,
      VAR_3|(VAR_16 & VAR_5));
  if ((VAR_15->if_drv_flags & VAR_2) == 0)
   break;

  if (VAR_16 & VAR_11) {
   if (FUNC_8(VAR_14) == 0) {
    while (FUNC_7(VAR_14))
     FUNC_8(VAR_14);
   }
  }

  if (VAR_16 & VAR_8) {
   if (VAR_14->xl_type == VAR_12)
    FUNC_14(VAR_14);
   else
    FUNC_13(VAR_14);
  }

  if (VAR_16 & VAR_10) {
   FUNC_5(VAR_15, VAR_1, 1);
   FUNC_12(VAR_14);
  }

  if (VAR_16 & VAR_7) {
   VAR_15->if_drv_flags &= ~VAR_2;
   FUNC_6(VAR_14);
   break;
  }

  if (VAR_16 & VAR_9)
   FUNC_11(VAR_14);
 }

 if (!FUNC_2(&VAR_15->if_snd) &&
     VAR_15->if_drv_flags & VAR_2) {
  if (VAR_14->xl_type == VAR_12)
   FUNC_9(VAR_15);
  else
   FUNC_10(VAR_15);
 }

 FUNC_4(VAR_14);
}
