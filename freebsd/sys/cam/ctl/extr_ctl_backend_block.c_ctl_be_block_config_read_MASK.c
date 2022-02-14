
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cdb; } ;
union ctl_io {TYPE_1__ scsiio; int io_hdr; } ;
struct ctl_be_lun {scalar_t__ be_lun; } ;
struct ctl_be_block_lun {int io_task; int io_taskqueue; int queue_lock; int config_read_queue; } ;


 struct ctl_be_lun* FUNC_0 (union ctl_io*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

 int VAR_2 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (TYPE_1__*,int,int,int,int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int
FUNC_9(union ctl_io *VAR_4)
{
 struct ctl_be_block_lun *VAR_5;
 struct ctl_be_lun *VAR_6;
 int VAR_7 = 0;

 FUNC_1("entered\n");

 VAR_6 = FUNC_0(VAR_4);
 VAR_5 = (struct ctl_be_block_lun *)VAR_6->be_lun;

 switch (VAR_4->scsiio.cdb[0]) {
 case 128:
  if (VAR_4->scsiio.cdb[1] == VAR_2) {
   FUNC_6(&VAR_5->queue_lock);
   FUNC_2(&VAR_5->config_read_queue,
       &VAR_4->io_hdr, VAR_3);
   FUNC_7(&VAR_5->queue_lock);
   FUNC_8(VAR_5->io_taskqueue,
       &VAR_5->io_task);
   VAR_7 = VAR_1;
   break;
  }
  FUNC_4(&VAR_4->scsiio,
                        1,
                      1,
                    1,
                        1,
                  4);
  FUNC_3(VAR_4);
  VAR_7 = VAR_0;
  break;
 default:
  FUNC_5(&VAR_4->scsiio);
  FUNC_3(VAR_4);
  VAR_7 = VAR_0;
  break;
 }

 return (VAR_7);
}
