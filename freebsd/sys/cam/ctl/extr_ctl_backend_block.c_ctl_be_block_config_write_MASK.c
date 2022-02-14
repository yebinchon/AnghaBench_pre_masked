
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cdb; } ;
union ctl_io {TYPE_1__ scsiio; int io_hdr; } ;
struct scsi_start_stop_unit {int how; } ;
struct ctl_lun_req {int dummy; } ;
struct ctl_be_lun {int flags; scalar_t__ be_lun; } ;
struct ctl_be_block_lun {int * vn; int io_task; int io_taskqueue; int queue_lock; int config_write_queue; } ;


 struct ctl_be_lun* FUNC_0 (union ctl_io*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,int ) ;






 int FUNC_3 (struct ctl_be_block_lun*) ;
 int FUNC_4 (struct ctl_be_block_lun*,struct ctl_lun_req*) ;
 int FUNC_5 (union ctl_io*) ;
 int FUNC_6 (struct ctl_be_lun*) ;
 int FUNC_7 (struct ctl_be_lun*) ;
 int FUNC_8 (struct ctl_be_lun*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct ctl_be_lun*) ;
 int FUNC_12 (struct ctl_be_lun*) ;
 int VAR_6 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int
FUNC_16(union ctl_io *VAR_7)
{
 struct ctl_be_block_lun *VAR_8;
 struct ctl_be_lun *VAR_9;
 int VAR_10;

 FUNC_1("entered\n");

 VAR_9 = FUNC_0(VAR_7);
 VAR_8 = (struct ctl_be_block_lun *)VAR_9->be_lun;

 VAR_10 = 0;
 switch (VAR_7->scsiio.cdb[0]) {
 case 132:
 case 131:
 case 129:
 case 128:
 case 130:
  FUNC_13(&VAR_8->queue_lock);
  FUNC_2(&VAR_8->config_write_queue, &VAR_7->io_hdr,
       VAR_6);
  FUNC_14(&VAR_8->queue_lock);
  FUNC_15(VAR_8->io_taskqueue, &VAR_8->io_task);
  break;
 case 133: {
  struct scsi_start_stop_unit *VAR_11;
  struct ctl_lun_req VAR_12;

  VAR_11 = (struct scsi_start_stop_unit *)VAR_7->scsiio.cdb;
  if ((VAR_11->how & VAR_4) != 0) {
   FUNC_10(&VAR_7->scsiio);
   FUNC_5(VAR_7);
   break;
  }
  if (VAR_11->how & VAR_5) {
   if ((VAR_11->how & VAR_3) && VAR_8->vn == ((void*)0)) {
    VAR_10 = FUNC_4(VAR_8, &VAR_12);
    VAR_9->flags &= ~VAR_0;
    if (VAR_10 == 0) {
     VAR_9->flags &= ~VAR_1;
     FUNC_7(VAR_9);
    } else {
     VAR_9->flags |= VAR_1;
     FUNC_8(VAR_9);
    }
   }
   FUNC_11(VAR_9);
  } else {
   FUNC_12(VAR_9);
   if (VAR_11->how & VAR_3) {
    VAR_9->flags |= VAR_1;
    VAR_9->flags |= VAR_0;
    FUNC_6(VAR_9);
    if (VAR_8->vn != ((void*)0))
     FUNC_3(VAR_8);
   }
  }

  FUNC_10(&VAR_7->scsiio);
  FUNC_5(VAR_7);
  break;
 }
 case 134:
  FUNC_10(&VAR_7->scsiio);
  FUNC_5(VAR_7);
  break;
 default:
  FUNC_9(&VAR_7->scsiio);
  FUNC_5(VAR_7);
  VAR_10 = VAR_2;
  break;
 }

 return (VAR_10);
}
