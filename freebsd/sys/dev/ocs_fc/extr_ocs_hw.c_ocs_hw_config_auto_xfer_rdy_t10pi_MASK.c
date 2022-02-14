
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int rtc; int atv; int tmm; int p_type; int blk_size; int app_tag; } ;
typedef TYPE_2__ sli4_req_common_set_features_xfer_rdy_t10pi_t ;
typedef int param ;
struct TYPE_8__ {scalar_t__ dif_mode; int auto_xfer_rdy_p_type; int auto_xfer_rdy_blk_size_chip; int auto_xfer_rdy_app_tag_value; scalar_t__ auto_xfer_rdy_app_tag_valid; scalar_t__ auto_xfer_rdy_ref_tag_is_lba; } ;
struct TYPE_10__ {int os; int sli; TYPE_1__ config; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int *,int ,int *,int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int,int,int,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int *,int *,int ,int ,int,TYPE_2__*) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_5(ocs_hw_t *VAR_6, uint8_t *VAR_7)
{
 ocs_hw_rtn_e VAR_8 = VAR_3;
 sli4_req_common_set_features_xfer_rdy_t10pi_t VAR_9;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.rtc = (VAR_6->config.auto_xfer_rdy_ref_tag_is_lba ? 0 : 1);
 VAR_9.atv = (VAR_6->config.auto_xfer_rdy_app_tag_valid ? 1 : 0);
 VAR_9.tmm = ((VAR_6->config.dif_mode == VAR_1) ? 0 : 1);
 VAR_9.app_tag = VAR_6->config.auto_xfer_rdy_app_tag_value;
 VAR_9.blk_size = VAR_6->config.auto_xfer_rdy_blk_size_chip;

 switch (VAR_6->config.auto_xfer_rdy_p_type) {
 case 1:
  VAR_9.p_type = 0;
  break;
 case 3:
  VAR_9.p_type = 2;
  break;
 default:
  FUNC_1(VAR_6->os, "unsupported p_type %d\n",
   VAR_6->config.auto_xfer_rdy_p_type);
  return VAR_2;
 }


 FUNC_4(&VAR_6->sli, VAR_7, VAR_4,
        VAR_5,
        sizeof(VAR_9),
        &VAR_9);


 VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_0, ((void*)0), ((void*)0));
 if (VAR_8) {
  FUNC_1(VAR_6->os, "ocs_hw_command returns %d\n", VAR_8);
 } else {
  FUNC_2(VAR_6->os, "Auto XFER RDY T10 PI configured rtc:%d atv:%d p_type:%d app_tag:%x blk_size:%d\n",
    VAR_9.rtc, VAR_9.atv, VAR_9.p_type,
    VAR_9.app_tag, VAR_9.blk_size);
 }

 return VAR_8;
}
