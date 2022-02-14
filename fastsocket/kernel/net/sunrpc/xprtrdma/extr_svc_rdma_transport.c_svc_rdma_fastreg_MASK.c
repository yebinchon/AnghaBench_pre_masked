
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct svcxprt_rdma {int dummy; } ;
struct svc_rdma_fastreg_mr {TYPE_3__* mr; int access_flags; int map_len; int page_list_len; int page_list; scalar_t__ kva; } ;
struct TYPE_4__ {unsigned long iova_start; int rkey; int access_flags; int length; int page_shift; int page_list_len; int page_list; } ;
struct TYPE_5__ {TYPE_1__ fast_reg; } ;
struct ib_send_wr {TYPE_2__ wr; int send_flags; int opcode; } ;
struct TYPE_6__ {int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (struct ib_send_wr*,int ,int) ;
 int FUNC_2 (struct svcxprt_rdma*,struct ib_send_wr*) ;

int FUNC_3(struct svcxprt_rdma *VAR_3,
       struct svc_rdma_fastreg_mr *VAR_4)
{
 struct ib_send_wr VAR_5;
 u8 VAR_6;


 VAR_6 = (u8)(VAR_4->mr->lkey & 0x000000FF);
 FUNC_0(VAR_4->mr, ++VAR_6);


 FUNC_1(&VAR_5, 0, sizeof VAR_5);
 VAR_5.opcode = VAR_1;
 VAR_5.send_flags = VAR_0;
 VAR_5.wr.fast_reg.iova_start = (unsigned long)VAR_4->kva;
 VAR_5.wr.fast_reg.page_list = VAR_4->page_list;
 VAR_5.wr.fast_reg.page_list_len = VAR_4->page_list_len;
 VAR_5.wr.fast_reg.page_shift = VAR_2;
 VAR_5.wr.fast_reg.length = VAR_4->map_len;
 VAR_5.wr.fast_reg.access_flags = VAR_4->access_flags;
 VAR_5.wr.fast_reg.rkey = VAR_4->mr->lkey;
 return FUNC_2(VAR_3, &VAR_5);
}
