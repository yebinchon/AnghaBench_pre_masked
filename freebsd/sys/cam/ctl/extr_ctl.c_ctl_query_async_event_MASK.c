
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int task_status; int task_resp; } ;
struct TYPE_6__ {size_t targ_mapped_lun; } ;
struct TYPE_4__ {TYPE_3__ nexus; } ;
union ctl_io {TYPE_2__ taskio; TYPE_1__ io_hdr; } ;
typedef size_t uint32_t ;
struct ctl_softc {int ctl_lock; struct ctl_lun** ctl_luns; } ;
struct ctl_lun {int lun_lock; } ;
typedef scalar_t__ ctl_ua_type ;


 struct ctl_softc* FUNC_0 (union ctl_io*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct ctl_lun*,size_t,int ) ;
 size_t FUNC_2 (TYPE_3__*) ;
 size_t VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(union ctl_io *VAR_5)
{
 struct ctl_softc *VAR_6 = FUNC_0(VAR_5);
 struct ctl_lun *VAR_7;
 ctl_ua_type VAR_8;
 uint32_t VAR_9, VAR_10;

 VAR_9 = VAR_5->io_hdr.nexus.targ_mapped_lun;
 FUNC_3(&VAR_6->ctl_lock);
 if (VAR_9 >= VAR_4 ||
     (VAR_7 = VAR_6->ctl_luns[VAR_9]) == ((void*)0)) {
  FUNC_4(&VAR_6->ctl_lock);
  VAR_5->taskio.task_status = VAR_2;
  return (1);
 }
 FUNC_3(&VAR_7->lun_lock);
 FUNC_4(&VAR_6->ctl_lock);
 VAR_10 = FUNC_2(&VAR_5->io_hdr.nexus);
 VAR_8 = FUNC_1(VAR_7, VAR_10, VAR_5->taskio.task_resp);
 FUNC_4(&VAR_7->lun_lock);
 if (VAR_8 != VAR_3)
  VAR_5->taskio.task_status = VAR_1;
 else
  VAR_5->taskio.task_status = VAR_0;
 return (0);
}
