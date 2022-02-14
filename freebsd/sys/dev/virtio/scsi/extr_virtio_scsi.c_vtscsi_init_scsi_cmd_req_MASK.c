
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct virtio_scsi_cmd_req {uintptr_t tag; int cdb; int task_attr; int lun; } ;
struct TYPE_3__ {int cdb_bytes; int cdb_ptr; } ;
struct TYPE_4__ {int flags; } ;
struct ccb_scsiio {int tag_action; int cdb_len; TYPE_1__ cdb_io; TYPE_2__ ccb_h; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ccb_scsiio *VAR_5,
    struct virtio_scsi_cmd_req *VAR_6)
{
 uint8_t VAR_7;

 switch (VAR_5->tag_action) {
 case 129:
  VAR_7 = VAR_2;
  break;
 case 128:
  VAR_7 = VAR_3;
  break;
 case 130:
  VAR_7 = VAR_1;
  break;
 default:
  VAR_7 = VAR_4;
  break;
 }

 FUNC_1(&VAR_5->ccb_h, VAR_6->lun);
 VAR_6->tag = (uintptr_t) VAR_5;
 VAR_6->task_attr = VAR_7;

 FUNC_0(VAR_6->cdb,
     VAR_5->ccb_h.flags & VAR_0 ?
         VAR_5->cdb_io.cdb_ptr : VAR_5->cdb_io.cdb_bytes,
     VAR_5->cdb_len);
}
