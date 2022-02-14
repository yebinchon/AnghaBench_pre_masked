
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rdma_sq_send_wqe {int wqe_size; int flags; } ;
struct qlnxr_qp {int dummy; } ;
struct qlnxr_dev {int * ha; } ;
struct ib_send_wr {int send_flags; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct rdma_sq_send_wqe*,int ,int) ;
 int FUNC_3 (struct qlnxr_dev*,struct qlnxr_qp*,int *,struct ib_send_wr*,struct ib_send_wr**,int *,int ) ;
 int FUNC_4 (struct qlnxr_dev*,struct qlnxr_qp*,int *,struct ib_send_wr*) ;

__attribute__((used)) static u32
FUNC_5(struct qlnxr_dev *VAR_2,
 struct qlnxr_qp *VAR_3,
 struct rdma_sq_send_wqe *VAR_4,
 struct rdma_sq_send_wqe *VAR_5,
 struct ib_send_wr *VAR_6,
 struct ib_send_wr **VAR_7)
{
 qlnx_host_t *VAR_8;
 u32 VAR_9 = 0;

 VAR_8 = VAR_2->ha;

 FUNC_0(VAR_8, "enter\n");

 FUNC_2(VAR_5, 0, sizeof(*VAR_5));

 if (VAR_6->send_flags & VAR_0) {
  u8 VAR_10 = 0;
  FUNC_1(VAR_10, VAR_1, 1);
  return FUNC_3(VAR_2, VAR_3, &VAR_4->wqe_size,
    VAR_6, VAR_7, &VAR_4->flags, VAR_10);
 }

 VAR_9 = FUNC_4(VAR_2, VAR_3, &VAR_4->wqe_size, VAR_6);

 FUNC_0(VAR_8, "exit ret = 0x%x\n", VAR_9);

 return (VAR_9);
}
