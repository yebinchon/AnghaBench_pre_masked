
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {void* sge_type; void* last; int buffer_length; int buffer_address_low; int buffer_address_high; } ;
typedef TYPE_5__ sli4_sge_t ;
struct TYPE_18__ {int dif_blk_size; void* auto_incr_ref_tag; int check_app_tag; int app_tag_cmp; int repl_app_tag; int sge_type; } ;
typedef TYPE_6__ sli4_diseed_sge_t ;
struct TYPE_14__ {int auto_xfer_rdy_blk_size_chip; int auto_xfer_rdy_app_tag_valid; int auto_xfer_rdy_app_tag_value; scalar_t__ auto_xfer_rdy_p_type; } ;
struct TYPE_19__ {TYPE_2__ config; int auto_xfer_rdy_buf_pool; } ;
typedef TYPE_7__ ocs_hw_t ;
struct TYPE_13__ {TYPE_5__* virt; } ;
struct TYPE_20__ {TYPE_9__* axr_buf; TYPE_1__ def_sgl; } ;
typedef TYPE_8__ ocs_hw_io_t ;
struct TYPE_15__ {int size; int phys; } ;
struct TYPE_16__ {TYPE_3__ dma; } ;
struct TYPE_21__ {TYPE_4__ payload; } ;
typedef TYPE_9__ ocs_hw_auto_xfer_rdy_buffer_t ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_9__* FUNC_2 (int ) ;

uint8_t
FUNC_3(ocs_hw_t *VAR_4, ocs_hw_io_t *VAR_5, int VAR_6)
{
 ocs_hw_auto_xfer_rdy_buffer_t *VAR_7;
 sli4_sge_t *VAR_8;

 if(!VAR_6) {
  VAR_7 = FUNC_2(VAR_4->auto_xfer_rdy_buf_pool);
  VAR_5->axr_buf = VAR_7;
 }

 VAR_8 = VAR_5->def_sgl.virt;
 VAR_8[0].sge_type = VAR_2;
 VAR_8[0].last = 0;
 if (VAR_4->config.auto_xfer_rdy_p_type) {
  sli4_diseed_sge_t *VAR_9 = (sli4_diseed_sge_t*)&VAR_8[1];

  VAR_9->sge_type = VAR_1;
  VAR_9->repl_app_tag = VAR_4->config.auto_xfer_rdy_app_tag_value;
  VAR_9->app_tag_cmp = VAR_4->config.auto_xfer_rdy_app_tag_value;
  VAR_9->check_app_tag = VAR_4->config.auto_xfer_rdy_app_tag_valid;
  VAR_9->auto_incr_ref_tag = VAR_3;
  VAR_9->dif_blk_size = VAR_4->config.auto_xfer_rdy_blk_size_chip;
 } else {
  VAR_8[1].sge_type = VAR_2;
  VAR_8[1].last = 0;
 }

 VAR_8[2].sge_type = VAR_0;
 VAR_8[2].buffer_address_high = FUNC_0(VAR_5->axr_buf->payload.dma.phys);
 VAR_8[2].buffer_address_low = FUNC_1(VAR_5->axr_buf->payload.dma.phys);
 VAR_8[2].buffer_length = VAR_5->axr_buf->payload.dma.size;
 VAR_8[2].last = VAR_3;
 VAR_8[3].sge_type = VAR_2;

 return 0;
}
