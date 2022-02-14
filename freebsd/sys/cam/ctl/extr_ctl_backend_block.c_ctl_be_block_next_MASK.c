
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int status; } ;
union ctl_io {TYPE_1__ io_hdr; } ;
struct ctl_be_block_lun {int io_task; int io_taskqueue; int queue_lock; int input_queue; } ;
struct ctl_be_block_io {struct ctl_be_block_lun* lun; union ctl_io* io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_be_block_io*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct ctl_be_block_io *VAR_5)
{
 struct ctl_be_block_lun *VAR_6;
 union ctl_io *VAR_7;

 VAR_7 = VAR_5->io;
 VAR_6 = VAR_5->lun;
 FUNC_2(VAR_5);
 if ((VAR_7->io_hdr.flags & VAR_0) ||
     ((VAR_7->io_hdr.status & VAR_1) != VAR_2 &&
      (VAR_7->io_hdr.status & VAR_1) != VAR_3)) {
  FUNC_1(VAR_7);
  return;
 }

 VAR_7->io_hdr.status &= ~VAR_1;
 VAR_7->io_hdr.status |= VAR_2;

 FUNC_3(&VAR_6->queue_lock);
 FUNC_0(&VAR_6->input_queue, &VAR_7->io_hdr, VAR_4);
 FUNC_4(&VAR_6->queue_lock);
 FUNC_5(VAR_6->io_taskqueue, &VAR_6->io_task);
}
