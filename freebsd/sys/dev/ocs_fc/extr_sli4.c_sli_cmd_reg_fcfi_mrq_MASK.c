
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef void* uint16_t ;
typedef int sli4_t ;
struct TYPE_8__ {int rq_id; int type_match; int type_mask; int r_ctl_match; int r_ctl_mask; } ;
typedef TYPE_3__ sli4_cmd_rq_cfg_t ;
struct TYPE_6__ {int command; } ;
struct TYPE_9__ {void* num_mrq_pairs; scalar_t__ mrq_filter_bitmask; scalar_t__ rq_selection_policy; int rq_id_0; int rq_id_1; int rq_id_2; int rq_id_3; TYPE_2__* rq_cfg; scalar_t__ mode; void* vlan_tag; int vv; void* fcf_index; TYPE_1__ hdr; } ;
typedef TYPE_4__ sli4_cmd_reg_fcfi_mrq_t ;
typedef int int32_t ;
struct TYPE_7__ {int type_match; int type_mask; int r_ctl_match; int r_ctl_mask; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int ,size_t) ;

int32_t
FUNC_1(sli4_t *VAR_4, void *VAR_5, size_t VAR_6, uint8_t VAR_7,
       uint16_t VAR_8, uint16_t VAR_9, uint8_t VAR_10,
       uint8_t VAR_11, uint16_t VAR_12,
       sli4_cmd_rq_cfg_t VAR_13[VAR_0])
{
 sli4_cmd_reg_fcfi_mrq_t *VAR_14 = VAR_5;
 uint32_t VAR_15;

 FUNC_0(VAR_5, 0, VAR_6);

 VAR_14->hdr.command = VAR_2;
 if (VAR_7 == VAR_1) {
  VAR_14->fcf_index = VAR_8;
  if (VAR_9) {
   VAR_14->vv = VAR_3;
   VAR_14->vlan_tag = VAR_9;
  }
  goto done;
 }

 VAR_14->mode = VAR_7;
 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  VAR_14->rq_cfg[VAR_15].r_ctl_mask = VAR_13[VAR_15].r_ctl_mask;
  VAR_14->rq_cfg[VAR_15].r_ctl_match = VAR_13[VAR_15].r_ctl_match;
  VAR_14->rq_cfg[VAR_15].type_mask = VAR_13[VAR_15].type_mask;
  VAR_14->rq_cfg[VAR_15].type_match = VAR_13[VAR_15].type_match;

  switch(VAR_15) {
  case 3: VAR_14->rq_id_3 = VAR_13[VAR_15].rq_id; break;
  case 2: VAR_14->rq_id_2 = VAR_13[VAR_15].rq_id; break;
  case 1: VAR_14->rq_id_1 = VAR_13[VAR_15].rq_id; break;
  case 0: VAR_14->rq_id_0 = VAR_13[VAR_15].rq_id; break;
  }
 }

 VAR_14->rq_selection_policy = VAR_10;
 VAR_14->mrq_filter_bitmask = VAR_11;
 VAR_14->num_mrq_pairs = VAR_12;
done:
 return sizeof(sli4_cmd_reg_fcfi_mrq_t);
}
