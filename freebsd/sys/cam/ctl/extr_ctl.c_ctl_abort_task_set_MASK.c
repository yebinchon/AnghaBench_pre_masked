
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ task_action; int task_status; } ;
struct TYPE_4__ {size_t targ_mapped_lun; int initid; int targ_port; } ;
struct TYPE_5__ {int flags; TYPE_1__ nexus; } ;
union ctl_io {TYPE_3__ taskio; TYPE_2__ io_hdr; } ;
typedef size_t uint32_t ;
struct ctl_softc {int ctl_lock; struct ctl_lun** ctl_luns; } ;
struct ctl_lun {int lun_lock; } ;


 int VAR_0 ;
 struct ctl_softc* FUNC_0 (union ctl_io*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ctl_lun*,int ,int ,int) ;
 size_t VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(union ctl_io *VAR_6)
{
 struct ctl_softc *VAR_7 = FUNC_0(VAR_6);
 struct ctl_lun *VAR_8;
 uint32_t VAR_9;




 VAR_9 = VAR_6->io_hdr.nexus.targ_mapped_lun;
 FUNC_2(&VAR_7->ctl_lock);
 if (VAR_9 >= VAR_5 ||
     (VAR_8 = VAR_7->ctl_luns[VAR_9]) == ((void*)0)) {
  FUNC_3(&VAR_7->ctl_lock);
  VAR_6->taskio.task_status = VAR_3;
  return (1);
 }

 FUNC_2(&VAR_8->lun_lock);
 FUNC_3(&VAR_7->ctl_lock);
 if (VAR_6->taskio.task_action == VAR_1) {
  FUNC_1(VAR_8, VAR_6->io_hdr.nexus.targ_port,
      VAR_6->io_hdr.nexus.initid,
      (VAR_6->io_hdr.flags & VAR_0) != 0);
 } else {
  FUNC_1(VAR_8, VAR_4, VAR_4,
      (VAR_6->io_hdr.flags & VAR_0) != 0);
 }
 FUNC_3(&VAR_8->lun_lock);
 VAR_6->taskio.task_status = VAR_2;
 return (0);
}
