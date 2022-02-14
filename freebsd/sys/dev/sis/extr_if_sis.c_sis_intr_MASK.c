
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sis_softc {struct ifnet* sis_ifp; } ;
struct ifnet {int if_capenable; int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct sis_softc*,int ) ;
 int FUNC_1 (struct sis_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (struct sis_softc*) ;
 int FUNC_4 (struct sis_softc*,int ,int ) ;
 int FUNC_5 (struct sis_softc*) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (struct sis_softc*) ;
 int FUNC_8 (struct sis_softc*) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct sis_softc*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_18)
{
 struct sis_softc *VAR_19;
 struct ifnet *VAR_20;
 uint32_t VAR_21;

 VAR_19 = VAR_18;
 VAR_20 = VAR_19->sis_ifp;

 FUNC_3(VAR_19);
 VAR_21 = FUNC_0(VAR_19, VAR_7);
 if ((VAR_21 & VAR_6) == 0) {

  FUNC_5(VAR_19);
  return;
 }


 FUNC_1(VAR_19, VAR_5, 0);

 for (;(VAR_21 & VAR_6) != 0;) {
  if ((VAR_20->if_drv_flags & VAR_2) == 0)
   break;
  if (VAR_21 &
      (VAR_14 | VAR_15 |
      VAR_17 | VAR_16) )
   FUNC_10(VAR_19);

  if (VAR_21 & (VAR_8 | VAR_12 |
      VAR_9 | VAR_10))
   FUNC_8(VAR_19);

  if (VAR_21 & VAR_11)
   FUNC_6(VAR_20, VAR_1, 1);

  if (VAR_21 & (VAR_10))
   FUNC_4(VAR_19, VAR_3, VAR_4);

  if (VAR_21 & VAR_13) {
   VAR_20->if_drv_flags &= ~VAR_2;
   FUNC_7(VAR_19);
   FUNC_5(VAR_19);
   return;
  }
  VAR_21 = FUNC_0(VAR_19, VAR_7);
 }

 if (VAR_20->if_drv_flags & VAR_2) {

  FUNC_1(VAR_19, VAR_5, 1);

  if (!FUNC_2(&VAR_20->if_snd))
   FUNC_9(VAR_20);
 }

 FUNC_5(VAR_19);
}
