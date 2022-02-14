
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
struct TYPE_5__ {int timeout; } ;
struct TYPE_7__ {TYPE_4__ cmd; TYPE_1__ ccb_h; } ;
struct TYPE_6__ {int status; int flags; } ;
union ccb {TYPE_3__ ataio; TYPE_2__ ccb_h; } ;
struct cam_device {int dummy; } ;


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
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct cam_device*,union ccb*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct cam_device*,union ccb*) ;
 int VAR_10 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_5(struct cam_device *VAR_11, union ccb *VAR_12)
{
 if (VAR_9 & VAR_1) {
  FUNC_4("sending ATA %s with timeout of %u msecs",
        FUNC_0(&(VAR_12->ataio.cmd)),
        VAR_12->ataio.ccb_h.timeout);
 }


 VAR_12->ccb_h.flags |= VAR_3;

 if (VAR_9 & VAR_0)
  VAR_12->ccb_h.flags |= VAR_6;

 if (FUNC_2(VAR_11, VAR_12) < 0) {
  FUNC_3("error sending ATA %s", FUNC_0(&(VAR_12->ataio.cmd)));
  return (1);
 }





 if (!(VAR_12->ataio.cmd.flags & VAR_2) &&
     (VAR_12->ccb_h.status & VAR_8) != VAR_7) {
  FUNC_4("ATA %s failed", FUNC_0(&(VAR_12->ataio.cmd)));
  if (VAR_9 & VAR_1) {
   FUNC_1(VAR_11, VAR_12, VAR_5,
     VAR_4, VAR_10);
  }
  return (1);
 }

 return (0);
}
