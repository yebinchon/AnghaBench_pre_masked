
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_28__ {int flags; scalar_t__ target_id; scalar_t__ target_lun; void* status; } ;
struct TYPE_26__ {int* cdb_ptr; int* cdb_bytes; } ;
struct TYPE_27__ {int* data_ptr; int dxfer_len; TYPE_4__ cdb_io; } ;
union ccb {TYPE_6__ ccb_h; TYPE_5__ csio; } ;
struct TYPE_31__ {int dma_map; int psg; union ccb* ccb; } ;
struct TYPE_30__ {int io_dmat; int vbus; } ;
struct TYPE_29__ {int target_id; int capacity; int cmds_per_request; } ;
struct TYPE_25__ {int data_in; int data_out; int physical_sg; } ;
struct TYPE_23__ {int Lba; int nSectors; } ;
struct TYPE_24__ {TYPE_1__ Ide; } ;
struct TYPE_22__ {TYPE_3__ flags; int psg; int buildsgl; int done; TYPE_7__* target; TYPE_9__* priv; TYPE_2__ uCmd; } ;
struct TYPE_21__ {int AdditionalLength; int CommandQueue; int* VendorId; int* ProductId; int* ProductRevisionLevel; } ;
typedef TYPE_7__* PVDEV ;
typedef TYPE_8__* PVBUS_EXT ;
typedef int PVBUS ;
typedef TYPE_9__* POS_CMDEXT ;
typedef TYPE_10__* PINQUIRYDATA ;
typedef TYPE_11__* PCOMMAND ;
typedef int HPT_U8 ;
typedef int HPT_U64 ;
typedef int HPT_U32 ;
typedef int HPT_U16 ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_9__*) ;

 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,union ccb*,int ,TYPE_11__*,int ) ;
 TYPE_9__* FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_9__*) ;
 int VAR_10 ;
 TYPE_11__* FUNC_5 (int ,int ) ;
 TYPE_7__* FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (TYPE_11__*) ;
 int FUNC_8 (int**,char*,int) ;
 int FUNC_9 (int*,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (char*,int) ;
 scalar_t__ VAR_13 ;
 int FUNC_11 (union ccb*) ;

__attribute__((used)) static void FUNC_12(PVBUS_EXT VAR_14, union ccb *VAR_15)
{
 PVBUS VAR_16 = (PVBUS)VAR_14->vbus;
 PVDEV VAR_17;
 PCOMMAND VAR_18;
 POS_CMDEXT VAR_19;
 HPT_U8 *VAR_20;

 if (VAR_15->ccb_h.flags & VAR_3)
  VAR_20 = VAR_15->csio.cdb_io.cdb_ptr;
 else
  VAR_20 = VAR_15->csio.cdb_io.cdb_bytes;

 FUNC_1(("hpt_scsi_io: ccb %x id %d lun %d cdb %x-%x-%x",
  VAR_15,
  VAR_15->ccb_h.target_id, VAR_15->ccb_h.target_lun,
  *(HPT_U32 *)&VAR_20[0], *(HPT_U32 *)&VAR_20[4], *(HPT_U32 *)&VAR_20[8]
 ));


 if (VAR_15->ccb_h.target_lun != 0 ||
  VAR_15->ccb_h.target_id >= VAR_13 ||
  (VAR_15->ccb_h.flags & VAR_2))
 {
  VAR_15->ccb_h.status = VAR_8;
  FUNC_11(VAR_15);
  return;
 }

 VAR_17 = FUNC_6(VAR_16, VAR_15->ccb_h.target_id);

 if (!VAR_17) {
  VAR_15->ccb_h.status = VAR_7;
  FUNC_11(VAR_15);
  return;
 }

 switch (VAR_20[0]) {
 case 131:
 case 133:
 case 132:
  VAR_15->ccb_h.status = VAR_4;
  break;

 case 139:
  {
   PINQUIRYDATA VAR_21;
   FUNC_9(VAR_15->csio.data_ptr, 0, VAR_15->csio.dxfer_len);
   VAR_21 = (PINQUIRYDATA)VAR_15->csio.data_ptr;

   VAR_21->AdditionalLength = 31;
   VAR_21->CommandQueue = 1;
   FUNC_8(&VAR_21->VendorId, "HPT     ", 8);
   FUNC_8(&VAR_21->ProductId, "DISK 0_0        ", 16);

   if (VAR_17->target_id / 10) {
    VAR_21->ProductId[7] = (VAR_17->target_id % 100) / 10 + '0';
    VAR_21->ProductId[8] = (VAR_17->target_id % 100) % 10 + '0';
   }
   else
    VAR_21->ProductId[7] = (VAR_17->target_id % 100) % 10 + '0';

   FUNC_8(&VAR_21->ProductRevisionLevel, "4.00", 4);

   VAR_15->ccb_h.status = VAR_4;
  }
  break;

 case 135:
 {
  HPT_U8 *VAR_22 = VAR_15->csio.data_ptr;
  HPT_U32 VAR_23;

  if (VAR_17->capacity>0xfffffffful)
   VAR_23 = 0xfffffffful;
  else
   VAR_23 = VAR_17->capacity - 1;

  VAR_22[0] = (HPT_U8)(VAR_23>>24);
  VAR_22[1] = (HPT_U8)(VAR_23>>16);
  VAR_22[2] = (HPT_U8)(VAR_23>>8);
  VAR_22[3] = (HPT_U8)VAR_23;
  VAR_22[4] = 0;
  VAR_22[5] = 0;
  VAR_22[6] = 2;
  VAR_22[7] = 0;

  VAR_15->ccb_h.status = VAR_4;
  break;
 }

 case 134:
 {
  HPT_U8 *VAR_24 = VAR_15->csio.data_ptr;
  HPT_U64 VAR_25 = VAR_17->capacity - 1;

  VAR_24[0] = (HPT_U8)(VAR_25>>56);
  VAR_24[1] = (HPT_U8)(VAR_25>>48);
  VAR_24[2] = (HPT_U8)(VAR_25>>40);
  VAR_24[3] = (HPT_U8)(VAR_25>>32);
  VAR_24[4] = (HPT_U8)(VAR_25>>24);
  VAR_24[5] = (HPT_U8)(VAR_25>>16);
  VAR_24[6] = (HPT_U8)(VAR_25>>8);
  VAR_24[7] = (HPT_U8)VAR_25;
  VAR_24[8] = 0;
  VAR_24[9] = 0;
  VAR_24[10] = 2;
  VAR_24[11] = 0;

  VAR_15->ccb_h.status = VAR_4;
  break;
 }

 case 136:
 case 138:
 case 137:
 case 128:
 case 130:
 case 129:
 case 0x13:
 case 0x2f:
 {
  int VAR_26;

  VAR_18 = FUNC_5(VAR_16, VAR_17->cmds_per_request);
  if(!VAR_18){
   FUNC_1(("Failed to allocate command!"));
   VAR_15->ccb_h.status = VAR_1;
   break;
  }

  switch (VAR_20[0]) {
  case 136:
  case 128:
  case 0x13:
   VAR_18->uCmd.Ide.Lba = ((HPT_U32)VAR_20[1] << 16) | ((HPT_U32)VAR_20[2] << 8) | (HPT_U32)VAR_20[3];
   VAR_18->uCmd.Ide.nSectors = (HPT_U16) VAR_20[4];
   break;
  case 137:
  case 129:
  {
   HPT_U64 VAR_27 =
    ((HPT_U64)VAR_20[2]<<56) |
    ((HPT_U64)VAR_20[3]<<48) |
    ((HPT_U64)VAR_20[4]<<40) |
    ((HPT_U64)VAR_20[5]<<32) |
    ((HPT_U64)VAR_20[6]<<24) |
    ((HPT_U64)VAR_20[7]<<16) |
    ((HPT_U64)VAR_20[8]<<8) |
    ((HPT_U64)VAR_20[9]);
   VAR_18->uCmd.Ide.Lba = VAR_27;
   VAR_18->uCmd.Ide.nSectors = (HPT_U16)VAR_20[13] | ((HPT_U16)VAR_20[12]<<8);
   break;
  }

  default:
   VAR_18->uCmd.Ide.Lba = (HPT_U32)VAR_20[5] | ((HPT_U32)VAR_20[4] << 8) | ((HPT_U32)VAR_20[3] << 16) | ((HPT_U32)VAR_20[2] << 24);
   VAR_18->uCmd.Ide.nSectors = (HPT_U16) VAR_20[8] | ((HPT_U16)VAR_20[7]<<8);
   break;
  }

  switch (VAR_20[0]) {
  case 136:
  case 138:
  case 137:
   VAR_18->flags.data_in = 1;
   break;
  case 128:
  case 130:
  case 129:
   VAR_18->flags.data_out = 1;
   break;
  }
  VAR_18->priv = VAR_19 = FUNC_3(VAR_14);
  FUNC_0(VAR_19);
  VAR_19->ccb = VAR_15;
  VAR_18->target = VAR_17;
  VAR_18->done = VAR_12;
  VAR_18->buildsgl = VAR_11;
  VAR_18->psg = VAR_19->psg;
  VAR_18->flags.physical_sg = 1;
  VAR_26 = FUNC_2(VAR_14->io_dmat,
     VAR_19->dma_map,
     VAR_15,
     VAR_10, VAR_18,
         VAR_0
     );
  FUNC_1(("bus_dmamap_load return %d", VAR_26));
  if (VAR_26 && VAR_26!=VAR_9) {
   FUNC_10("bus_dmamap_load error %d", VAR_26);
   FUNC_4(VAR_19);
   FUNC_7(VAR_18);
   VAR_15->ccb_h.status = VAR_5;
   FUNC_11(VAR_15);
  }
  return;
 }

 default:
  VAR_15->ccb_h.status = VAR_6;
  break;
 }

 FUNC_11(VAR_15);
 return;
}
