
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vge_softc {scalar_t__ vge_timer; struct ifnet* vge_ifp; int vge_watchdog; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vge_softc*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,void (*) (void*),struct vge_softc*) ;
 int VAR_3 ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct ifnet*,char*) ;
 int FUNC_4 (struct vge_softc*) ;
 int FUNC_5 (struct vge_softc*,int ) ;
 int FUNC_6 (struct vge_softc*) ;
 int FUNC_7 (struct vge_softc*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_4)
{
 struct vge_softc *VAR_5;
 struct ifnet *VAR_6;

 VAR_5 = VAR_4;
 FUNC_0(VAR_5);
 FUNC_6(VAR_5);
 FUNC_1(&VAR_5->vge_watchdog, VAR_3, FUNC_8, VAR_5);
 if (VAR_5->vge_timer == 0 || --VAR_5->vge_timer > 0)
  return;

 VAR_6 = VAR_5->vge_ifp;
 FUNC_3(VAR_6, "watchdog timeout\n");
 FUNC_2(VAR_6, VAR_0, 1);

 FUNC_7(VAR_5);
 FUNC_5(VAR_5, VAR_2);

 VAR_6->if_drv_flags &= ~VAR_1;
 FUNC_4(VAR_5);
}
