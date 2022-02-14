
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rdma_sq_rdma_wqe_2nd {int r_key; } ;
struct rdma_sq_rdma_wqe_1st {int wqe_size; int flags; } ;
struct qlnxr_qp {int dummy; } ;
struct qlnxr_dev {int * ha; } ;
struct ib_send_wr {int send_flags; } ;
typedef int qlnx_host_t ;
struct TYPE_2__ {int remote_addr; int rkey; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct rdma_sq_rdma_wqe_2nd*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qlnxr_dev*,struct qlnxr_qp*,int *,struct ib_send_wr*,struct ib_send_wr**,int *,int ) ;
 int FUNC_5 (struct qlnxr_dev*,struct qlnxr_qp*,int *,struct ib_send_wr*) ;
 TYPE_1__* FUNC_6 (struct ib_send_wr*) ;
 int VAR_2 ;

__attribute__((used)) static u32
FUNC_7(struct qlnxr_dev *VAR_3,
 struct qlnxr_qp *VAR_4,
 struct rdma_sq_rdma_wqe_1st *VAR_5,
 struct rdma_sq_rdma_wqe_2nd *VAR_6,
 struct ib_send_wr *VAR_7,
 struct ib_send_wr **VAR_8)
{
 qlnx_host_t *VAR_9;
 u32 VAR_10 = 0;

 VAR_9 = VAR_3->ha;

 FUNC_0(VAR_9, "enter\n");

 VAR_6->r_key = FUNC_3(FUNC_6(VAR_7)->rkey);
 FUNC_2(VAR_6, VAR_2, FUNC_6(VAR_7)->remote_addr);

 if (VAR_7->send_flags & VAR_0) {
  u8 VAR_11 = 0;
  FUNC_1(VAR_11, VAR_1, 1);
  return FUNC_4(VAR_3, VAR_4, &VAR_5->wqe_size,
    VAR_7, VAR_8, &VAR_5->flags, VAR_11);
 }

 VAR_10 = FUNC_5(VAR_3, VAR_4, &VAR_5->wqe_size, VAR_7);

 FUNC_0(VAR_9, "exit ret = 0x%x\n", VAR_10);

 return (VAR_10);
}
