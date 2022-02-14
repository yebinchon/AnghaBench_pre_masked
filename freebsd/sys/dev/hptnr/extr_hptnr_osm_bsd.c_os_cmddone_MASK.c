
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int flags; void* status; } ;
struct TYPE_13__ {int* cdb_ptr; int* cdb_bytes; } ;
struct TYPE_15__ {int sense_data; TYPE_1__ cdb_io; } ;
union ccb {TYPE_4__ ccb_h; TYPE_3__ csio; } ;
struct TYPE_17__ {scalar_t__ data_out; scalar_t__ data_in; } ;
struct TYPE_19__ {int bSectorCountReg; int bLbaLowReg; int bLbaMidReg; int bLbaHighReg; int bFeaturesReg; int bDriveHeadReg; int bCommandReg; } ;
struct TYPE_14__ {TYPE_7__ Passthrough; } ;
struct TYPE_21__ {int Result; TYPE_5__ flags; TYPE_2__ uCmd; int priv; } ;
struct TYPE_20__ {int dma_map; TYPE_6__* vbus_ext; int timeout; union ccb* ccb; } ;
struct TYPE_18__ {int io_dmat; } ;
typedef TYPE_7__ PassthroughCmd ;
typedef TYPE_8__* POS_CMDEXT ;
typedef TYPE_9__* PCOMMAND ;
typedef int HPT_U8 ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (char*) ;






 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static void FUNC_8(PCOMMAND VAR_9)
{
 POS_CMDEXT VAR_10 = (POS_CMDEXT)VAR_9->priv;
 union ccb *VAR_11 = VAR_10->ccb;
 HPT_U8 *VAR_12;

 if (VAR_11->ccb_h.flags & VAR_3)
  VAR_12 = VAR_11->csio.cdb_io.cdb_ptr;
 else
  VAR_12 = VAR_11->csio.cdb_io.cdb_bytes;

 FUNC_0(("os_cmddone(%p, %d)", VAR_9, VAR_9->Result));

 FUNC_3(&VAR_10->timeout);
 switch(VAR_12[0]) {
  case 0x85:
  case 0xA1:
  {
   PassthroughCmd *VAR_13 = &VAR_9->uCmd.Passthrough;
   HPT_U8 *VAR_14 = (HPT_U8 *)&VAR_11->csio.sense_data;
   FUNC_6(&VAR_11->csio.sense_data, 0,sizeof(VAR_11->csio.sense_data));

   VAR_14[0] = 0x72;
   VAR_14[7] = 14;

   VAR_14[8] = 0x9;
   VAR_14[9] = 0xc;
   VAR_14[11] = (HPT_U8)VAR_13->bFeaturesReg;
   VAR_14[13] = (HPT_U8)VAR_13->bSectorCountReg;
   VAR_14[15] = (HPT_U8)VAR_13->bLbaLowReg;
   VAR_14[17] = (HPT_U8)VAR_13->bLbaMidReg;
   VAR_14[19] = (HPT_U8)VAR_13->bLbaHighReg;

   if ((VAR_12[0] == 0x85) && (VAR_12[1] & 0x1))
   {
    VAR_14[10] = 1;
    VAR_14[12] = (HPT_U8)(VAR_13->bSectorCountReg >> 8);
    VAR_14[14] = (HPT_U8)(VAR_13->bLbaLowReg >> 8);
    VAR_14[16] = (HPT_U8)(VAR_13->bLbaMidReg >> 8);
    VAR_14[18] = (HPT_U8)(VAR_13->bLbaHighReg >> 8);
   }

   VAR_14[20] = (HPT_U8)VAR_13->bDriveHeadReg;
   VAR_14[21] = (HPT_U8)VAR_13->bCommandReg;
   FUNC_0(("sts 0x%x err 0x%x low 0x%x mid 0x%x hig 0x%x dh 0x%x sc 0x%x",
      VAR_13->bCommandReg,
      VAR_13->bFeaturesReg,
      VAR_13->bLbaLowReg,
      VAR_13->bLbaMidReg,
      VAR_13->bLbaHighReg,
      VAR_13->bDriveHeadReg,
      VAR_13->bSectorCountReg));
   FUNC_0(("result:0x%x,bFeaturesReg:0x%04x,bSectorCountReg:0x%04x,LBA:0x%04x%04x%04x ",
    VAR_9->Result,VAR_13->bFeaturesReg,VAR_13->bSectorCountReg,
    VAR_13->bLbaHighReg,VAR_13->bLbaMidReg,VAR_13->bLbaLowReg));
  }
  default:
   break;
 }

 switch(VAR_9->Result) {
 case 128:
  VAR_11->ccb_h.status = VAR_5;
  break;
 case 133:
  VAR_11->ccb_h.status = VAR_4;
  break;
 case 132:
  VAR_11->ccb_h.status = VAR_2;
  break;
 case 131:
  VAR_11->ccb_h.status = VAR_6;
  break;
 case 129:
  VAR_11->ccb_h.status = VAR_8;
  break;
 case 130:
  VAR_11->ccb_h.status = VAR_2;
  break;
 default:
  VAR_11->ccb_h.status = VAR_7;
  break;
 }

 if (VAR_9->flags.data_in) {
  FUNC_1(VAR_10->vbus_ext->io_dmat, VAR_10->dma_map, VAR_0);
 }
 else if (VAR_9->flags.data_out) {
  FUNC_1(VAR_10->vbus_ext->io_dmat, VAR_10->dma_map, VAR_1);
 }

 FUNC_2(VAR_10->vbus_ext->io_dmat, VAR_10->dma_map);

 FUNC_4(VAR_10);
 FUNC_5(VAR_9);
 FUNC_7(VAR_11);
}
