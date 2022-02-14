
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vte_softc {struct ifnet* vte_ifp; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct vte_softc*,int ) ;
 int FUNC_1 (struct vte_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct vte_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct vte_softc*) ;
 int FUNC_5 (struct vte_softc*) ;
 int FUNC_6 (struct vte_softc*) ;
 int FUNC_7 (struct vte_softc*) ;
 int FUNC_8 (struct vte_softc*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_9)
{
 struct vte_softc *VAR_10;
 struct ifnet *VAR_11;
 uint16_t VAR_12;
 int VAR_13;

 VAR_10 = (struct vte_softc *)VAR_9;
 FUNC_3(VAR_10);

 VAR_11 = VAR_10->vte_ifp;

 VAR_12 = FUNC_0(VAR_10, VAR_8);
 if ((VAR_12 & VAR_6) == 0) {

  FUNC_4(VAR_10);
  return;
 }


 FUNC_1(VAR_10, VAR_7, 0);
 for (VAR_13 = 8; (VAR_12 & VAR_6) != 0;) {
  if ((VAR_11->if_drv_flags & VAR_0) == 0)
   break;
  if ((VAR_12 & (VAR_3 | VAR_2 |
      VAR_4)) != 0)
   FUNC_5(VAR_10);
  if ((VAR_12 & VAR_5) != 0)
   FUNC_8(VAR_10);
  if ((VAR_12 & VAR_1) != 0)
   FUNC_7(VAR_10);
  if (!FUNC_2(&VAR_11->if_snd))
   FUNC_6(VAR_10);
  if (--VAR_13 > 0)
   VAR_12 = FUNC_0(VAR_10, VAR_8);
  else
   break;
 }

 if ((VAR_11->if_drv_flags & VAR_0) != 0) {

  FUNC_1(VAR_10, VAR_7, VAR_6);
 }
 FUNC_4(VAR_10);
}
