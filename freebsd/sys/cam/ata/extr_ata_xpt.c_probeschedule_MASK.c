
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
union ccb {TYPE_3__ crcn; } ;
struct cam_periph {TYPE_2__* path; scalar_t__ softc; } ;
struct TYPE_9__ {int flags; int request_ccbs; } ;
typedef TYPE_4__ probe_softc ;
struct TYPE_7__ {TYPE_1__* device; } ;
struct TYPE_6__ {int flags; scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_3(struct cam_periph *VAR_8)
{
 union ccb *VAR_9;
 probe_softc *VAR_10;

 VAR_10 = (probe_softc *)VAR_8->softc;
 VAR_9 = (union ccb *)FUNC_1(&VAR_10->request_ccbs);

 if ((VAR_8->path->device->flags & VAR_0) ||
     VAR_8->path->device->protocol == VAR_6 ||
     VAR_8->path->device->protocol == VAR_7)
  FUNC_0(VAR_10, VAR_5);
 else
  FUNC_0(VAR_10, VAR_3);

 if (VAR_9->crcn.flags & VAR_1)
  VAR_10->flags |= VAR_4;
 else
  VAR_10->flags &= ~VAR_4;

 FUNC_2(VAR_8, VAR_2);
}
