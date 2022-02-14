
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ocs_hw_t ;
struct TYPE_16__ {TYPE_2__* header; } ;
typedef TYPE_7__ ocs_hw_sequence_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_15__ {int rqindex; } ;
struct TYPE_13__ {int size; int len; TYPE_8__* alloc; TYPE_3__* virt; } ;
struct TYPE_14__ {TYPE_4__ dma; int rqindex; } ;
struct TYPE_12__ {int f_ctl; int type; int r_ctl; int info; } ;
struct TYPE_17__ {TYPE_6__ payload; TYPE_5__ header; TYPE_3__ hdr; scalar_t__ call_axr_data; scalar_t__ call_axr_cmd; scalar_t__ fcfi; scalar_t__ cmd_cqe; scalar_t__ data_cqe; } ;
typedef TYPE_8__ ocs_hw_auto_xfer_rdy_buffer_t ;
struct TYPE_10__ {TYPE_8__* alloc; } ;
struct TYPE_11__ {TYPE_1__ dma; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_2(ocs_hw_t *VAR_11, ocs_hw_sequence_t *VAR_12)
{
 ocs_hw_auto_xfer_rdy_buffer_t *VAR_13 = VAR_12->header->dma.alloc;

 VAR_13->data_cqe = 0;
 VAR_13->cmd_cqe = 0;
 VAR_13->fcfi = 0;
 VAR_13->call_axr_cmd = 0;
 VAR_13->call_axr_data = 0;


 VAR_13->hdr.info = VAR_6;
 VAR_13->hdr.r_ctl = VAR_5;
 VAR_13->hdr.type = VAR_7;
 VAR_13->hdr.f_ctl = FUNC_0(VAR_1 |
     VAR_2 |
     VAR_3 |
     VAR_0 |
     VAR_4);


 VAR_13->header.rqindex = VAR_9;
 VAR_13->header.dma.virt = &VAR_13->hdr;
 VAR_13->header.dma.alloc = VAR_13;
 VAR_13->header.dma.size = sizeof(VAR_13->hdr);
 VAR_13->header.dma.len = sizeof(VAR_13->hdr);
 VAR_13->payload.rqindex = VAR_8;

 FUNC_1(VAR_11);

 return VAR_10;
}
