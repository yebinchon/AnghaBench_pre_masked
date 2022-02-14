
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* uint16_t ;
typedef int sli4_t ;
struct TYPE_8__ {int type_match; int type_mask; int r_ctl_match; int r_ctl_mask; int rq_id; } ;
typedef TYPE_3__ sli4_cmd_rq_cfg_t ;
struct TYPE_6__ {int command; } ;
struct TYPE_9__ {void* vlan_tag; int vv; TYPE_2__* rq_cfg; int rq_id_3; int rq_id_2; int rq_id_1; int rq_id_0; void* fcf_index; TYPE_1__ hdr; } ;
typedef TYPE_4__ sli4_cmd_reg_fcfi_t ;
typedef int int32_t ;
struct TYPE_7__ {int type_match; int type_mask; int r_ctl_match; int r_ctl_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,size_t) ;

int32_t
FUNC_1(sli4_t *VAR_3, void *VAR_4, size_t VAR_5, uint16_t VAR_6, sli4_cmd_rq_cfg_t VAR_7[VAR_0], uint16_t VAR_8)
{
 sli4_cmd_reg_fcfi_t *VAR_9 = VAR_4;
 uint32_t VAR_10;

 FUNC_0(VAR_4, 0, VAR_5);

 VAR_9->hdr.command = VAR_1;

 VAR_9->fcf_index = VAR_6;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  switch(VAR_10) {
  case 0: VAR_9->rq_id_0 = VAR_7[0].rq_id; break;
  case 1: VAR_9->rq_id_1 = VAR_7[1].rq_id; break;
  case 2: VAR_9->rq_id_2 = VAR_7[2].rq_id; break;
  case 3: VAR_9->rq_id_3 = VAR_7[3].rq_id; break;
  }
  VAR_9->rq_cfg[VAR_10].r_ctl_mask = VAR_7[VAR_10].r_ctl_mask;
  VAR_9->rq_cfg[VAR_10].r_ctl_match = VAR_7[VAR_10].r_ctl_match;
  VAR_9->rq_cfg[VAR_10].type_mask = VAR_7[VAR_10].type_mask;
  VAR_9->rq_cfg[VAR_10].type_match = VAR_7[VAR_10].type_match;
 }

 if (VAR_8) {
  VAR_9->vv = VAR_2;
  VAR_9->vlan_tag = VAR_8;
 }

 return sizeof(sli4_cmd_reg_fcfi_t);
}
