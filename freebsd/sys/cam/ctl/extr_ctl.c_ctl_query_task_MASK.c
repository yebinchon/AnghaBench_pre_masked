
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tag_num; int task_status; } ;
struct TYPE_6__ {scalar_t__ tag_num; } ;
struct TYPE_5__ {size_t targ_mapped_lun; scalar_t__ targ_port; scalar_t__ initid; } ;
struct TYPE_8__ {int flags; TYPE_1__ nexus; } ;
union ctl_io {TYPE_3__ taskio; TYPE_2__ scsiio; TYPE_4__ io_hdr; } ;
typedef size_t uint32_t ;
struct ctl_softc {int ctl_lock; struct ctl_lun** ctl_luns; } ;
struct ctl_lun {int lun_lock; int ooa_queue; } ;


 int VAR_0 ;
 struct ctl_softc* FUNC_0 (union ctl_io*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 size_t VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(union ctl_io *VAR_6, int VAR_7)
{
 struct ctl_softc *VAR_8 = FUNC_0(VAR_6);
 union ctl_io *VAR_9;
 struct ctl_lun *VAR_10;
 int VAR_11 = 0;
 uint32_t VAR_12;

 VAR_12 = VAR_6->io_hdr.nexus.targ_mapped_lun;
 FUNC_3(&VAR_8->ctl_lock);
 if (VAR_12 >= VAR_4 ||
     (VAR_10 = VAR_8->ctl_luns[VAR_12]) == ((void*)0)) {
  FUNC_4(&VAR_8->ctl_lock);
  VAR_6->taskio.task_status = VAR_3;
  return (1);
 }
 FUNC_3(&VAR_10->lun_lock);
 FUNC_4(&VAR_8->ctl_lock);
 for (VAR_9 = (union ctl_io *)FUNC_1(&VAR_10->ooa_queue); VAR_9 != ((void*)0);
      VAR_9 = (union ctl_io *)FUNC_2(&VAR_9->io_hdr, VAR_5)) {

  if ((VAR_9->io_hdr.nexus.targ_port != VAR_6->io_hdr.nexus.targ_port)
   || (VAR_9->io_hdr.nexus.initid != VAR_6->io_hdr.nexus.initid)
   || (VAR_9->io_hdr.flags & VAR_0))
   continue;

  if (VAR_7 || VAR_9->scsiio.tag_num == VAR_6->taskio.tag_num) {
   VAR_11 = 1;
   break;
  }
 }
 FUNC_4(&VAR_10->lun_lock);
 if (VAR_11)
  VAR_6->taskio.task_status = VAR_2;
 else
  VAR_6->taskio.task_status = VAR_1;
 return (0);
}
