
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdma_controller_t ;
struct TYPE_7__ {int caps; int * xdma; } ;
typedef TYPE_2__ xdma_channel_t ;
struct TYPE_6__ {int nsegs; int nsegs_left; } ;
struct xdma_request {TYPE_1__ buf; } ;
struct bus_dma_segment {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct xdma_request*,struct bus_dma_segment*) ;
 int FUNC_1 (TYPE_2__*,struct xdma_request*,struct bus_dma_segment*) ;

__attribute__((used)) static int
FUNC_2(xdma_channel_t *VAR_1,
    struct xdma_request *VAR_2, struct bus_dma_segment *VAR_3)
{
 xdma_controller_t *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = VAR_1->xdma;

 VAR_5 = 0;
 VAR_6 = 0;

 if (VAR_1->caps & VAR_0)
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 else
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_6 == 0)
  return (0);

 VAR_2->buf.nsegs = VAR_6;
 VAR_2->buf.nsegs_left = VAR_6;

 return (VAR_6);
}
