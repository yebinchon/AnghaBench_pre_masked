
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int caps; int xr_num; int dma_tag_bufs; struct xdma_request* xr_mem; } ;
typedef TYPE_1__ xdma_channel_t ;
struct xchan_buf {int map; } ;
struct xdma_request {struct xchan_buf buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(xdma_channel_t *VAR_2)
{
 struct xdma_request *VAR_3;
 struct xchan_buf *VAR_4;
 int VAR_5;

 if ((VAR_2->flags & VAR_0) == 0)
  return (-1);

 if (VAR_2->caps & VAR_1) {
  for (VAR_5 = 0; VAR_5 < VAR_2->xr_num; VAR_5++) {
   VAR_3 = &VAR_2->xr_mem[VAR_5];
   VAR_4 = &VAR_3->buf;
   FUNC_1(VAR_2->dma_tag_bufs, VAR_4->map);
  }
  FUNC_0(VAR_2->dma_tag_bufs);
 } else
  FUNC_2(VAR_2);

 VAR_2->flags &= ~VAR_0;

 return (0);
}
