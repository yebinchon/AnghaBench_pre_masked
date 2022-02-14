
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int tag_type; int tag_num; } ;
struct TYPE_6__ {scalar_t__ targ_port; scalar_t__ initid; } ;
struct TYPE_10__ {TYPE_1__ nexus; int flags; } ;
union ctl_io {TYPE_3__ scsiio; TYPE_5__ io_hdr; } ;
struct TYPE_9__ {int * serializing_sc; int * original_sc; int msg_type; TYPE_1__ nexus; } ;
struct TYPE_7__ {int tag_type; int tag_num; int task_action; } ;
union ctl_ha_msg {TYPE_4__ hdr; TYPE_2__ task; } ;
typedef scalar_t__ uint32_t ;
struct ctl_lun {int flags; int ooa_queue; int lun_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,union ctl_ha_msg*,int,int ) ;
 int FUNC_3 (struct ctl_lun*,union ctl_io*,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_5(struct ctl_lun *VAR_11, uint32_t VAR_12, uint32_t VAR_13,
    int VAR_14)
{
 union ctl_io *VAR_15;

 FUNC_4(&VAR_11->lun_lock, VAR_7);
 for (VAR_15 = (union ctl_io *)FUNC_0(&VAR_11->ooa_queue); VAR_15 != ((void*)0);
      VAR_15 = (union ctl_io *)FUNC_1(&VAR_15->io_hdr, VAR_10)) {

  if ((VAR_12 == VAR_9 ||
       VAR_12 == VAR_15->io_hdr.nexus.targ_port) &&
      (VAR_13 == VAR_9 ||
       VAR_13 == VAR_15->io_hdr.nexus.initid)) {
   if (VAR_12 != VAR_15->io_hdr.nexus.targ_port ||
       VAR_13 != VAR_15->io_hdr.nexus.initid)
    VAR_15->io_hdr.flags |= VAR_1;
   VAR_15->io_hdr.flags |= VAR_0;
   if (!VAR_14 && !(VAR_11->flags & VAR_3)) {
    union ctl_ha_msg VAR_16;

    VAR_16.hdr.nexus = VAR_15->io_hdr.nexus;
    VAR_16.task.task_action = VAR_5;
    VAR_16.task.tag_num = VAR_15->scsiio.tag_num;
    VAR_16.task.tag_type = VAR_15->scsiio.tag_type;
    VAR_16.hdr.msg_type = VAR_4;
    VAR_16.hdr.original_sc = ((void*)0);
    VAR_16.hdr.serializing_sc = ((void*)0);
    FUNC_2(VAR_2, &VAR_16,
        sizeof(VAR_16.task), VAR_8);
   }
   FUNC_3(VAR_11, VAR_15, VAR_6);
  }
 }
}
