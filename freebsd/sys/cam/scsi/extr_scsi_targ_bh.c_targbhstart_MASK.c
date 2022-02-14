
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct ccb_accept_tio* ccb_atio; int ccb_type; int target_lun; int target_id; } ;
struct ccb_scsiio {int sense_data; scalar_t__ sense_len; } ;
union ccb {TYPE_1__ ccb_h; struct ccb_scsiio csio; } ;
struct targbh_softc {int work_queue; int pending_queue; } ;
struct targbh_cmd_desc {scalar_t__ data_resid; scalar_t__ data_increment; int timeout; int * data; int status; } ;
struct ccb_hdr {int dummy; } ;
struct TYPE_5__ {int flags; int status; int target_lun; int target_id; scalar_t__ ccb_descr; } ;
struct ccb_accept_tio {TYPE_2__ ccb_h; int init_id; int tag_id; int sense_data; scalar_t__ sense_len; } ;
struct cam_periph {int path; scalar_t__ softc; } ;
typedef int ccb_flags ;
struct TYPE_6__ {int tqe; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ccb_hdr* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ccb_hdr*,int ) ;
 int FUNC_3 (int *,struct ccb_hdr*,int ) ;
 int VAR_9 ;
 int FUNC_4 (struct ccb_scsiio*,int,int ,int,int ,int ,int ,int ,int *,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 TYPE_3__ VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (union ccb*) ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_9(struct cam_periph *VAR_12, union ccb *VAR_13)
{
 struct targbh_softc *VAR_14;
 struct ccb_hdr *VAR_15;
 struct ccb_accept_tio *VAR_16;
 struct targbh_cmd_desc *VAR_17;
 struct ccb_scsiio *VAR_18;
 ccb_flags VAR_19;

 VAR_14 = (struct targbh_softc *)VAR_12->softc;

 VAR_15 = FUNC_1(&VAR_14->work_queue);
 if (VAR_15 == ((void*)0)) {
  FUNC_7(VAR_13);
 } else {
  FUNC_3(&VAR_14->work_queue, VAR_15, VAR_10.tqe);
  FUNC_2(&VAR_14->pending_queue, VAR_15,
      VAR_10.tqe);
  VAR_16 = (struct ccb_accept_tio*)VAR_15;
  VAR_17 = (struct targbh_cmd_desc *)VAR_16->ccb_h.ccb_descr;


  VAR_19 = VAR_16->ccb_h.flags &
      (VAR_3|VAR_7|VAR_2);

  VAR_18 = &VAR_13->csio;






  if (VAR_17->data_resid == VAR_17->data_increment) {
   VAR_19 |= VAR_6;
   if (VAR_16->sense_len) {
    VAR_18->sense_len = VAR_16->sense_len;
    VAR_18->sense_data = VAR_16->sense_data;
    VAR_19 |= VAR_5;
   }

  }

  FUNC_4(VAR_18,
                    2,
         VAR_11,
         VAR_19,
         (VAR_19 & VAR_7)?
    VAR_8 : 0,
         VAR_16->tag_id,
         VAR_16->init_id,
         VAR_17->status,
                     VAR_17->data_increment == 0
       ? ((void*)0) : VAR_17->data,
                      VAR_17->data_increment,
                    VAR_17->timeout);


  VAR_13->ccb_h.target_id = VAR_16->ccb_h.target_id;
  VAR_13->ccb_h.target_lun = VAR_16->ccb_h.target_lun;

  VAR_13->ccb_h.ccb_type = VAR_9;
  VAR_13->ccb_h.ccb_atio = VAR_16;
  FUNC_0(VAR_12->path, VAR_0,
     ("Sending a CTIO\n"));
  FUNC_6(VAR_13);





  if ((VAR_16->ccb_h.status & VAR_1) != 0) {
   FUNC_5(VAR_12->path,
                      0,
                   0,
                 0,
                       0);
   VAR_16->ccb_h.status &= ~VAR_1;
  }
  VAR_15 = FUNC_1(&VAR_14->work_queue);
 }
 if (VAR_15 != ((void*)0))
  FUNC_8(VAR_12, VAR_4);
}
