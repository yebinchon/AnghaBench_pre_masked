
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_restart; } ;
struct vr_softc {int vr_flags; int vr_stat_callout; int vr_dev; int vr_miibus; TYPE_2__* vr_ifp; TYPE_1__ vr_stat; } ;
struct mii_data {int dummy; } ;
struct TYPE_4__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vr_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct vr_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int FUNC_4 (struct mii_data*) ;
 int FUNC_5 (struct vr_softc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct vr_softc*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_4)
{
 struct vr_softc *VAR_5;
 struct mii_data *VAR_6;

 VAR_5 = (struct vr_softc *)VAR_4;

 FUNC_0(VAR_5);

 if ((VAR_5->vr_flags & VAR_2) != 0) {
  FUNC_3(VAR_5->vr_dev, "restarting\n");
  VAR_5->vr_stat.num_restart++;
  VAR_5->vr_ifp->if_drv_flags &= ~VAR_0;
  FUNC_5(VAR_5);
  VAR_5->vr_flags &= ~VAR_2;
 }

 VAR_6 = FUNC_2(VAR_5->vr_miibus);
 FUNC_4(VAR_6);
 if ((VAR_5->vr_flags & VAR_1) == 0)
  FUNC_6(VAR_5->vr_dev);
 FUNC_7(VAR_5);
 FUNC_1(&VAR_5->vr_stat_callout, VAR_3, FUNC_8, VAR_5);
}
