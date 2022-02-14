
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svcxprt_rdma {int sc_dma_used; } ;
struct svc_rdma_fastreg_mr {int page_list_len; int direction; TYPE_2__* mr; TYPE_1__* page_list; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {int * page_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct svcxprt_rdma *VAR_1,
      struct svc_rdma_fastreg_mr *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2->page_list_len; VAR_3++) {
  dma_addr_t VAR_4 = VAR_2->page_list->page_list[VAR_3];
  if (FUNC_1(VAR_2->mr->device, VAR_4))
   continue;
  FUNC_0(&VAR_1->sc_dma_used);
  FUNC_2(VAR_2->mr->device, VAR_4, VAR_0,
      VAR_2->direction);
 }
}
