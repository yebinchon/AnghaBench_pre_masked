
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sense_len; int sense_data; int scsi_status; scalar_t__ ext_data_filled; } ;
struct TYPE_7__ {int status; TYPE_1__* ctl_private; } ;
union ctl_io {TYPE_3__ scsiio; TYPE_2__ io_hdr; } ;
struct TYPE_10__ {scalar_t__ func_code; int status; int path; } ;
struct TYPE_9__ {scalar_t__ sense_len; scalar_t__ sense_resid; int sense_data; int scsi_status; scalar_t__ dxfer_len; scalar_t__ resid; } ;
union ccb {TYPE_5__ ccb_h; TYPE_4__ csio; } ;
struct TYPE_6__ {union ccb* ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 size_t VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;

 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *,int *,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (union ctl_io*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(union ctl_io *VAR_12)
{
 union ccb *VAR_13;

 VAR_13 = VAR_12->io_hdr.ctl_private[VAR_7].ptr;
 if (VAR_13 == ((void*)0)) {
  FUNC_2(VAR_12);
  return;
 }




 FUNC_0(((VAR_12->io_hdr.status & VAR_8) != VAR_9),
  ("invalid CTL status %#x", VAR_12->io_hdr.status));




 if (VAR_13->ccb_h.func_code == VAR_10) {
  VAR_13->csio.resid = VAR_13->csio.dxfer_len -
      VAR_12->scsiio.ext_data_filled;
 }
 VAR_13->ccb_h.status &= ~VAR_6;
 switch (VAR_12->io_hdr.status & VAR_8) {
 case 128:
  VAR_13->ccb_h.status |= VAR_3;
  break;
 case 129:
  VAR_13->ccb_h.status |= VAR_5 | VAR_0;
  VAR_13->csio.scsi_status = VAR_12->scsiio.scsi_status;
  FUNC_1(&VAR_12->scsiio.sense_data, &VAR_13->csio.sense_data,
        FUNC_3(VAR_12->scsiio.sense_len, VAR_13->csio.sense_len));
  if (VAR_13->csio.sense_len > VAR_12->scsiio.sense_len)
   VAR_13->csio.sense_resid = VAR_13->csio.sense_len -
      VAR_12->scsiio.sense_len;
  else
   VAR_13->csio.sense_resid = 0;
  if ((VAR_13->csio.sense_len - VAR_13->csio.sense_resid) >
       VAR_11) {
   VAR_13->csio.sense_resid = VAR_13->csio.sense_len -
      VAR_11;
  }
  break;
 case 131:
  VAR_13->ccb_h.status |= VAR_2;
  break;
 case 130:
 default:
  VAR_13->ccb_h.status |= VAR_4;
  break;
 }
 FUNC_2(VAR_12);
 if ((VAR_13->ccb_h.status & VAR_6) != VAR_3 &&
     (VAR_13->ccb_h.status & VAR_1) == 0) {
  FUNC_5(VAR_13->ccb_h.path, 1);
  VAR_13->ccb_h.status |= VAR_1;
 }
 FUNC_4(VAR_13);
}
