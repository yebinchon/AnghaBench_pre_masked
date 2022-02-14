
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint32_t ;
struct scsi_prevent {int how; } ;
struct TYPE_3__ {int nexus; } ;
struct ctl_scsiio {TYPE_1__ io_hdr; scalar_t__ cdb; } ;
struct ctl_lun {int flags; TYPE_2__* backend; int lun_lock; int prevent_count; int * prevent; } ;
struct TYPE_4__ {int (* config_write ) (union ctl_io*) ;} ;


 int FUNC_0 (char*) ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (struct ctl_scsiio*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (union ctl_io*) ;

int
FUNC_11(struct ctl_scsiio *VAR_3)
{
 struct ctl_lun *VAR_4 = FUNC_1(VAR_3);
 struct scsi_prevent *VAR_5;
 int VAR_6;
 uint32_t VAR_7;

 FUNC_0(("ctl_prevent_allow\n"));

 VAR_5 = (struct scsi_prevent *)VAR_3->cdb;

 if ((VAR_4->flags & VAR_0) == 0 || VAR_4->prevent == ((void*)0)) {
  FUNC_6(VAR_3);
  FUNC_3((union ctl_io *)VAR_3);
  return (VAR_1);
 }

 VAR_7 = FUNC_4(&VAR_3->io_hdr.nexus);
 FUNC_8(&VAR_4->lun_lock);
 if ((VAR_5->how & VAR_2) &&
     FUNC_5(VAR_4->prevent, VAR_7) == 0) {
  FUNC_7(VAR_4->prevent, VAR_7);
  VAR_4->prevent_count++;
 } else if ((VAR_5->how & VAR_2) == 0 &&
     FUNC_5(VAR_4->prevent, VAR_7)) {
  FUNC_2(VAR_4->prevent, VAR_7);
  VAR_4->prevent_count--;
 }
 FUNC_9(&VAR_4->lun_lock);
 VAR_6 = VAR_4->backend->config_write((union ctl_io *)VAR_3);
 return (VAR_6);
}
