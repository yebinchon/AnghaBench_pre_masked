
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int * ctl_private; int status; } ;
struct ctl_scsiio {TYPE_1__ io_hdr; } ;
union ctl_io {struct ctl_scsiio scsiio; } ;
struct ctl_lun {TYPE_3__* backend; TYPE_2__* be_lun; } ;
struct ctl_lba_len_flags {scalar_t__ lba; scalar_t__ len; } ;
struct TYPE_6__ {int (* config_write ) (union ctl_io*) ;} ;
struct TYPE_5__ {scalar_t__ maxlba; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct ctl_lun* FUNC_1 (union ctl_io*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (union ctl_io*) ;

__attribute__((used)) static int
FUNC_3(union ctl_io *VAR_4)
{
 struct ctl_lun *VAR_5 = FUNC_1(VAR_4);
 struct ctl_scsiio *VAR_6;
 struct ctl_lba_len_flags *VAR_7;
 int VAR_8;

 VAR_6 = &VAR_4->scsiio;
 VAR_6->io_hdr.status = VAR_2;
 VAR_7 = (struct ctl_lba_len_flags *)
     &VAR_6->io_hdr.ctl_private[VAR_1];
 VAR_7->lba += VAR_7->len;
 if ((VAR_5->be_lun->maxlba + 1) - VAR_7->lba <= VAR_3) {
  VAR_6->io_hdr.flags &= ~VAR_0;
  VAR_7->len = (VAR_5->be_lun->maxlba + 1) - VAR_7->lba;
 }

 FUNC_0(("ctl_write_same_cont: calling config_write()\n"));
 VAR_8 = VAR_5->backend->config_write((union ctl_io *)VAR_6);
 return (VAR_8);
}
