
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ext_data_filled; } ;
struct TYPE_3__ {int flags; } ;
union ctl_io {TYPE_2__ scsiio; TYPE_1__ io_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (union ctl_io*) ;

__attribute__((used)) static void
FUNC_2(union ctl_io *VAR_2)
{

 if ((VAR_2->io_hdr.flags & VAR_1) == VAR_0)
  FUNC_0(VAR_2);
 else {

  VAR_2->scsiio.ext_data_filled = 0;
  FUNC_1(VAR_2);
 }
}
