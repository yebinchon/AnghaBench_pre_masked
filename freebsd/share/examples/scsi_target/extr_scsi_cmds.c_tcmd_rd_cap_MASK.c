
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_read_capacity_data {int length; int addr; } ;
struct TYPE_4__ {int flags; } ;
struct ccb_scsiio {int dxfer_len; int scsi_status; TYPE_2__ ccb_h; scalar_t__ data_ptr; } ;
struct TYPE_3__ {scalar_t__ targ_descr; } ;
struct ccb_accept_tio {int init_id; TYPE_1__ ccb_h; } ;
struct atio_descr {int cdb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_read_capacity_data*,int) ;
 int FUNC_1 (int ,char*,int ,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(struct ccb_accept_tio *VAR_6, struct ccb_scsiio *VAR_7)
{
 struct scsi_read_capacity_data *VAR_8;
 struct atio_descr *VAR_9;
 uint32_t VAR_10;

 VAR_9 = (struct atio_descr *)VAR_6->ccb_h.targ_descr;
 VAR_8 = (struct scsi_read_capacity_data *)VAR_7->data_ptr;

 if (VAR_5 > 0xffffffff)
  VAR_10 = 0xffffffff;
 else
  VAR_10 = (uint32_t)(VAR_5 - 1);

 if (VAR_3) {
  FUNC_1(VAR_9->cdb, "READ CAP from %u (%u, %u): ",
     VAR_6->init_id, VAR_10, VAR_4);
 }

 FUNC_0(VAR_8, sizeof(*VAR_8));
 FUNC_2(VAR_10, VAR_8->addr);
 FUNC_2(VAR_4, VAR_8->length);

 VAR_7->dxfer_len = sizeof(*VAR_8);
 VAR_7->ccb_h.flags |= VAR_0 | VAR_1;
 VAR_7->scsi_status = VAR_2;
 return (0);
}
