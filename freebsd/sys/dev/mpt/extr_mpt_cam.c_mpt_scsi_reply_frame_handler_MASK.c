
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int flags; int status; } ;
struct TYPE_9__ {scalar_t__ dxfer_len; scalar_t__ sense_len; int scsi_status; int sense_data; scalar_t__ sense_resid; scalar_t__ resid; } ;
union ccb {TYPE_2__ ccb_h; TYPE_1__ csio; } ;
typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct mpt_softc {int dummy; } ;
struct TYPE_11__ {int sense_vbuf; union ccb* ccb; } ;
typedef TYPE_3__ request_t ;
struct TYPE_13__ {scalar_t__ Function; int MsgFlags; } ;
struct TYPE_12__ {int SCSIState; int SCSIStatus; int TransferCount; int SenseCount; int IOCStatus; } ;
typedef TYPE_4__ MSG_SCSI_IO_REPLY ;
typedef TYPE_5__ MSG_DEFAULT_REPLY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;







 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (struct mpt_softc*,TYPE_5__*) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (union ccb*,int) ;

__attribute__((used)) static int
FUNC_9(struct mpt_softc *VAR_33, request_t *VAR_34,
        MSG_DEFAULT_REPLY *VAR_35)
{
 union ccb *VAR_36;
 MSG_SCSI_IO_REPLY *VAR_37;
 u_int VAR_38;
 u_int VAR_39;

 FUNC_1(VAR_33, VAR_35);
 FUNC_0(VAR_35->Function == VAR_23
      || VAR_35->Function == VAR_22,
  ("MPT SCSI I/O Handler called with incorrect reply type"));
 FUNC_0((VAR_35->MsgFlags & VAR_25) == 0,
  ("MPT SCSI I/O Handler called with continuation reply"));

 VAR_37 = (MSG_SCSI_IO_REPLY *)VAR_35;
 VAR_38 = FUNC_4(VAR_37->IOCStatus);
 VAR_38 &= VAR_24;
 VAR_39 = VAR_37->SCSIState;

 VAR_36 = VAR_34->ccb;
 VAR_36->csio.resid =
     VAR_36->csio.dxfer_len - FUNC_5(VAR_37->TransferCount);

 if ((VAR_39 & VAR_27) != 0
  && (VAR_36->ccb_h.flags & (VAR_13 | VAR_14)) == 0) {
  uint32_t VAR_40;

  VAR_36->ccb_h.status |= VAR_1;

  VAR_40 = FUNC_5(VAR_37->SenseCount);
  if (VAR_40 < VAR_36->csio.sense_len)
   VAR_36->csio.sense_resid = VAR_36->csio.sense_len -
      VAR_40;
  else
   VAR_36->csio.sense_resid = 0;

  FUNC_3(&VAR_36->csio.sense_data, sizeof(VAR_36->csio.sense_data));
  FUNC_2(VAR_34->sense_vbuf, &VAR_36->csio.sense_data,
      FUNC_6(VAR_36->csio.sense_len, VAR_40));
 }

 if ((VAR_39 & VAR_29) != 0) {






 }

 switch(VAR_38) {
 case 131:
  if (VAR_37->TransferCount == 0) {
   FUNC_8(VAR_36, VAR_19);
   break;
  }

 case 140:
 case 128:
 case 132:
  if ((VAR_39 & VAR_28) != 0) {



   FUNC_8(VAR_36, VAR_20);
  } else if (VAR_37->SCSIStatus != VAR_31) {
   VAR_36->csio.scsi_status = VAR_37->SCSIStatus;
   FUNC_8(VAR_36, VAR_11);
   if ((VAR_39 & VAR_26) != 0)
    FUNC_8(VAR_36, VAR_0);
  } else if ((VAR_39 & VAR_30) != 0) {


   FUNC_8(VAR_36, VAR_6);
  } else
   FUNC_8(VAR_36, VAR_5);
  break;
 case 141:
  FUNC_8(VAR_36, VAR_3);
  break;
 case 134:
  FUNC_8(VAR_36, VAR_19);
  break;
 case 139:
  FUNC_8(VAR_36, VAR_12);
  break;
 case 133:
  FUNC_8(VAR_36, VAR_15);
  break;
 case 137:
  FUNC_8(VAR_36, VAR_4);
  break;
 case 136:
  FUNC_8(VAR_36, VAR_17);
  break;
 case 130:
  VAR_36->ccb_h.status = VAR_18;
  break;
 case 142:




 case 138:
  VAR_36->ccb_h.status = VAR_10;
  break;
 case 129:
 case 135:







  if ((VAR_36->ccb_h.status & VAR_16) != VAR_7)
   break;
  FUNC_8(VAR_36, VAR_8);
  break;

 case 147:
  FUNC_8(VAR_36, VAR_9);
  break;
 case 148:
  FUNC_8(VAR_36, VAR_2);
  break;
 case 144:
 case 143:
 case 146:
 case 145:
 default:




  VAR_36->ccb_h.status = VAR_21;
  break;
 }

 if ((VAR_36->ccb_h.status & VAR_16) != VAR_5) {
  FUNC_7(VAR_36);
 }

 return (VAR_32);
}
