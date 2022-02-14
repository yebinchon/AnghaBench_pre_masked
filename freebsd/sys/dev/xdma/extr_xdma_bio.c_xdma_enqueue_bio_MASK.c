
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdma_controller_t ;
struct TYPE_6__ {int queue_in; int * xdma; } ;
typedef TYPE_1__ xdma_channel_t ;
typedef void* uint8_t ;
struct xdma_request {int direction; void* src_addr; void* dst_addr; void* dst_width; void* src_width; int req_type; struct bio* bp; } ;
struct bio {int dummy; } ;
typedef enum xdma_direction { ____Placeholder_xdma_direction } xdma_direction ;
typedef void* bus_addr_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,struct xdma_request*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct xdma_request* FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;

int
FUNC_4(xdma_channel_t *VAR_3, struct bio **VAR_4,
    bus_addr_t VAR_5, uint8_t VAR_6, uint8_t VAR_7,
    enum xdma_direction VAR_8)
{
 struct xdma_request *VAR_9;
 xdma_controller_t *VAR_10;

 VAR_10 = VAR_3->xdma;

 VAR_9 = FUNC_3(VAR_3);
 if (VAR_9 == ((void*)0))
  return (-1);

 VAR_9->direction = VAR_8;
 VAR_9->bp = *VAR_4;
 VAR_9->req_type = VAR_1;
 VAR_9->src_width = VAR_6;
 VAR_9->dst_width = VAR_7;
 if (VAR_8 == VAR_0) {
  VAR_9->dst_addr = VAR_5;
  VAR_9->src_addr = 0;
 } else {
  VAR_9->dst_addr = 0;
  VAR_9->src_addr = VAR_5;
 }

 FUNC_0(VAR_3);
 FUNC_2(&VAR_3->queue_in, VAR_9, VAR_2);
 FUNC_1(VAR_3);

 return (0);
}
