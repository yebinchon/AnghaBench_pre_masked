
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdma_controller_t ;
struct TYPE_6__ {int queue_in; int * xdma; } ;
typedef TYPE_1__ xdma_channel_t ;
typedef void* uint8_t ;
struct xdma_request {int direction; int block_num; uintptr_t src_addr; uintptr_t dst_addr; void* dst_width; void* src_width; int req_type; int block_len; int * bp; int * m; void* user; } ;
typedef enum xdma_direction { ____Placeholder_xdma_direction } xdma_direction ;
typedef int bus_size_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,struct xdma_request*,int ) ;
 int VAR_0 ;
 struct xdma_request* FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;

int
FUNC_5(xdma_channel_t *VAR_2, uintptr_t VAR_3, uintptr_t VAR_4,
    uint8_t VAR_5, uint8_t VAR_6, bus_size_t VAR_7,
    enum xdma_direction VAR_8, void *VAR_9)
{
 struct xdma_request *VAR_10;
 xdma_controller_t *VAR_11;

 VAR_11 = VAR_2->xdma;
 FUNC_0(VAR_11 != ((void*)0), ("xdma is NULL"));

 VAR_10 = FUNC_4(VAR_2);
 if (VAR_10 == ((void*)0))
  return (-1);

 VAR_10->user = VAR_9;
 VAR_10->direction = VAR_8;
 VAR_10->m = ((void*)0);
 VAR_10->bp = ((void*)0);
 VAR_10->block_num = 1;
 VAR_10->block_len = VAR_7;
 VAR_10->req_type = VAR_0;
 VAR_10->src_addr = VAR_3;
 VAR_10->dst_addr = VAR_4;
 VAR_10->src_width = VAR_5;
 VAR_10->dst_width = VAR_6;

 FUNC_1(VAR_2);
 FUNC_3(&VAR_2->queue_in, VAR_10, VAR_1);
 FUNC_2(VAR_2);

 return (0);
}
