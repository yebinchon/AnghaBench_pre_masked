
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int n_io; int n_sgl; int topology; int dif_seed; int dif_mode; int rq_default_buffer_size; int auto_xfer_rdy_xri_cnt; int auto_xfer_rdy_size; int auto_xfer_rdy_blk_size_chip; int auto_xfer_rdy_t10_enable; int auto_xfer_rdy_p_type; int auto_xfer_rdy_ref_tag_is_lba; int auto_xfer_rdy_app_tag_valid; int auto_xfer_rdy_app_tag_value; int esoc; int i_only_aab; int emulate_tgt_wqe_timeout; int bounce; int rq_selection_policy; int rr_quanta; int speed; } ;
struct TYPE_10__ {int hw_rq_count; int eth_license; int os; TYPE_3__ config; int sli; TYPE_1__* cq; TYPE_5__** hw_rq; } ;
typedef TYPE_4__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
typedef int ocs_hw_property_e ;
struct TYPE_11__ {TYPE_2__* cq; } ;
typedef TYPE_5__ hw_rq_t ;
struct TYPE_8__ {size_t instance; } ;
struct TYPE_7__ {int proc_limit; } ;


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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;

ocs_hw_rtn_e
FUNC_11(ocs_hw_t *VAR_17, ocs_hw_property_e VAR_18, uint32_t VAR_19)
{
 ocs_hw_rtn_e VAR_20 = VAR_8;

 switch (VAR_18) {
 case 138:
  if (VAR_19 > FUNC_3(&VAR_17->sli, VAR_16) ||
      VAR_19 == 0) {
   FUNC_1(VAR_17->os, "IO value out of range %d vs %d\n",
     VAR_19, FUNC_3(&VAR_17->sli, VAR_16));
   VAR_20 = VAR_7;
  } else {
   VAR_17->config.n_io = VAR_19;
  }
  break;
 case 137:
  VAR_19 += VAR_14;
  if (VAR_19 > FUNC_4(&VAR_17->sli)) {
   FUNC_1(VAR_17->os, "SGL value out of range %d vs %d\n",
     VAR_19, FUNC_4(&VAR_17->sli));
   VAR_20 = VAR_7;
  } else {
   VAR_17->config.n_sgl = VAR_19;
  }
  break;
 case 131:
  if ((FUNC_5(&VAR_17->sli) != VAR_15) &&
    (VAR_19 != 130)) {
   FUNC_1(VAR_17->os, "unsupported topology=%#x medium=%#x\n",
     VAR_19, FUNC_5(&VAR_17->sli));
   VAR_20 = VAR_7;
   break;
  }

  switch (VAR_19) {
  case 130:
   if (FUNC_5(&VAR_17->sli) == VAR_15) {
    FUNC_10(&VAR_17->sli, VAR_10);
   } else {
    FUNC_10(&VAR_17->sli, VAR_11);
   }
   break;
  case 128:
   FUNC_10(&VAR_17->sli, VAR_13);
   break;
  case 129:
   FUNC_10(&VAR_17->sli, VAR_12);
   break;
  default:
   FUNC_1(VAR_17->os, "unsupported topology %#x\n", VAR_19);
   VAR_20 = VAR_7;
  }
  VAR_17->config.topology = VAR_19;
  break;
 case 139:
  if (FUNC_5(&VAR_17->sli) != VAR_15) {
   switch (VAR_19) {
   case 0:
   case 10000:
    VAR_17->config.speed = VAR_0;
    break;
   default:
    FUNC_1(VAR_17->os, "unsupported speed=%#x medium=%#x\n",
      VAR_19, FUNC_5(&VAR_17->sli));
    VAR_20 = VAR_7;
   }
   break;
  }

  switch (VAR_19) {
  case 0:
   VAR_17->config.speed = VAR_6;
   break;
  case 2000:
   VAR_17->config.speed = VAR_2;
   break;
  case 4000:
   VAR_17->config.speed = VAR_4;
   break;
  case 8000:
   VAR_17->config.speed = VAR_5;
   break;
  case 16000:
   VAR_17->config.speed = VAR_1;
   break;
  case 32000:
   VAR_17->config.speed = VAR_3;
   break;
  default:
   FUNC_1(VAR_17->os, "unsupported speed %d\n", VAR_19);
   VAR_20 = VAR_7;
  }
  break;
 case 144:

  if (VAR_9 != FUNC_2(&VAR_17->sli)) {
   FUNC_1(VAR_17->os, "DIF seed not supported for this device\n");
   VAR_20 = VAR_7;
  } else {
   VAR_17->config.dif_seed = VAR_19;
  }
  break;
 case 147:
  switch (VAR_19) {
  case 146:






   if (FUNC_6(&VAR_17->sli)) {
    VAR_17->config.dif_mode = VAR_19;
   } else {
    FUNC_1(VAR_17->os, "chip does not support DIF inline\n");
    VAR_20 = VAR_7;
   }
   break;
  case 145:

   if (FUNC_7(&VAR_17->sli)) {
    VAR_17->config.dif_mode = VAR_19;
   } else {
    FUNC_1(VAR_17->os, "chip does not support DIF separate\n");
    VAR_20 = VAR_7;
   }
  }
  break;
 case 134: {
  hw_rq_t *VAR_21;
  uint32_t VAR_22;


  for (VAR_22 = 0; VAR_22 < VAR_17->hw_rq_count; VAR_22++) {
   VAR_21 = VAR_17->hw_rq[VAR_22];
   VAR_17->cq[VAR_21->cq->instance].proc_limit = VAR_19;
  }
  break;
 }
 case 135:
  VAR_17->config.rq_default_buffer_size = VAR_19;
  break;
 case 149:
  VAR_17->config.auto_xfer_rdy_xri_cnt = VAR_19;
  break;
 case 151:
  VAR_17->config.auto_xfer_rdy_size = VAR_19;
  break;
 case 154:
  switch (VAR_19) {
  case 512:
   VAR_17->config.auto_xfer_rdy_blk_size_chip = 0;
   break;
  case 1024:
   VAR_17->config.auto_xfer_rdy_blk_size_chip = 1;
   break;
  case 2048:
   VAR_17->config.auto_xfer_rdy_blk_size_chip = 2;
   break;
  case 4096:
   VAR_17->config.auto_xfer_rdy_blk_size_chip = 3;
   break;
  case 520:
   VAR_17->config.auto_xfer_rdy_blk_size_chip = 4;
   break;
  default:
   FUNC_0(VAR_17->os, "Invalid block size %d\n",
        VAR_19);
   VAR_20 = VAR_7;
  }
  break;
 case 150:
  VAR_17->config.auto_xfer_rdy_t10_enable = VAR_19;
  break;
 case 153:
  VAR_17->config.auto_xfer_rdy_p_type = VAR_19;
  break;
 case 152:
  VAR_17->config.auto_xfer_rdy_ref_tag_is_lba = VAR_19;
  break;
 case 156:
  VAR_17->config.auto_xfer_rdy_app_tag_valid = VAR_19;
  break;
 case 155:
  VAR_17->config.auto_xfer_rdy_app_tag_value = VAR_19;
  break;
 case 157:
  VAR_17->config.esoc = VAR_19;
  break;
 case 140:
  VAR_20 = FUNC_8(&VAR_17->sli, VAR_19);
  break;
 case 136:
  VAR_20 = FUNC_9(&VAR_17->sli, VAR_19);
  break;
 case 141:
  VAR_17->eth_license = VAR_19;
  break;
 case 143:
  VAR_17->config.i_only_aab = VAR_19;
  break;
 case 142:
  VAR_17->config.emulate_tgt_wqe_timeout = VAR_19;
  break;
 case 148:
  VAR_17->config.bounce = VAR_19;
  break;
 case 133:
  VAR_17->config.rq_selection_policy = VAR_19;
  break;
 case 132:
  VAR_17->config.rr_quanta = VAR_19;
  break;
 default:
  FUNC_1(VAR_17->os, "unsupported property %#x\n", VAR_18);
  VAR_20 = VAR_7;
 }

 return VAR_20;
}
