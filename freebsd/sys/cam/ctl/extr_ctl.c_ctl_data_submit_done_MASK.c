
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* io_cont ) (union ctl_io*) ;} ;
struct TYPE_4__ {int flags; int status; } ;
union ctl_io {TYPE_1__ scsiio; TYPE_2__ io_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (union ctl_io*) ;

void
FUNC_2(union ctl_io *VAR_5)
{
 if ((VAR_5->io_hdr.flags & VAR_1) &&
     (VAR_5->io_hdr.flags & VAR_0) == 0 &&
     ((VAR_5->io_hdr.status & VAR_2) == VAR_3 ||
      (VAR_5->io_hdr.status & VAR_2) == VAR_4)) {
  VAR_5->scsiio.io_cont(VAR_5);
  return;
 }
 FUNC_0(VAR_5);
}
