
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct scsi_sense_data_fixed {int add_sense_code_qual; int add_sense_code; int flags; } ;
struct ctio_descr {scalar_t__ offset; struct ccb_accept_tio* atio; } ;
struct TYPE_4__ {int flags; scalar_t__ targ_descr; } ;
struct ccb_scsiio {int init_id; TYPE_1__ ccb_h; int tag_id; } ;
struct TYPE_6__ {int status; scalar_t__ targ_descr; } ;
struct ccb_accept_tio {int sense_len; TYPE_3__ ccb_h; int sense_data; int init_id; int tag_id; } ;
struct atio_descr {int flags; scalar_t__ base_off; scalar_t__ init_req; scalar_t__ targ_req; } ;
typedef int cam_status ;
struct TYPE_5__ {int tqe; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (int *,TYPE_3__*,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_5 ;
 struct ccb_scsiio* FUNC_2 () ;
 TYPE_2__ VAR_6 ;
 int FUNC_3 (union ccb*,int) ;
 int FUNC_4 (struct ccb_accept_tio*,struct ccb_scsiio*,int ) ;
 int FUNC_5 (int ,struct ccb_scsiio*,int ,int ,int ) ;
 int FUNC_6 (char*,struct atio_descr*) ;
 int FUNC_7 (char*,...) ;
 int VAR_7 ;

int
FUNC_8(struct ccb_accept_tio *VAR_8)
{
 struct ccb_scsiio *VAR_9;
 struct atio_descr *VAR_10;
 struct ctio_descr *VAR_11;
 cam_status VAR_12;
 int VAR_13;

 if (VAR_5)
  FUNC_7("Working on ATIO %p", VAR_8);

 VAR_10 = (struct atio_descr *)VAR_8->ccb_h.targ_descr;


 VAR_9 = FUNC_2();
 if (VAR_9 == ((void*)0)) {
  return (1);
 }
 VAR_13 = 0;
 VAR_9->ccb_h.flags = VAR_10->flags;
 VAR_9->tag_id = VAR_8->tag_id;
 VAR_9->init_id = VAR_8->init_id;

 VAR_11 = (struct ctio_descr *)VAR_9->ccb_h.targ_descr;
 VAR_11->atio = VAR_8;
 if ((VAR_10->flags & VAR_1) != 0)
  VAR_11->offset = VAR_10->base_off + VAR_10->targ_req;
 else if ((VAR_10->flags & VAR_2) == VAR_3)
  VAR_11->offset = VAR_10->base_off + VAR_10->init_req;
 else
  VAR_11->offset = VAR_10->base_off;





 if (VAR_8->sense_len != 0) {
  struct scsi_sense_data_fixed *VAR_14;

  if (VAR_5) {
   FUNC_7("ATIO with %u bytes sense received",
         VAR_8->sense_len);
  }
  VAR_14 = (struct scsi_sense_data_fixed *)&VAR_8->sense_data;
  FUNC_5(VAR_9->init_id, VAR_9, VAR_14->flags,
      VAR_14->add_sense_code, VAR_14->add_sense_code_qual);
  FUNC_3((union ccb *)VAR_9, 1);
  return (0);
 }

 VAR_12 = VAR_8->ccb_h.status & VAR_4;
 switch (VAR_12) {
 case 129:
  VAR_13 = FUNC_4(VAR_8, VAR_9, VAR_0);
  break;
 case 128:
  FUNC_6("ATIO %p aborted", VAR_10);

  FUNC_0(&VAR_7, &VAR_8->ccb_h, VAR_6.tqe);
  FUNC_3((union ccb *)VAR_8, 1);
  VAR_13 = 1;
  break;
 default:
  FUNC_7("ATIO completed with unhandled status %#x", VAR_12);
  FUNC_1();

  break;
 }

 return (VAR_13);
}
