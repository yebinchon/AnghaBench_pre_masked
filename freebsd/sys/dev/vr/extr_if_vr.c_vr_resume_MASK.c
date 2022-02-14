
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vr_softc {int vr_flags; struct ifnet* vr_ifp; } ;
struct ifnet {int if_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vr_softc*) ;
 int FUNC_1 (struct vr_softc*) ;
 struct vr_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct vr_softc*) ;
 int FUNC_4 (struct vr_softc*) ;
 int FUNC_5 (struct vr_softc*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct vr_softc *VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_3);
 VAR_4 = VAR_3->vr_ifp;
 FUNC_3(VAR_3);
 FUNC_5(VAR_3);
 if (VAR_4->if_flags & VAR_0)
  FUNC_4(VAR_3);

 VAR_3->vr_flags &= ~VAR_1;
 FUNC_1(VAR_3);

 return (0);
}
