
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_32__ {int if_type; } ;
struct TYPE_29__ {int n_io; int n_sgl; int rq_default_buffer_size; int auto_xfer_rdy_xri_cnt; int auto_xfer_rdy_size; int auto_xfer_rdy_t10_enable; int auto_xfer_rdy_p_type; int auto_xfer_rdy_ref_tag_is_lba; int auto_xfer_rdy_app_tag_valid; int auto_xfer_rdy_app_tag_value; int topology; int speed; int dif_seed; int dif_mode; int i_only_aab; int emulate_tgt_wqe_timeout; int rq_selection_policy; int rr_quanta; int auto_xfer_rdy_blk_size_chip; } ;
struct TYPE_28__ {int disable_ar_tgt_dif; int ignore_send_frame; int sglc_misreported; } ;
struct TYPE_30__ {int speed; int topology; } ;
struct TYPE_31__ {int* num_qentries; int dump_size; int linkcfg; int eth_license; int os; TYPE_5__ sli; TYPE_2__ config; TYPE_1__ workaround; TYPE_3__ link; } ;
typedef TYPE_4__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
typedef int ocs_hw_property_e ;
typedef int int32_t ;


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



 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,int) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*,int ) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (TYPE_5__*) ;
 int FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_5__*) ;
 int FUNC_22 (TYPE_5__*) ;

