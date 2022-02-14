
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int status; int flags; } ;
struct TYPE_6__ {int timeout; } ;
struct TYPE_5__ {scalar_t__ cdb_bytes; } ;
struct TYPE_7__ {TYPE_2__ ccb_h; TYPE_1__ cdb_io; } ;
union ccb {TYPE_4__ ccb_h; TYPE_3__ csio; } ;
struct cam_device {int dummy; } ;
struct ata_pass_16 {int flags; int features; int control; int command; } ;
struct ata_cmd {int features; int control; int command; } ;


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
 int FUNC_0 (struct ata_cmd*) ;
 int FUNC_1 (struct cam_device*,union ccb*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct cam_device*,union ccb*) ;
 int VAR_10 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_5(struct cam_device *VAR_11, union ccb *VAR_12)
{
 struct ata_pass_16 *VAR_13;
 struct ata_cmd VAR_14;

 VAR_13 = (struct ata_pass_16 *)VAR_12->csio.cdb_io.cdb_bytes;
 VAR_14.command = VAR_13->command;
 VAR_14.control = VAR_13->control;
 VAR_14.features = VAR_13->features;

 if (VAR_9 & VAR_2) {
  FUNC_4("sending ATA %s via pass_16 with timeout of %u msecs",
        FUNC_0(&VAR_14),
        VAR_12->csio.ccb_h.timeout);
 }


 VAR_12->ccb_h.flags |= VAR_3;

 if (VAR_9 & VAR_1)
  VAR_12->ccb_h.flags |= VAR_6;

 if (FUNC_2(VAR_11, VAR_12) < 0) {
  FUNC_3("error sending ATA %s via pass_16", FUNC_0(&VAR_14));
  return (1);
 }





 if (!(VAR_13->flags & VAR_0) &&
     (VAR_12->ccb_h.status & VAR_8) != VAR_7) {
  FUNC_4("ATA %s via pass_16 failed", FUNC_0(&VAR_14));
  if (VAR_9 & VAR_2) {
   FUNC_1(VAR_11, VAR_12, VAR_5,
     VAR_4, VAR_10);
  }
  return (1);
 }

 return (0);
}
