
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ flags; int valid; } ;
struct TYPE_4__ {TYPE_1__ scsi; } ;
struct ccb_trans_settings {TYPE_2__ proto_specific; int transport_version; int transport; int protocol_version; int protocol; int ccb_h; } ;
struct cam_path {struct cam_ed* device; } ;
struct cam_ed {int flags; int inq_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ccb_trans_settings*,struct cam_path*,int ) ;
 int FUNC_1 (int *,struct cam_path*,int ) ;

__attribute__((used)) static void
FUNC_2(struct cam_path *VAR_13)
{
 struct cam_ed *VAR_14;
 VAR_14 = VAR_13->device;
 if ((VAR_14->flags & VAR_0) != 0
  || ((VAR_14->inq_flags & VAR_6) != 0
    && (VAR_14->inq_flags & (VAR_7|VAR_8|VAR_9)) != 0)) {
  struct ccb_trans_settings VAR_15;

  FUNC_1(&VAR_15.ccb_h, VAR_13, VAR_1);
  VAR_15.protocol = VAR_4;
  VAR_15.protocol_version = VAR_5;
  VAR_15.transport = VAR_11;
  VAR_15.transport_version = VAR_12;
  VAR_15.proto_specific.scsi.flags = 0;
  VAR_15.proto_specific.scsi.valid = VAR_3;
  FUNC_0(&VAR_15, VAR_13,
                       VAR_10);
  VAR_15.proto_specific.scsi.flags = VAR_2;
  FUNC_0(&VAR_15, VAR_13,
                       VAR_10);
 }
}