ocs_hw_rtn_e
FUNC_23(ocs_hw_t *VAR_15, ocs_hw_property_e VAR_16, uint32_t *VAR_17)
{
 ocs_hw_rtn_e VAR_18 = VAR_2;
 int32_t VAR_19;

 if (!VAR_17) {
  return VAR_1;
 }

 *VAR_17 = 0;

 switch (VAR_16) {
 case 145:
  *VAR_17 = VAR_15->config.n_io;
  break;
 case 144:
  *VAR_17 = (VAR_15->config.n_sgl - VAR_9);
  break;
 case 152:
  *VAR_17 = FUNC_14(&VAR_15->sli, VAR_13);
  break;
 case 151:
  *VAR_17 = FUNC_14(&VAR_15->sli, VAR_11);
  break;
 case 150:
  *VAR_17 = VAR_15->num_qentries[VAR_10];
  break;
 case 141:
  *VAR_17 = VAR_15->config.rq_default_buffer_size;
  break;
 case 182:
  *VAR_17 = FUNC_7(&VAR_15->sli);
  break;
 case 177:
  *VAR_17 = VAR_15->config.auto_xfer_rdy_xri_cnt;
  break;
 case 179:
  *VAR_17 = VAR_15->config.auto_xfer_rdy_size;
  break;
 case 183:
  switch (VAR_15->config.auto_xfer_rdy_blk_size_chip) {
  case 0:
   *VAR_17 = 512;
   break;
  case 1:
   *VAR_17 = 1024;
   break;
  case 2:
   *VAR_17 = 2048;
   break;
  case 3:
   *VAR_17 = 4096;
   break;
  case 4:
   *VAR_17 = 520;
   break;
  default:
   *VAR_17 = 0;
   VAR_18 = VAR_1;
   break;
  }
  break;
 case 178:
  *VAR_17 = VAR_15->config.auto_xfer_rdy_t10_enable;
  break;
 case 181:
  *VAR_17 = VAR_15->config.auto_xfer_rdy_p_type;
  break;
 case 180:
  *VAR_17 = VAR_15->config.auto_xfer_rdy_ref_tag_is_lba;
  break;
 case 185:
  *VAR_17 = VAR_15->config.auto_xfer_rdy_app_tag_valid;
  break;
 case 184:
  *VAR_17 = VAR_15->config.auto_xfer_rdy_app_tag_value;
  break;
 case 149:
  *VAR_17 = FUNC_15(&VAR_15->sli);
  break;
 case 148:
  *VAR_17 = FUNC_16(&VAR_15->sli);
  break;
 case 132:




  if (VAR_15->link.speed == 0) {
   *VAR_17 = VAR_4;
   break;
  }
  switch (VAR_15->link.topology) {
  case 128:
   *VAR_17 = VAR_5;
   break;
  case 130:
   *VAR_17 = VAR_3;
   break;
  case 129:
   *VAR_17 = VAR_4;
   break;
  default:
   FUNC_2(VAR_15->os, "unsupported topology %#x\n", VAR_15->link.topology);
   VAR_18 = VAR_1;
   break;
  }
  break;
 case 176:
  *VAR_17 = VAR_15->config.topology;
  break;
 case 153:
  *VAR_17 = VAR_15->link.speed;
  break;
 case 155:
  switch (VAR_15->config.speed) {
  case 192:
   *VAR_17 = 10000;
   break;
  case 186:
   *VAR_17 = 0;
   break;
  case 190:
   *VAR_17 = 2000;
   break;
  case 188:
   *VAR_17 = 4000;
   break;
  case 187:
   *VAR_17 = 8000;
   break;
  case 191:
   *VAR_17 = 16000;
   break;
  case 189:
   *VAR_17 = 32000;
   break;
  default:
   FUNC_2(VAR_15->os, "unsupported speed %#x\n", VAR_15->config.speed);
   VAR_18 = VAR_1;
   break;
  }
  break;
 case 157:
  *VAR_17 = FUNC_11(&VAR_15->sli);
  break;
 case 133:
  *VAR_17 = FUNC_20(&VAR_15->sli);
  break;
 case 134:
  *VAR_17 = FUNC_19(&VAR_15->sli);
  break;
 case 175:
  *VAR_17 = FUNC_8(&VAR_15->sli);
  break;
 case 172:
  *VAR_17 = VAR_15->config.dif_seed;
  break;
 case 174:
  *VAR_17 = VAR_15->config.dif_mode;
  break;
 case 173:

  if (VAR_15->sli.if_type == VAR_8) {
   *VAR_17 = VAR_14;
  } else {
   *VAR_17 = VAR_0;
  }
  break;
 case 170:
  *VAR_17 = VAR_15->dump_size;
  break;
 case 168:
  *VAR_17 = FUNC_4(&VAR_15->sli);
  break;
 case 169:
  *VAR_17 = FUNC_3(&VAR_15->sli);
  break;
 case 142:
  VAR_19 = FUNC_22(&VAR_15->sli);
  if(VAR_19 < 0) {
   VAR_18 = VAR_1;
  } else {
   *VAR_17 = VAR_19;
  }
  break;
 case 164:
  *VAR_17 = FUNC_5(&VAR_15->sli);
  break;
 case 163:
  *VAR_17 = FUNC_6(&VAR_15->sli);
  break;
 case 162:
  *VAR_17 = FUNC_0(VAR_15);
  break;
 case 161:
  *VAR_17 = FUNC_9(&VAR_15->sli);
  break;
 case 143:
  *VAR_17 = FUNC_18(&VAR_15->sli);
  break;
 case 160:
  *VAR_17 = FUNC_10(&VAR_15->sli, 0);
  break;
 case 159:
  *VAR_17 = FUNC_10(&VAR_15->sli, 1);
  break;
 case 158:
  *VAR_17 = FUNC_10(&VAR_15->sli, 2);
  break;
 case 156:
  *VAR_17 = VAR_15->linkcfg;
  break;
 case 165:
  *VAR_17 = VAR_15->eth_license;
  break;
 case 154:
  *VAR_17 = FUNC_13(&VAR_15->sli);
  break;
 case 146:
  *VAR_17 = FUNC_1(VAR_15);
  break;
 case 171:
  *VAR_17 = VAR_15->workaround.disable_ar_tgt_dif;
  break;
 case 167:
  *VAR_17 = VAR_15->config.i_only_aab;
  break;
 case 166:
  *VAR_17 = VAR_15->config.emulate_tgt_wqe_timeout;
  break;
 case 131:
  *VAR_17 = FUNC_21(&VAR_15->sli);
  break;
 case 136:
  *VAR_17 = FUNC_12(&VAR_15->sli) || VAR_15->workaround.sglc_misreported;
  break;
 case 137:





  *VAR_17 = VAR_0;
  if ((FUNC_12(&VAR_15->sli) || VAR_15->workaround.sglc_misreported) &&
      !FUNC_17(&VAR_15->sli) &&
      VAR_8 == FUNC_11(&VAR_15->sli)) {
   *VAR_17 = VAR_14;
  }

  if ((FUNC_12(&VAR_15->sli) || VAR_15->workaround.sglc_misreported) &&
      FUNC_17(&VAR_15->sli) &&
      ((VAR_6 == FUNC_11(&VAR_15->sli)) ||
   (VAR_7 == FUNC_11(&VAR_15->sli)))) {
   *VAR_17 = VAR_14;
  }
  break;
 case 135:

  *VAR_17 = ((FUNC_12(&VAR_15->sli) || VAR_15->workaround.sglc_misreported) &&
     (VAR_8 == FUNC_11(&VAR_15->sli)));
  break;
 case 138:
  if (VAR_15->workaround.ignore_send_frame) {
   *VAR_17 = 0;
  } else {

   *VAR_17 = FUNC_11(&VAR_15->sli) == VAR_8;
  }
  break;
 case 140:
  *VAR_17 = VAR_15->config.rq_selection_policy;
  break;
 case 139:
  *VAR_17 = VAR_15->config.rr_quanta;
  break;
 case 147:
  *VAR_17 = FUNC_14(&VAR_15->sli, VAR_12);
  break;
 default:
  FUNC_2(VAR_15->os, "unsupported property %#x\n", VAR_16);
  VAR_18 = VAR_1;
 }

 return VAR_18;
}
