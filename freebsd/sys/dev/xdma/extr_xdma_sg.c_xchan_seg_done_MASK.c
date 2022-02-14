
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xdma_controller_t ;
struct TYPE_10__ {int caps; int queue_out; int processing; int dma_tag_bufs; int * xdma; } ;
typedef TYPE_2__ xdma_channel_t ;
struct xdma_transfer_status {int transferred; int error; } ;
struct TYPE_9__ {int transferred; int error; } ;
struct xchan_buf {scalar_t__ nsegs_left; scalar_t__ vaddr; int map; } ;
struct xdma_request {scalar_t__ direction; scalar_t__ req_type; TYPE_1__ status; int dst_addr; int src_addr; struct xchan_buf buf; int m; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct xdma_request* FUNC_4 (int *) ;
 int FUNC_5 (int *,struct xdma_request*,int ) ;
 int FUNC_6 (int *,struct xdma_request*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (scalar_t__*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ,void*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int VAR_8 ;

void
FUNC_13(xdma_channel_t *VAR_9,
    struct xdma_transfer_status *VAR_10)
{
 struct xdma_request *VAR_11;
 xdma_controller_t *VAR_12;
 struct xchan_buf *VAR_13;
 bus_addr_t VAR_14;

 VAR_12 = VAR_9->xdma;

 VAR_11 = FUNC_4(&VAR_9->processing);
 if (VAR_11 == ((void*)0))
  FUNC_11("request not found\n");

 VAR_13 = &VAR_11->buf;

 FUNC_7(&VAR_13->nsegs_left, 1);

 if (VAR_13->nsegs_left == 0) {
  if (VAR_9->caps & VAR_3) {
   if (VAR_11->direction == VAR_6)
    FUNC_8(VAR_9->dma_tag_bufs, VAR_13->map,
        VAR_1);
   else
    FUNC_8(VAR_9->dma_tag_bufs, VAR_13->map,
        VAR_0);
   FUNC_9(VAR_9->dma_tag_bufs, VAR_13->map);
  } else if (VAR_9->caps & VAR_2) {
   if (VAR_11->req_type == VAR_7 &&
       VAR_11->direction == VAR_5)
    FUNC_10(VAR_11->m, 0, VAR_10->transferred,
        (void *)VAR_11->buf.vaddr);
  } else if (VAR_9->caps & VAR_4) {
   if (VAR_11->direction == VAR_6)
    VAR_14 = VAR_11->src_addr;
   else
    VAR_14 = VAR_11->dst_addr;
   FUNC_12(VAR_9, VAR_14);
  }
  VAR_11->status.error = VAR_10->error;
  VAR_11->status.transferred = VAR_10->transferred;

  FUNC_2(VAR_9);
  FUNC_6(&VAR_9->processing, VAR_11, VAR_8);
  FUNC_3(VAR_9);

  FUNC_0(VAR_9);
  FUNC_5(&VAR_9->queue_out, VAR_11, VAR_8);
  FUNC_1(VAR_9);
 }
}
