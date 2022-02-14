
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
 int VAR_2 ;
 int FUNC_2 (union ctl_io*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct ctl_scsiio*) ;
 int FUNC_5 (struct ctl_scsiio*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct ctl_scsiio *VAR_3)
{
 struct ctl_lun *VAR_4 = FUNC_1(VAR_3);
 uint32_t VAR_5;

 FUNC_0(("ctl_reserve\n"));

 VAR_5 = FUNC_3(&VAR_3->io_hdr.nexus);
 FUNC_6(&VAR_4->lun_lock);
 if ((VAR_4->flags & VAR_1) && (VAR_4->res_idx != VAR_5)) {
  FUNC_4(VAR_3);
  goto bailout;
 }


 if (VAR_4->flags & VAR_0) {
  FUNC_5(VAR_3);
  goto bailout;
 }

 VAR_4->flags |= VAR_1;
 VAR_4->res_idx = VAR_5;
 FUNC_5(VAR_3);

bailout:
 FUNC_7(&VAR_4->lun_lock);
 FUNC_2((union ctl_io *)VAR_3);
 return (VAR_2);
}
