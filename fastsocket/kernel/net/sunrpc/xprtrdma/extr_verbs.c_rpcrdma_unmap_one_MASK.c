
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpcrdma_mr_seg {int mr_dir; int mr_dmalen; int mr_dma; scalar_t__ mr_page; } ;
struct rpcrdma_ia {TYPE_1__* ri_id; } ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct rpcrdma_ia *VAR_0, struct rpcrdma_mr_seg *VAR_1)
{
 if (VAR_1->mr_page)
  FUNC_0(VAR_0->ri_id->device,
    VAR_1->mr_dma, VAR_1->mr_dmalen, VAR_1->mr_dir);
 else
  FUNC_1(VAR_0->ri_id->device,
    VAR_1->mr_dma, VAR_1->mr_dmalen, VAR_1->mr_dir);
}
