
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int last; } ;
typedef TYPE_3__ sli4_sge_t ;
struct TYPE_15__ {void* dif_op_tx; void* dif_op_rx; int new_ref_tag; int check_crc; int check_ref_tag; int check_app_tag; int auto_incr_ref_tag; int dif_blk_size; int app_tag_cmp; int sge_type; int at; int atrt; int repl_app_tag; int app_tag_repl; int ref_tag_repl; int ref_tag_cmp; } ;
typedef TYPE_4__ sli4_diseed_sge_t ;
struct TYPE_13__ {scalar_t__ if_type; } ;
struct TYPE_16__ {int * os; TYPE_2__ sli; } ;
typedef TYPE_5__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_17__ {scalar_t__ type; scalar_t__ n_sge; TYPE_1__* sgl; } ;
typedef TYPE_6__ ocs_hw_io_t ;
struct TYPE_18__ {int dif_oper; int repl_ref_tag; int check_guard; int check_ref_tag; int check_app_tag; int auto_incr_ref_tag; int blk_size; int app_tag_cmp; scalar_t__ dif_separate; int disable_app_ffff; int disable_app_ref_ffff; int repl_app_tag; int app_tag_repl; int ref_tag_repl; int ref_tag_cmp; } ;
typedef TYPE_7__ ocs_hw_dif_info_t ;
struct TYPE_12__ {TYPE_3__* virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

ocs_hw_rtn_e
FUNC_2(ocs_hw_t *VAR_19, ocs_hw_io_t *VAR_20, ocs_hw_dif_info_t *VAR_21)
{
 sli4_sge_t *VAR_22 = ((void*)0);
 sli4_diseed_sge_t *VAR_23;


 if ((VAR_21 == ((void*)0)) || (VAR_21->dif_oper == VAR_1)) {
  return VAR_5;
 }

 if (!VAR_19 || !VAR_20) {
  FUNC_0(VAR_19 ? VAR_19->os : ((void*)0), "bad parameter hw=%p io=%p dif_info=%p\n",
       VAR_19, VAR_20, VAR_21);
  return VAR_4;
 }

 VAR_22 = VAR_20->sgl->virt;
 VAR_22 += VAR_20->n_sge;


 FUNC_1(VAR_22, 0, sizeof(sli4_diseed_sge_t));
 VAR_23 = (sli4_diseed_sge_t *)VAR_22;
 VAR_23->ref_tag_cmp = VAR_21->ref_tag_cmp;
 VAR_23->ref_tag_repl = VAR_21->ref_tag_repl;
 VAR_23->app_tag_repl = VAR_21->app_tag_repl;
 VAR_23->repl_app_tag = VAR_21->repl_app_tag;
 if (VAR_6 != VAR_19->sli.if_type) {
  VAR_23->atrt = VAR_21->disable_app_ref_ffff;
  VAR_23->at = VAR_21->disable_app_ffff;
 }
 VAR_23->sge_type = VAR_16;

 if (((VAR_20->type == VAR_3) || (VAR_20->type == VAR_2)) &&
  (VAR_6 != VAR_19->sli.if_type) && VAR_21->dif_separate) {
  VAR_23->sge_type = VAR_17;
 }

 VAR_23->app_tag_cmp = VAR_21->app_tag_cmp;
 VAR_23->dif_blk_size = VAR_21->blk_size;
 VAR_23->auto_incr_ref_tag = VAR_21->auto_incr_ref_tag;
 VAR_23->check_app_tag = VAR_21->check_app_tag;
 VAR_23->check_ref_tag = VAR_21->check_ref_tag;
 VAR_23->check_crc = VAR_21->check_guard;
 VAR_23->new_ref_tag = VAR_21->repl_ref_tag;

 switch(VAR_21->dif_oper) {
 case 129:
  VAR_23->dif_op_rx = VAR_14;
  VAR_23->dif_op_tx = VAR_14;
  break;
 case 131:
  VAR_23->dif_op_rx = VAR_12;
  VAR_23->dif_op_tx = VAR_12;
  break;
 case 130:
  VAR_23->dif_op_rx = VAR_13;
  VAR_23->dif_op_tx = VAR_13;
  break;
 case 134:
  VAR_23->dif_op_rx = VAR_9;
  VAR_23->dif_op_tx = VAR_9;
  break;
 case 132:
  VAR_23->dif_op_rx = VAR_11;
  VAR_23->dif_op_tx = VAR_11;
  break;
 case 136:
  VAR_23->dif_op_rx = VAR_7;
  VAR_23->dif_op_tx = VAR_7;
  break;
 case 133:
  VAR_23->dif_op_rx = VAR_10;
  VAR_23->dif_op_tx = VAR_10;
  break;
 case 135:
  VAR_23->dif_op_rx = VAR_8;
  VAR_23->dif_op_tx = VAR_8;
  break;
 case 128:
  VAR_23->dif_op_rx = VAR_15;
  VAR_23->dif_op_tx = VAR_15;
  break;
 default:
  FUNC_0(VAR_19->os, "unsupported DIF operation %#x\n",
       VAR_21->dif_oper);
  return VAR_4;
 }




 VAR_22->last = VAR_18;
 if (VAR_20->n_sge) {
  VAR_22[-1].last = VAR_0;
 }

 VAR_20->n_sge++;

 return VAR_5;
}
