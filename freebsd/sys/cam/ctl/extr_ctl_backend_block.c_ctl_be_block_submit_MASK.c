
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ io_type; } ;
union ctl_io {TYPE_1__ io_hdr; } ;
struct ctl_be_lun {scalar_t__ be_lun; } ;
struct ctl_be_block_lun {int io_task; int io_taskqueue; int queue_lock; int input_queue; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 struct ctl_be_lun* FUNC_0 (union ctl_io*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 TYPE_2__* FUNC_3 (union ctl_io*) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int
FUNC_8(union ctl_io *VAR_3)
{
 struct ctl_be_block_lun *VAR_4;
 struct ctl_be_lun *VAR_5;

 FUNC_1("entered\n");

 VAR_5 = FUNC_0(VAR_3);
 VAR_4 = (struct ctl_be_block_lun *)VAR_5->be_lun;




 FUNC_2(VAR_3->io_hdr.io_type == VAR_0, ("Non-SCSI I/O (type "
  "%#x) encountered", VAR_3->io_hdr.io_type));

 FUNC_3(VAR_3)->len = 0;

 FUNC_5(&VAR_4->queue_lock);
 FUNC_4(&VAR_4->input_queue, &VAR_3->io_hdr, VAR_2);
 FUNC_6(&VAR_4->queue_lock);
 FUNC_7(VAR_4->io_taskqueue, &VAR_4->io_task);

 return (VAR_1);
}
