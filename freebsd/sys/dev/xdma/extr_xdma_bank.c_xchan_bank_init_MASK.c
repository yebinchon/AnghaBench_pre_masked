
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdma_controller_t ;
struct TYPE_3__ {int xr_num; int bank; struct xdma_request* xr_mem; int * xdma; } ;
typedef TYPE_1__ xdma_channel_t ;
struct xdma_request {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct xdma_request*,int ) ;
 struct xdma_request* FUNC_2 (int,int ,int) ;
 int VAR_3 ;

void
FUNC_3(xdma_channel_t *VAR_4)
{
 struct xdma_request *VAR_5;
 xdma_controller_t *VAR_6;
 int VAR_7;

 VAR_6 = VAR_4->xdma;
 FUNC_0(VAR_6 != ((void*)0), ("xdma is NULL"));

 VAR_4->xr_mem = FUNC_2(sizeof(struct xdma_request) * VAR_4->xr_num,
     VAR_1, VAR_0 | VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_4->xr_num; VAR_7++) {
  VAR_5 = &VAR_4->xr_mem[VAR_7];
  FUNC_1(&VAR_4->bank, VAR_5, VAR_3);
 }
}
