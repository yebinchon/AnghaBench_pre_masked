
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vge_softc {int vge_watchdog; scalar_t__ vge_timer; struct ifnet* vge_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int FUNC_0 (struct vge_softc*,int ,int) ;
 int FUNC_1 (struct vge_softc*,int ,int) ;
 int FUNC_2 (struct vge_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct vge_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct vge_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vge_softc*) ;
 int FUNC_7 (struct vge_softc*) ;
 int FUNC_8 (struct vge_softc*) ;

__attribute__((used)) static void
FUNC_9(struct vge_softc *VAR_10)
{
 struct ifnet *VAR_11;

 FUNC_4(VAR_10);
 VAR_11 = VAR_10->vge_ifp;
 VAR_10->vge_timer = 0;
 FUNC_5(&VAR_10->vge_watchdog);

 VAR_11->if_drv_flags &= ~(VAR_1 | VAR_0);

 FUNC_0(VAR_10, VAR_4, VAR_3);
 FUNC_0(VAR_10, VAR_5, VAR_2);
 FUNC_2(VAR_10, VAR_6, 0xFFFFFFFF);
 FUNC_1(VAR_10, VAR_9, 0xFFFF);
 FUNC_0(VAR_10, VAR_8, 0xFF);
 FUNC_2(VAR_10, VAR_7, 0);

 FUNC_7(VAR_10);
 FUNC_3(VAR_10);
 FUNC_8(VAR_10);
 FUNC_6(VAR_10);
}
