
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_11__ {int auto_xfer_rdy_size; } ;
struct TYPE_16__ {int os; TYPE_1__ config; int * auto_xfer_rdy_buf_pool; } ;
typedef TYPE_6__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_15__ {int rqindex; int dma; } ;
struct TYPE_13__ {int size; int len; TYPE_7__* alloc; TYPE_2__* virt; } ;
struct TYPE_14__ {TYPE_3__ dma; int rqindex; } ;
struct TYPE_12__ {int f_ctl; int type; int r_ctl; int info; } ;
struct TYPE_17__ {TYPE_5__ payload; TYPE_4__ header; TYPE_2__ hdr; } ;
typedef TYPE_7__ ocs_hw_auto_xfer_rdy_buffer_t ;


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
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ,TYPE_7__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (int ,int,scalar_t__,int ) ;
 TYPE_7__* FUNC_6 (int *,scalar_t__) ;

ocs_hw_rtn_e
FUNC_7(ocs_hw_t *VAR_14, uint32_t VAR_15)
{
 ocs_hw_auto_xfer_rdy_buffer_t *VAR_16;
 uint32_t VAR_17;

 VAR_14->auto_xfer_rdy_buf_pool = FUNC_5(VAR_14->os, sizeof(ocs_hw_auto_xfer_rdy_buffer_t), VAR_15, VAR_0);
 if (VAR_14->auto_xfer_rdy_buf_pool == ((void*)0)) {
  FUNC_4(VAR_14->os, "Failure to allocate auto xfer ready buffer pool\n");
  return VAR_11;
 }

 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {

  VAR_16 = FUNC_6(VAR_14->auto_xfer_rdy_buf_pool, VAR_17);
  FUNC_3(VAR_16 != ((void*)0));


  if (FUNC_1(VAR_14->os, &VAR_16->payload.dma, VAR_14->config.auto_xfer_rdy_size, VAR_13)) {
   FUNC_4(VAR_14->os, "DMA allocation failed\n");
   FUNC_2(VAR_14->os, VAR_16, sizeof(*VAR_16));
   return VAR_11;
  }


  VAR_16->hdr.info = VAR_7;
  VAR_16->hdr.r_ctl = VAR_6;
  VAR_16->hdr.type = VAR_8;
  VAR_16->hdr.f_ctl = FUNC_0(VAR_2 |
         VAR_3 |
         VAR_4 |
         VAR_1 |
         VAR_5);


  VAR_16->header.rqindex = VAR_10;
  VAR_16->header.dma.virt = &VAR_16->hdr;
  VAR_16->header.dma.alloc = VAR_16;
  VAR_16->header.dma.size = sizeof(VAR_16->hdr);
  VAR_16->header.dma.len = sizeof(VAR_16->hdr);

  VAR_16->payload.rqindex = VAR_9;
 }
 return VAR_12;
}
