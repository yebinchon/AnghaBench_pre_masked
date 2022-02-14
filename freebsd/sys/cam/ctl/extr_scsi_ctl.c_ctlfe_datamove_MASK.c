
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ io_type; int status; int flags; } ;
struct TYPE_5__ {scalar_t__ ext_data_filled; } ;
union ctl_io {TYPE_2__ io_hdr; TYPE_1__ scsiio; } ;
struct TYPE_8__ {int path; } ;
union ccb {TYPE_4__ ccb_h; } ;
struct ctlfe_lun_softc {int work_queue; } ;
struct cam_periph {scalar_t__ softc; } ;
struct TYPE_7__ {int stqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 union ccb* FUNC_1 (union ctl_io*) ;
 int FUNC_2 (int *,TYPE_4__*,int ) ;
 int FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (struct cam_periph*) ;
 TYPE_3__ VAR_6 ;
 struct cam_periph* FUNC_5 (int ) ;
 int FUNC_6 (struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_7(union ctl_io *VAR_7)
{
 union ccb *VAR_8;
 struct cam_periph *VAR_9;
 struct ctlfe_lun_softc *VAR_10;

 FUNC_0(VAR_7->io_hdr.io_type == VAR_3,
     ("Unexpected io_type (%d) in ctlfe_datamove", VAR_7->io_hdr.io_type));

 VAR_7->scsiio.ext_data_filled = 0;
 VAR_8 = FUNC_1(VAR_7);
 VAR_9 = FUNC_5(VAR_8->ccb_h.path);
 FUNC_3(VAR_9);
 VAR_10 = (struct ctlfe_lun_softc *)VAR_9->softc;
 VAR_7->io_hdr.flags |= VAR_1;
 if ((VAR_7->io_hdr.status & VAR_4) != VAR_5)
  VAR_7->io_hdr.flags |= VAR_2;
 FUNC_2(&VAR_10->work_queue, &VAR_8->ccb_h,
     VAR_6.stqe);
 FUNC_6(VAR_9, VAR_0);
 FUNC_4(VAR_9);
}
