
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ctl_private; int flags; int status; } ;
struct ctl_scsiio {TYPE_1__ io_hdr; } ;
union ctl_io {struct ctl_scsiio scsiio; } ;
struct ctl_lun {TYPE_2__* backend; } ;
struct ctl_lba_len_flags {int flags; } ;
struct TYPE_4__ {int (* data_submit ) (union ctl_io*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ctl_lun* FUNC_1 (union ctl_io*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (union ctl_io*) ;

__attribute__((used)) static int
FUNC_3(union ctl_io *VAR_5)
{
 struct ctl_lun *VAR_6 = FUNC_1(VAR_5);
 struct ctl_scsiio *VAR_7;
 struct ctl_lba_len_flags *VAR_8;
 int VAR_9;

 VAR_7 = &VAR_5->scsiio;
 VAR_7->io_hdr.status = VAR_4;
 VAR_7->io_hdr.flags &= ~VAR_0;
 VAR_8 = (struct ctl_lba_len_flags *)
     &VAR_7->io_hdr.ctl_private[VAR_3];
 VAR_8->flags &= ~VAR_1;
 VAR_8->flags |= VAR_2;

 FUNC_0(("ctl_cnw_cont: calling data_submit()\n"));
 VAR_9 = VAR_6->backend->data_submit((union ctl_io *)VAR_7);
 return (VAR_9);
}
