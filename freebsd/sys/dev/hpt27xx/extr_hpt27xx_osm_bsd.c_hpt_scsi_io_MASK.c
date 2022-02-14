
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_17__ ;
typedef struct TYPE_36__ TYPE_16__ ;
typedef struct TYPE_35__ TYPE_15__ ;
typedef struct TYPE_34__ TYPE_14__ ;
typedef struct TYPE_33__ TYPE_13__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


struct TYPE_31__ {int flags; scalar_t__ target_id; scalar_t__ target_lun; void* status; int timeout_ch; } ;
struct TYPE_38__ {int* cdb_ptr; int* cdb_bytes; } ;
struct TYPE_30__ {int* data_ptr; int dxfer_len; int sglist_cnt; TYPE_1__ cdb_io; } ;
union ccb {TYPE_11__ ccb_h; TYPE_10__ csio; } ;
struct TYPE_32__ {int ds_len; int ds_addr; } ;
typedef TYPE_12__ bus_dma_segment_t ;
struct TYPE_46__ {int data_in; int data_out; int physical_sg; } ;
struct TYPE_44__ {int bus; } ;
struct TYPE_45__ {int eot; int size; TYPE_7__ addr; } ;
struct TYPE_42__ {int Lba; int nSectors; } ;
struct TYPE_43__ {TYPE_5__ Ide; } ;
struct TYPE_40__ {int logical_sector_size; } ;
struct TYPE_39__ {int sector_size_shift; } ;
struct TYPE_41__ {TYPE_3__ raw; TYPE_2__ array; } ;
struct TYPE_37__ {TYPE_9__ flags; TYPE_8__* psg; int buildsgl; int done; TYPE_13__* target; TYPE_15__* priv; TYPE_6__ uCmd; } ;
struct TYPE_36__ {int AdditionalLength; int CommandQueue; int* VendorId; int* ProductId; int* ProductRevisionLevel; } ;
struct TYPE_35__ {int dma_map; TYPE_8__* psg; union ccb* ccb; } ;
struct TYPE_34__ {int io_dmat; int vbus; } ;
struct TYPE_33__ {int target_id; int capacity; TYPE_4__ u; int type; int cmds_per_request; } ;
typedef TYPE_13__* PVDEV ;
typedef TYPE_14__* PVBUS_EXT ;
typedef int PVBUS ;
typedef TYPE_15__* POS_CMDEXT ;
typedef TYPE_16__* PINQUIRYDATA ;
typedef TYPE_17__* PCOMMAND ;
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
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_15__*) ;
 int VAR_12 ;

 int FUNC_1 (char*) ;
 int VAR_13 ;



 int FUNC_2 (int ,int ,int*,int,int ,TYPE_17__*,int ) ;
 int FUNC_3 (int ,int ,union ccb*,int ,TYPE_17__*,int ) ;
 TYPE_15__* FUNC_4 (TYPE_14__*) ;
 int FUNC_5 (TYPE_15__*) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_17__* FUNC_6 (int ,int ) ;
 TYPE_13__* FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (TYPE_17__*) ;
 int FUNC_9 (TYPE_17__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int**,char*,int) ;
 int FUNC_12 (int*,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_13 (char*,int) ;
 scalar_t__ VAR_18 ;
 int FUNC_14 (int ,TYPE_17__*,int ) ;
 int FUNC_15 (union ccb*) ;

__attribute__((used)) static void FUNC_16(PVBUS_EXT VAR_19, union ccb *VAR_20)
{
 PVBUS VAR_21 = (PVBUS)VAR_19->vbus;
 PVDEV VAR_22;
 PCOMMAND VAR_23;
 POS_CMDEXT VAR_24;
 HPT_U8 *VAR_25;

 if (VAR_20->ccb_h.flags & VAR_3)
  VAR_25 = VAR_20->csio.cdb_io.cdb_ptr;
 else
  VAR_25 = VAR_20->csio.cdb_io.cdb_bytes;

 FUNC_1(("<8>hpt_scsi_io: ccb %x id %d lun %d cdb %x-%x-%x",
  VAR_20,
  VAR_20->ccb_h.target_id, VAR_20->ccb_h.target_lun,
  *(HPT_U32 *)&VAR_25[0], *(HPT_U32 *)&VAR_25[4], *(HPT_U32 *)&VAR_25[8]
 ));


 if (VAR_20->ccb_h.target_lun != 0 ||
  VAR_20->ccb_h.target_id >= VAR_18 ||
  (VAR_20->ccb_h.flags & VAR_2))
 {
  VAR_20->ccb_h.status = VAR_10;
  FUNC_15(VAR_20);
  return;
 }

 VAR_22 = FUNC_7(VAR_21, VAR_20->ccb_h.target_id);

 if (!VAR_22) {
  VAR_20->ccb_h.status = VAR_8;
  FUNC_15(VAR_20);
  return;
 }

 switch (VAR_25[0]) {
 case 131:
 case 133:
 case 132:
  VAR_20->ccb_h.status = VAR_4;
  break;

 case 140:
  {
   PINQUIRYDATA VAR_26;
   FUNC_12(VAR_20->csio.data_ptr, 0, VAR_20->csio.dxfer_len);
   VAR_26 = (PINQUIRYDATA)VAR_20->csio.data_ptr;

   VAR_26->AdditionalLength = 31;
   VAR_26->CommandQueue = 1;
   FUNC_11(&VAR_26->VendorId, "HPT     ", 8);
   FUNC_11(&VAR_26->ProductId, "DISK 0_0        ", 16);

   if (VAR_22->target_id / 10) {
    VAR_26->ProductId[7] = (VAR_22->target_id % 100) / 10 + '0';
    VAR_26->ProductId[8] = (VAR_22->target_id % 100) % 10 + '0';
   }
   else
    VAR_26->ProductId[7] = (VAR_22->target_id % 100) % 10 + '0';

   FUNC_11(&VAR_26->ProductRevisionLevel, "4.00", 4);

   VAR_20->ccb_h.status = VAR_4;
  }
  break;

 case 136:
 {
  HPT_U8 *VAR_27 = VAR_20->csio.data_ptr;
  HPT_U32 VAR_28;
  HPT_U8 VAR_29 = 0;
  HPT_U64 VAR_30;
  HPT_U32 VAR_31 = 0;

  if (FUNC_10(VAR_22->type))
   VAR_29 = VAR_22->u.array.sector_size_shift;
  else{
   if(VAR_22->type == VAR_13){
    VAR_31 = VAR_22->u.raw.logical_sector_size;
   }

   switch (VAR_31) {
    case 0x1000:
     FUNC_1(("set 4k setctor size in READ_CAPACITY"));
     VAR_29 = 3;
     break;
    default:
     break;
   }
  }
  VAR_30 = VAR_22->capacity >> VAR_29;

  if (VAR_30 > 0xfffffffful)
   VAR_28 = 0xffffffff;
  else
   VAR_28 = VAR_30 - 1;

  VAR_27[0] = (HPT_U8)(VAR_28>>24);
  VAR_27[1] = (HPT_U8)(VAR_28>>16);
  VAR_27[2] = (HPT_U8)(VAR_28>>8);
  VAR_27[3] = (HPT_U8)VAR_28;
  VAR_27[4] = 0;
  VAR_27[5] = 0;
  VAR_27[6] = 2 << VAR_29;
  VAR_27[7] = 0;

  VAR_20->ccb_h.status = VAR_4;
  break;
 }
 case 135:
 {
  HPT_U8 *VAR_32 = VAR_20->csio.data_ptr;
  FUNC_12(VAR_32, 0, 16);
  VAR_32[3] = 8;
  VAR_20->ccb_h.status = VAR_4;
  break;
 }
 case 134:
 {
  HPT_U8 *VAR_33 = VAR_20->csio.data_ptr;
  HPT_U64 VAR_34 = 0;
  HPT_U8 VAR_35 = 0;
  HPT_U32 VAR_36 = 0;

  if(FUNC_10(VAR_22->type))
   VAR_35 = VAR_22->u.array.sector_size_shift;
  else{
   if(VAR_22->type == VAR_13){
    VAR_36 = VAR_22->u.raw.logical_sector_size;
   }

   switch (VAR_36) {
    case 0x1000:
     FUNC_1(("set 4k setctor size in SERVICE_ACTION_IN"));
     VAR_35 = 3;
     break;
    default:
     break;
   }
  }
  VAR_34 = (VAR_22->capacity >> VAR_35) - 1;

  VAR_33[0] = (HPT_U8)(VAR_34>>56);
  VAR_33[1] = (HPT_U8)(VAR_34>>48);
  VAR_33[2] = (HPT_U8)(VAR_34>>40);
  VAR_33[3] = (HPT_U8)(VAR_34>>32);
  VAR_33[4] = (HPT_U8)(VAR_34>>24);
  VAR_33[5] = (HPT_U8)(VAR_34>>16);
  VAR_33[6] = (HPT_U8)(VAR_34>>8);
  VAR_33[7] = (HPT_U8)VAR_34;
  VAR_33[8] = 0;
  VAR_33[9] = 0;
  VAR_33[10] = 2 << VAR_35;
  VAR_33[11] = 0;

  VAR_20->ccb_h.status = VAR_4;
  break;
 }

 case 137:
 case 139:
 case 138:
 case 128:
 case 130:
 case 129:
 case 0x13:
 case 0x2f:
 case 0x8f:
 {
  HPT_U8 VAR_37 = 0;
  HPT_U32 VAR_38 = 0;
  VAR_23 = FUNC_6(VAR_21, VAR_22->cmds_per_request);
  if(!VAR_23){
   FUNC_1(("Failed to allocate command!"));
   VAR_20->ccb_h.status = VAR_1;
   break;
  }

  switch (VAR_25[0]) {
  case 137:
  case 128:
  case 0x13:
   VAR_23->uCmd.Ide.Lba = ((HPT_U32)VAR_25[1] << 16) | ((HPT_U32)VAR_25[2] << 8) | (HPT_U32)VAR_25[3];
   VAR_23->uCmd.Ide.nSectors = (HPT_U16) VAR_25[4];
   break;
  case 138:
  case 129:
  case 0x8f:
  {
   HPT_U64 VAR_39 =
    ((HPT_U64)VAR_25[2]<<56) |
    ((HPT_U64)VAR_25[3]<<48) |
    ((HPT_U64)VAR_25[4]<<40) |
    ((HPT_U64)VAR_25[5]<<32) |
    ((HPT_U64)VAR_25[6]<<24) |
    ((HPT_U64)VAR_25[7]<<16) |
    ((HPT_U64)VAR_25[8]<<8) |
    ((HPT_U64)VAR_25[9]);
   VAR_23->uCmd.Ide.Lba = VAR_39;
   VAR_23->uCmd.Ide.nSectors = (HPT_U16)VAR_25[13] | ((HPT_U16)VAR_25[12]<<8);
   break;
  }

  default:
   VAR_23->uCmd.Ide.Lba = (HPT_U32)VAR_25[5] | ((HPT_U32)VAR_25[4] << 8) | ((HPT_U32)VAR_25[3] << 16) | ((HPT_U32)VAR_25[2] << 24);
   VAR_23->uCmd.Ide.nSectors = (HPT_U16) VAR_25[8] | ((HPT_U16)VAR_25[7]<<8);
   break;
  }

  if(FUNC_10(VAR_22->type)) {
   VAR_37 = VAR_22->u.array.sector_size_shift;
  }
  else{
   if(VAR_22->type == VAR_13){
    VAR_38 = VAR_22->u.raw.logical_sector_size;
   }

   switch (VAR_38) {
    case 0x1000:
     FUNC_1(("<8>resize sector size from 4k to 512"));
     VAR_37 = 3;
     break;
    default:
     break;
    }
  }
  VAR_23->uCmd.Ide.Lba <<= VAR_37;
  VAR_23->uCmd.Ide.nSectors <<= VAR_37;


  switch (VAR_25[0]) {
  case 137:
  case 139:
  case 138:
   VAR_23->flags.data_in = 1;
   break;
  case 128:
  case 130:
  case 129:
   VAR_23->flags.data_out = 1;
   break;
  }
  VAR_23->priv = VAR_24 = FUNC_4(VAR_19);
  FUNC_0(VAR_24);
  VAR_24->ccb = VAR_20;
  VAR_23->target = VAR_22;
  VAR_23->done = VAR_17;
  VAR_23->buildsgl = VAR_16;

  VAR_23->psg = VAR_24->psg;

  if (VAR_20->ccb_h.flags & VAR_7) {
   int VAR_40;
   bus_dma_segment_t *VAR_41 = (bus_dma_segment_t *)VAR_20->csio.data_ptr;

   if (VAR_20->ccb_h.flags & VAR_9)
    VAR_23->flags.physical_sg = 1;

   for (VAR_40 = 0; VAR_40 < VAR_20->csio.sglist_cnt; VAR_40++) {
    VAR_23->psg[VAR_40].addr.bus = VAR_41[VAR_40].ds_addr;
    VAR_23->psg[VAR_40].size = VAR_41[VAR_40].ds_len;
    VAR_23->psg[VAR_40].eot = (VAR_40==VAR_20->csio.sglist_cnt-1)? 1 : 0;
   }

   VAR_20->ccb_h.timeout_ch = FUNC_14(VAR_15, VAR_23, VAR_12);
   FUNC_9(VAR_23);
  }
  else

  {
   int VAR_42;
   VAR_23->flags.physical_sg = 1;







   VAR_42 = FUNC_2(VAR_19->io_dmat,
      VAR_24->dma_map,
      VAR_20->csio.data_ptr, VAR_20->csio.dxfer_len,
      VAR_14, VAR_23,
         VAR_0
     );

   FUNC_1(("<8>bus_dmamap_load return %d", VAR_42));
   if (VAR_42 && VAR_42!=VAR_11) {
    FUNC_13("bus_dmamap_load error %d", VAR_42);
    FUNC_5(VAR_24);
    FUNC_8(VAR_23);
    VAR_20->ccb_h.status = VAR_5;
    FUNC_15(VAR_20);
   }
  }
  return;
 }

 default:
  VAR_20->ccb_h.status = VAR_6;
  break;
 }

 FUNC_15(VAR_20);
 return;
}
