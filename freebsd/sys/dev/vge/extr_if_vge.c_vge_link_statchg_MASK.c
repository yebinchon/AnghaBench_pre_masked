
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vge_softc {struct ifnet* vge_ifp; int vge_flags; } ;
struct ifnet {int if_snd; } ;


 int FUNC_0 (struct vge_softc*,int ) ;
 int FUNC_1 (struct vge_softc*,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct vge_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct ifnet*,int ) ;
 int FUNC_5 (struct vge_softc*) ;
 int FUNC_6 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_13)
{
 struct vge_softc *VAR_14;
 struct ifnet *VAR_15;
 uint8_t VAR_16;

 VAR_14 = VAR_13;
 VAR_15 = VAR_14->vge_ifp;
 FUNC_3(VAR_14);

 VAR_16 = FUNC_0(VAR_14, VAR_7);
 if ((VAR_16 & VAR_10) == 0) {
  if ((VAR_16 & VAR_9) == 0) {
   VAR_14->vge_flags &= ~VAR_6;
   FUNC_4(VAR_14->vge_ifp,
       VAR_0);
  } else {
   VAR_14->vge_flags |= VAR_6;
   FUNC_4(VAR_14->vge_ifp,
       VAR_1);
   FUNC_1(VAR_14, VAR_4, VAR_3 |
       VAR_2);
   if ((VAR_16 & VAR_8) != 0) {
    if ((VAR_16 & VAR_12) != 0)
     FUNC_1(VAR_14, VAR_5,
         VAR_3);
    if ((VAR_16 & VAR_11) != 0)
     FUNC_1(VAR_14, VAR_5,
         VAR_2);
   }
   if (!FUNC_2(&VAR_15->if_snd))
    FUNC_6(VAR_15);
  }
 }




 FUNC_5(VAR_14);
}
