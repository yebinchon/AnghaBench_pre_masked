
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpcrdma_mr_seg {int mr_dir; int mr_dmalen; int mr_offset; int mr_dma; scalar_t__ mr_page; int mr_len; } ;
struct rpcrdma_ia {TYPE_1__* ri_id; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct rpcrdma_ia *VAR_2, struct rpcrdma_mr_seg *VAR_3, int VAR_4)
{
 VAR_3->mr_dir = VAR_4 ? VAR_0 : VAR_1;
 VAR_3->mr_dmalen = VAR_3->mr_len;
 if (VAR_3->mr_page)
  VAR_3->mr_dma = FUNC_0(VAR_2->ri_id->device,
    VAR_3->mr_page, FUNC_2(VAR_3->mr_offset),
    VAR_3->mr_dmalen, VAR_3->mr_dir);
 else
  VAR_3->mr_dma = FUNC_1(VAR_2->ri_id->device,
    VAR_3->mr_offset,
    VAR_3->mr_dmalen, VAR_3->mr_dir);
}
