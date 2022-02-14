
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
union ccb {TYPE_1__ crcn; } ;
struct cam_periph {scalar_t__ softc; } ;
struct TYPE_5__ {int flags; int request_ccbs; } ;
typedef TYPE_2__ nvme_probe_softc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_3(struct cam_periph *VAR_4)
{
 union ccb *VAR_5;
 nvme_probe_softc *VAR_6;

 VAR_6 = (nvme_probe_softc *)VAR_4->softc;
 VAR_5 = (union ccb *)FUNC_1(&VAR_6->request_ccbs);

 FUNC_0(VAR_6, VAR_2);

 if (VAR_5->crcn.flags & VAR_0)
  VAR_6->flags |= VAR_3;
 else
  VAR_6->flags &= ~VAR_3;

 FUNC_2(VAR_4, VAR_1);
}
