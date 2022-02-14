
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int targ_lun; int targ_mapped_lun; } ;
struct TYPE_5__ {int io_type; TYPE_1__ nexus; int start_bt; int start_time; } ;
struct TYPE_6__ {int * cdb; } ;
union ctl_io {TYPE_2__ io_hdr; TYPE_3__ scsiio; } ;
struct ctl_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;


 struct ctl_port* FUNC_1 (union ctl_io*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (union ctl_io*) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (struct ctl_port*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int VAR_4 ;

int
FUNC_7(union ctl_io *VAR_5)
{
 struct ctl_port *VAR_6 = FUNC_1(VAR_5);

 FUNC_0(("ctl_queue cdb[0]=%02X\n", VAR_5->scsiio.cdb[0]));







 VAR_5->io_hdr.nexus.targ_mapped_lun =
     FUNC_4(VAR_6, VAR_5->io_hdr.nexus.targ_lun);

 switch (VAR_5->io_hdr.io_type) {
 case 129:
 case 128:
  if (VAR_3 & VAR_0)
   FUNC_3(VAR_5);
  FUNC_2(VAR_5);
  break;
 default:
  FUNC_6("ctl_queue: unknown I/O type %d\n", VAR_5->io_hdr.io_type);
  return (VAR_2);
 }

 return (VAR_1);
}
