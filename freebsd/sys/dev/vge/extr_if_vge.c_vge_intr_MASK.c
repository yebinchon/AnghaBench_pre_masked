
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vge_softc {int vge_flags; struct ifnet* vge_ifp; } ;
struct ifnet {int if_flags; int if_capenable; int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct vge_softc*,int ) ;
 int FUNC_1 (struct vge_softc*,int ,int ) ;
 int FUNC_2 (struct vge_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
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
 int VAR_18 ;
 int FUNC_4 (struct vge_softc*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (struct vge_softc*) ;
 int FUNC_6 (struct vge_softc*) ;
 int FUNC_7 (struct vge_softc*) ;
 int FUNC_8 (struct vge_softc*,int ) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct vge_softc*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_23)
{
 struct vge_softc *VAR_24;
 struct ifnet *VAR_25;
 uint32_t VAR_26;

 VAR_24 = VAR_23;
 FUNC_4(VAR_24);

 VAR_25 = VAR_24->vge_ifp;
 if ((VAR_24->vge_flags & VAR_6) != 0 ||
     (VAR_25->if_flags & VAR_2) == 0) {
  FUNC_5(VAR_24);
  return;
 }
 FUNC_1(VAR_24, VAR_4, VAR_3);
 VAR_26 = FUNC_0(VAR_24, VAR_8);
 FUNC_2(VAR_24, VAR_8, VAR_26 | VAR_9);

 if (VAR_26 == 0xFFFFFFFF || (VAR_26 & VAR_7) == 0)
  goto done;
 if ((VAR_25->if_drv_flags & VAR_1) != 0) {
  if (VAR_26 & (VAR_14|VAR_15))
   FUNC_8(VAR_24, VAR_22);
  if (VAR_26 & (VAR_13|VAR_12)) {
   FUNC_8(VAR_24, VAR_22);
   FUNC_1(VAR_24, VAR_19, VAR_20);
   FUNC_1(VAR_24, VAR_19, VAR_21);
  }

  if (VAR_26 & (VAR_17|VAR_18))
   FUNC_10(VAR_24);

  if (VAR_26 & (VAR_16|VAR_11)) {
   VAR_25->if_drv_flags &= ~VAR_1;
   FUNC_6(VAR_24);
  }

  if (VAR_26 & VAR_10)
   FUNC_7(VAR_24);
 }
done:
 if ((VAR_25->if_drv_flags & VAR_1) != 0) {

  FUNC_1(VAR_24, VAR_5, VAR_3);

  if (!FUNC_3(&VAR_25->if_snd))
   FUNC_9(VAR_25);
 }
 FUNC_5(VAR_24);
}
