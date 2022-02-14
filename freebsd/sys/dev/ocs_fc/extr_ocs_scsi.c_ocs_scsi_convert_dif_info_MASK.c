
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_10__ {int dif_oper; int blk_size; int disable_app_ref_ffff; int disable_app_ffff; int dif_separate; int check_guard; int check_app_tag; int check_ref_tag; int app_tag; int ref_tag; } ;
typedef TYPE_2__ ocs_scsi_dif_info_t ;
struct TYPE_11__ {scalar_t__ dif; int auto_incr_ref_tag; int dif_seed; int disable_app_ref_ffff; int disable_app_ffff; int dif_separate; int check_guard; int check_app_tag; int check_ref_tag; int app_tag_cmp; int ref_tag_cmp; int app_tag_repl; int ref_tag_repl; int blk_size; int dif_oper; } ;
typedef TYPE_3__ ocs_hw_dif_info_t ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_t *VAR_21, ocs_scsi_dif_info_t *VAR_22, ocs_hw_dif_info_t *VAR_23)
{
 uint32_t VAR_24;
 FUNC_2(VAR_23, 0, sizeof(ocs_hw_dif_info_t));

 if (VAR_22 == ((void*)0)) {
  VAR_23->dif_oper = VAR_7;
  VAR_23->blk_size = VAR_6;
  return 0;
 }


 switch(VAR_22->dif_oper) {
 case 129:
  VAR_23->dif_oper = VAR_16;
  VAR_23->dif = VAR_18;
  break;
 case 131:
  VAR_23->dif_oper = VAR_14;
  VAR_23->dif = VAR_20;
  break;
 case 130:
  VAR_23->dif_oper = VAR_15;
  VAR_23->dif = VAR_18;
  break;
 case 134:
  VAR_23->dif_oper = VAR_11;
  VAR_23->dif = VAR_20;
  break;
 case 132:
  VAR_23->dif_oper = VAR_13;
  VAR_23->dif = VAR_19;
  break;
 case 136:
  VAR_23->dif_oper = VAR_9;
  VAR_23->dif = VAR_19;
  break;
 case 133:
  VAR_23->dif_oper = VAR_12;
  VAR_23->dif = VAR_19;
  break;
 case 135:
  VAR_23->dif_oper = VAR_10;
  VAR_23->dif = VAR_19;
  break;
 case 128:
  VAR_23->dif_oper = VAR_17;
  VAR_23->dif = VAR_19;
  break;
 default:
  FUNC_1(VAR_21, "unhandled SCSI DIF operation %d\n",
        VAR_22->dif_oper);
  return -1;
 }

 switch(VAR_22->blk_size) {
 case 138:
  VAR_23->blk_size = VAR_4;
  break;
 case 142:
  VAR_23->blk_size = VAR_0;
  break;
 case 141:
  VAR_23->blk_size = VAR_1;
  break;
 case 140:
  VAR_23->blk_size = VAR_2;
  break;
 case 137:
  VAR_23->blk_size = VAR_5;
  break;
 case 139:
  VAR_23->blk_size = VAR_3;
  break;
 default:
  FUNC_1(VAR_21, "unhandled SCSI DIF block size %d\n",
        VAR_22->blk_size);
  return -1;
 }



 if (VAR_23->dif == VAR_18 ) {
  VAR_23->ref_tag_repl = VAR_22->ref_tag;
  VAR_23->app_tag_repl = VAR_22->app_tag;
 } else {
  VAR_23->ref_tag_cmp = VAR_22->ref_tag;
  VAR_23->app_tag_cmp = VAR_22->app_tag;
 }

 VAR_23->check_ref_tag = VAR_22->check_ref_tag;
 VAR_23->check_app_tag = VAR_22->check_app_tag;
 VAR_23->check_guard = VAR_22->check_guard;
 VAR_23->auto_incr_ref_tag = 1;
 VAR_23->dif_separate = VAR_22->dif_separate;
 VAR_23->disable_app_ffff = VAR_22->disable_app_ffff;
 VAR_23->disable_app_ref_ffff = VAR_22->disable_app_ref_ffff;

 FUNC_0(&VAR_21->hw, VAR_8, &VAR_24);
 VAR_23->dif_seed = VAR_24;

 return 0;
}
