
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {scalar_t__ target_lun; TYPE_2__* path; } ;
union ccb {TYPE_4__ crcn; TYPE_3__ ccb_h; } ;
struct ccb_pathinq {int hba_inquiry; int hba_misc; } ;
struct cam_periph {int path; scalar_t__ softc; } ;
struct TYPE_11__ {int flags; int request_ccbs; } ;
typedef TYPE_5__ probe_softc ;
struct TYPE_8__ {TYPE_1__* device; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct ccb_pathinq*,int ) ;
 int FUNC_4 (struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_5(struct cam_periph *VAR_12)
{
 struct ccb_pathinq VAR_13;
 union ccb *VAR_14;
 probe_softc *VAR_15;

 VAR_15 = (probe_softc *)VAR_12->softc;
 VAR_14 = (union ccb *)FUNC_1(&VAR_15->request_ccbs);

 FUNC_3(&VAR_13, VAR_12->path);
 if (((VAR_14->ccb_h.path->device->flags & VAR_0) == 0)
  && (VAR_14->ccb_h.target_lun == 0)) {
  FUNC_0(VAR_15, VAR_11);
 } else if ((VAR_13.hba_inquiry & (VAR_7|VAR_6|VAR_5)) != 0
       && (VAR_13.hba_misc & VAR_4) != 0) {
  FUNC_2(VAR_12);
  FUNC_0(VAR_15, VAR_9);
 } else {
  FUNC_0(VAR_15, VAR_9);
 }

 if (VAR_14->crcn.flags & VAR_1)
  VAR_15->flags |= VAR_10;
 else
  VAR_15->flags &= ~VAR_10;

 if (VAR_13.hba_misc & VAR_3)
  VAR_15->flags |= VAR_8;
 else
  VAR_15->flags &= ~VAR_8;

 FUNC_4(VAR_12, VAR_2);
}
