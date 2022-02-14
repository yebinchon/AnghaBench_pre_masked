
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ status; int path; int * ccb_pvscsi_sc; int * ccb_pvscsi_hcb; } ;
struct TYPE_3__ {int sense_len; int sense_data; scalar_t__ resid; scalar_t__ dxfer_len; scalar_t__ scsi_status; } ;
union ccb {TYPE_2__ ccb_h; TYPE_1__ csio; } ;
typedef scalar_t__ uint32_t ;
struct pvscsi_softc {scalar_t__ frozen; int dev; int buffer_dmat; } ;
struct pvscsi_ring_cmp_desc {scalar_t__ host_status; scalar_t__ scsi_status; scalar_t__ context; int sense_len; scalar_t__ data_len; } ;
struct pvscsi_hcb {int sense_buffer; int dma_map; union ccb* ccb; int callout; } ;
typedef int bus_dmasync_op_t ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (int,int ,char*,...) ;
 int FUNC_1 (int ,int ) ;






 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int) ;
 struct pvscsi_hcb* FUNC_8 (struct pvscsi_softc*,scalar_t__) ;
 int FUNC_9 (struct pvscsi_softc*,struct pvscsi_hcb*) ;
 int FUNC_10 (union ccb*) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static void
FUNC_12(struct pvscsi_softc *VAR_23,
    struct pvscsi_ring_cmp_desc *VAR_24)
{
 struct pvscsi_hcb *VAR_25;
 union ccb *VAR_26;
 uint32_t VAR_27;
 uint32_t VAR_28;
 uint32_t VAR_29;
 bus_dmasync_op_t VAR_30;

 VAR_25 = FUNC_8(VAR_23, VAR_24->context);

 FUNC_4(&VAR_25->callout);

 VAR_26 = VAR_25->ccb;

 VAR_28 = VAR_24->host_status;
 VAR_29 = VAR_24->scsi_status;

 VAR_26->csio.scsi_status = VAR_29;
 VAR_26->csio.resid = VAR_26->csio.dxfer_len - VAR_24->data_len;

 if ((VAR_26->ccb_h.flags & VAR_7) != VAR_8) {
  if ((VAR_26->ccb_h.flags & VAR_7) == VAR_6) {
   VAR_30 = VAR_0;
  } else {
   VAR_30 = VAR_1;
  }
  FUNC_2(VAR_23->buffer_dmat, VAR_25->dma_map, VAR_30);
  FUNC_3(VAR_23->buffer_dmat, VAR_25->dma_map);
 }

 if (VAR_28 == 135 && VAR_29 == 130) {
  FUNC_0(3, VAR_23->dev,
      "completing command context %llx success\n",
      (unsigned long long)VAR_24->context);
  VAR_26->csio.resid = 0;
  VAR_27 = VAR_13;
 } else {
  switch (VAR_28) {
  case 135:
  case 144:
  case 143:
   switch (VAR_29) {
   case 130:
    VAR_26->csio.resid = 0;
    VAR_27 = VAR_13;
    break;
   case 132:
    VAR_27 = VAR_16;

    if (VAR_26->csio.sense_len != 0) {
     VAR_27 |= VAR_3;

     FUNC_7(&VAR_26->csio.sense_data, 0,
         sizeof(VAR_26->csio.sense_data));
     FUNC_6(&VAR_26->csio.sense_data,
         VAR_25->sense_buffer,
         FUNC_1(VAR_26->csio.sense_len,
      VAR_24->sense_len));
    }
    break;
   case 133:
   case 129:
    VAR_27 = VAR_11;
    break;
   case 131:
   case 128:
    VAR_27 = VAR_12;
    break;
   default:
    FUNC_0(1, VAR_23->dev,
        "ccb: %p sdstat=0x%x\n", VAR_26, VAR_29);
    VAR_27 = VAR_16;
    break;
   }
   break;
  case 138:
   VAR_27 = VAR_17;
   break;
  case 152:
  case 151:
   VAR_27 = VAR_4;
   break;
  case 156:
  case 147:
   VAR_27 = VAR_11;
   break;
  case 141:
  case 136:
  case 140:
  case 153:
   VAR_27 = VAR_15;
   break;
  case 139:
   VAR_27 = VAR_21;
   break;
  case 154:
   VAR_27 = VAR_22;
   break;
  case 145:
   VAR_27 = VAR_18;
   break;
  case 137:
   VAR_27 = VAR_2;
   break;
  case 142:
  case 134:
  case 150:
  case 155:
  case 146:
   VAR_27 = VAR_14;
   break;
  case 148:
  case 149:
   VAR_27 = VAR_9;
   break;
  default:
   FUNC_5(VAR_23->dev, "unknown hba status: 0x%x\n",
       VAR_28);
   VAR_27 = VAR_9;
   break;
  }

  FUNC_0(3, VAR_23->dev,
      "completing command context %llx btstat %x sdstat %x - status %x\n",
      (unsigned long long)VAR_24->context, VAR_28, VAR_29, VAR_27);
 }

 VAR_26->ccb_h.ccb_pvscsi_hcb = ((void*)0);
 VAR_26->ccb_h.ccb_pvscsi_sc = ((void*)0);
 FUNC_9(VAR_23, VAR_25);

 VAR_26->ccb_h.status =
     VAR_27 | (VAR_26->ccb_h.status & ~(VAR_20 | VAR_19));

 if (VAR_23->frozen) {
  VAR_26->ccb_h.status |= VAR_10;
  VAR_23->frozen = 0;
 }

 if (VAR_27 != VAR_13) {
  VAR_26->ccb_h.status |= VAR_5;
  FUNC_11(VAR_26->ccb_h.path, 1);
 }
 FUNC_10(VAR_26);
}
