
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int nexus; } ;
struct ctl_scsiio {TYPE_1__ io_hdr; } ;
struct ctl_lun {int flags; scalar_t__ res_idx; int lun_lock; } ;


 int FUNC_0 (char*) ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (union ctl_io*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct ctl_scsiio*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct ctl_scsiio *VAR_2)
{
 struct ctl_lun *VAR_3 = FUNC_1(VAR_2);
 uint32_t VAR_4;

 FUNC_0(("ctl_scsi_release\n"));

 VAR_4 = FUNC_3(&VAR_2->io_hdr.nexus);
 FUNC_5(&VAR_3->lun_lock);
 if ((VAR_3->flags & VAR_0) && (VAR_3->res_idx == VAR_4))
   VAR_3->flags &= ~VAR_0;

 FUNC_6(&VAR_3->lun_lock);

 FUNC_4(VAR_2);
 FUNC_2((union ctl_io *)VAR_2);
 return (VAR_1);
}
