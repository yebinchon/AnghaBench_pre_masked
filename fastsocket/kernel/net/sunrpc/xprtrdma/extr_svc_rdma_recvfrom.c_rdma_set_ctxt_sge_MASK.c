
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct svcxprt_rdma {int sc_dma_used; int sc_dma_lkey; TYPE_1__* sc_cm_id; } ;
struct svc_rdma_op_ctxt {int count; TYPE_3__* sge; int direction; } ;
struct svc_rdma_fastreg_mr {TYPE_2__* mr; } ;
struct kvec {scalar_t__ iov_len; scalar_t__ iov_base; } ;
struct TYPE_6__ {unsigned long addr; scalar_t__ length; int lkey; } ;
struct TYPE_5__ {int lkey; } ;
struct TYPE_4__ {int device; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int ,scalar_t__,unsigned long,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,unsigned long) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct svcxprt_rdma *VAR_3,
        struct svc_rdma_op_ctxt *VAR_4,
        struct svc_rdma_fastreg_mr *VAR_5,
        struct kvec *VAR_6,
        u64 *VAR_7,
        int VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;

 VAR_4->count = VAR_8;
 VAR_4->direction = VAR_0;
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_4->sge[VAR_9].length = 0;
  if (!VAR_5) {
   FUNC_0(0 == FUNC_4(VAR_6[VAR_9].iov_base));
   VAR_10 = (unsigned long)VAR_6[VAR_9].iov_base & ~VAR_2;
   VAR_4->sge[VAR_9].addr =
    FUNC_2(VAR_3->sc_cm_id->device,
      FUNC_4(VAR_6[VAR_9].iov_base),
      VAR_10,
      VAR_6[VAR_9].iov_len,
      VAR_0);
   if (FUNC_3(VAR_3->sc_cm_id->device,
       VAR_4->sge[VAR_9].addr))
    return -VAR_1;
   VAR_4->sge[VAR_9].lkey = VAR_3->sc_dma_lkey;
   FUNC_1(&VAR_3->sc_dma_used);
  } else {
   VAR_4->sge[VAR_9].addr = (unsigned long)VAR_6[VAR_9].iov_base;
   VAR_4->sge[VAR_9].lkey = VAR_5->mr->lkey;
  }
  VAR_4->sge[VAR_9].length = VAR_6[VAR_9].iov_len;
  *VAR_7 = *VAR_7 + VAR_6[VAR_9].iov_len;
 }
 return 0;
}
