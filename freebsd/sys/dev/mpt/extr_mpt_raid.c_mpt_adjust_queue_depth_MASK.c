
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct mpt_softc {int raid_queue_depth; } ;
struct mpt_raid_volume {int dummy; } ;
struct TYPE_2__ {scalar_t__ status; int flags; int func_code; } ;
struct ccb_relsim {TYPE_1__ ccb_h; int openings; int release_flags; } ;
struct cam_path {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mpt_softc*,struct mpt_raid_volume*,char*,scalar_t__) ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (TYPE_1__*,struct cam_path*,int) ;

__attribute__((used)) static void
FUNC_3(struct mpt_softc *VAR_4, struct mpt_raid_volume *VAR_5,
         struct cam_path *VAR_6)
{
 struct ccb_relsim VAR_7;

 FUNC_2(&VAR_7.ccb_h, VAR_6, 5);
 VAR_7.ccb_h.func_code = VAR_3;
 VAR_7.ccb_h.flags = VAR_0;
 VAR_7.release_flags = VAR_2;
 VAR_7.openings = VAR_4->raid_queue_depth;
 FUNC_1((union ccb *)&VAR_7);
 if (VAR_7.ccb_h.status != VAR_1)
  FUNC_0(VAR_4, VAR_5, "mpt_adjust_queue_depth failed "
       "with CAM status %#x\n", VAR_7.ccb_h.status);
}
