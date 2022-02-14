
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * kern_data_ptr; int (* io_cont ) (union ctl_io*) ;} ;
struct TYPE_4__ {int flags; int status; } ;
union ctl_io {TYPE_1__ scsiio; TYPE_2__ io_hdr; } ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (union ctl_io*) ;

void
FUNC_3(union ctl_io *VAR_7)
{
 uint8_t *VAR_8;
 if ((VAR_7->io_hdr.flags & VAR_2) &&
     (VAR_7->io_hdr.flags & VAR_0) == 0 &&
     ((VAR_7->io_hdr.status & VAR_3) == VAR_4 ||
      (VAR_7->io_hdr.status & VAR_3) == VAR_5)) {
  VAR_7->scsiio.io_cont(VAR_7);
  return;
 }





 if (VAR_7->io_hdr.flags & VAR_1)
  VAR_8 = VAR_7->scsiio.kern_data_ptr;
 else
  VAR_8 = ((void*)0);
 FUNC_0(VAR_7);
 if (VAR_8)
  FUNC_1(VAR_8, VAR_6);
}
