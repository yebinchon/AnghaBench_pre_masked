
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vge_softc {int vge_flags; struct ifnet* vge_ifp; scalar_t__ vge_pmcap; int vge_dev; } ;
struct ifnet {int if_flags; int if_drv_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vge_softc*) ;
 int FUNC_1 (struct vge_softc*) ;
 struct vge_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,scalar_t__,int,int) ;
 int FUNC_5 (struct vge_softc*) ;
 int FUNC_6 (struct vge_softc*) ;
 int FUNC_7 (struct vge_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_6)
{
 struct vge_softc *VAR_7;
 struct ifnet *VAR_8;
 uint16_t VAR_9;

 VAR_7 = FUNC_2(VAR_6);
 FUNC_0(VAR_7);
 if ((VAR_7->vge_flags & VAR_4) != 0) {

  VAR_9 = FUNC_3(VAR_7->vge_dev,
      VAR_7->vge_pmcap + VAR_3, 2);
  if ((VAR_9 & VAR_2) != 0) {
   VAR_9 &= ~VAR_2;
   FUNC_4(VAR_7->vge_dev,
       VAR_7->vge_pmcap + VAR_3, VAR_9, 2);
  }
 }
 FUNC_5(VAR_7);

 FUNC_7(VAR_7);
 VAR_8 = VAR_7->vge_ifp;

 if ((VAR_8->if_flags & VAR_1) != 0) {
  VAR_8->if_drv_flags &= ~VAR_0;
  FUNC_6(VAR_7);
 }
 VAR_7->vge_flags &= ~VAR_5;
 FUNC_1(VAR_7);

 return (0);
}
