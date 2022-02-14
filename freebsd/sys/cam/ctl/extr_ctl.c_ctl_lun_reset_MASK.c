
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {size_t targ_mapped_lun; } ;
struct TYPE_7__ {int flags; TYPE_5__ nexus; } ;
struct TYPE_6__ {int task_status; } ;
union ctl_io {TYPE_2__ io_hdr; TYPE_1__ taskio; } ;
struct TYPE_9__ {int * serializing_sc; int * original_sc; TYPE_5__ nexus; int msg_type; } ;
struct TYPE_8__ {int task_action; } ;
union ctl_ha_msg {TYPE_4__ hdr; TYPE_3__ task; } ;
typedef size_t uint32_t ;
struct ctl_softc {int ctl_lock; struct ctl_lun** ctl_luns; } ;
struct ctl_lun {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ctl_softc* FUNC_0 (union ctl_io*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ctl_lun*,size_t,int ) ;
 size_t FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,union ctl_ha_msg*,int,int ) ;
 size_t VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(union ctl_io *VAR_9)
{
 struct ctl_softc *VAR_10 = FUNC_0(VAR_9);
 struct ctl_lun *VAR_11;
 uint32_t VAR_12, VAR_13;

 VAR_12 = VAR_9->io_hdr.nexus.targ_mapped_lun;
 VAR_13 = FUNC_2(&VAR_9->io_hdr.nexus);
 FUNC_4(&VAR_10->ctl_lock);
 if (VAR_12 >= VAR_8 ||
     (VAR_11 = VAR_10->ctl_luns[VAR_12]) == ((void*)0)) {
  FUNC_5(&VAR_10->ctl_lock);
  VAR_9->taskio.task_status = VAR_4;
  return (1);
 }
 FUNC_1(VAR_11, VAR_13, VAR_6);
 FUNC_5(&VAR_10->ctl_lock);
 VAR_9->taskio.task_status = VAR_3;

 if ((VAR_9->io_hdr.flags & VAR_0) == 0) {
  union ctl_ha_msg VAR_14;

  VAR_14.hdr.msg_type = VAR_2;
  VAR_14.hdr.nexus = VAR_9->io_hdr.nexus;
  VAR_14.task.task_action = VAR_5;
  VAR_14.hdr.original_sc = ((void*)0);
  VAR_14.hdr.serializing_sc = ((void*)0);
  FUNC_3(VAR_1, &VAR_14,
      sizeof(VAR_14.task), VAR_7);
 }
 return (0);
}
