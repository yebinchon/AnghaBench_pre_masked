
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int lo; int hi; } ;
struct rdma_cqe_requester {int flags; TYPE_2__ qp_handle; } ;
union rdma_cqe {int resp; struct rdma_cqe_requester req; } ;
typedef scalar_t__ u32 ;
struct qlnxr_qp {int ibqp; } ;
struct qlnxr_dev {TYPE_5__* ha; } ;
struct TYPE_10__ {int icid; } ;
struct TYPE_11__ {TYPE_3__ data; } ;
struct qlnxr_cq {scalar_t__ cq_type; int cq_lock; TYPE_4__ db; int arm_flags; scalar_t__ cq_cons; int pbl; union rdma_cqe* latest_cqe; int icid; scalar_t__ destroyed; } ;
struct ib_wc {int * qp; } ;
struct ib_cq {int device; } ;
struct TYPE_12__ {TYPE_1__* ifp; } ;
typedef TYPE_5__ qlnx_host_t ;
typedef enum rdma_cqe_type { ____Placeholder_rdma_cqe_type } rdma_cqe_type ;
struct TYPE_8__ {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_5__*,char*,...) ;
 int FUNC_3 (TYPE_5__*,char*,...) ;
 int VAR_3 ;




 int FUNC_4 (struct qlnxr_dev*,struct qlnxr_cq*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 struct qlnxr_cq* FUNC_6 (struct ib_cq*) ;
 struct qlnxr_dev* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct qlnxr_cq*,union rdma_cqe*) ;
 int FUNC_9 (struct ib_cq*,int,struct ib_wc*) ;
 int FUNC_10 (struct qlnxr_dev*,struct qlnxr_qp*,struct qlnxr_cq*,int,struct ib_wc*,struct rdma_cqe_requester*) ;
 int FUNC_11 (struct qlnxr_dev*,struct qlnxr_qp*,struct qlnxr_cq*,int,struct ib_wc*,int *,int*) ;
 int FUNC_12 (struct qlnxr_dev*,struct qlnxr_qp*,struct qlnxr_cq*,int,struct ib_wc*,int *,int*) ;
 int FUNC_13 () ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (struct qlnxr_cq*,struct qlnxr_qp*,struct rdma_cqe_requester*,int*) ;

int
FUNC_17(struct ib_cq *VAR_4, int VAR_5, struct ib_wc *VAR_6)
{
 struct qlnxr_cq *VAR_7 = FUNC_6(VAR_4);
 struct qlnxr_dev *VAR_8 = FUNC_7((VAR_4->device));
 int VAR_9 = 0;
 union rdma_cqe *VAR_10 = VAR_7->latest_cqe;
 int VAR_11 = 0;
 u32 VAR_12, VAR_13;
 unsigned long VAR_14;
 qlnx_host_t *VAR_15 = VAR_8->ha;

 FUNC_3(VAR_15, "enter\n");

 if (!(VAR_15->ifp->if_drv_flags & VAR_1))
  return -VAR_0;

 if (VAR_7->destroyed) {
  FUNC_2(VAR_15, "called after destroy for cq %p (icid=%d)\n",
   VAR_7, VAR_7->icid);
  return 0;
 }

 if (VAR_7->cq_type == VAR_2)
  return FUNC_9(VAR_4, VAR_5, VAR_6);

 FUNC_14(&VAR_7->cq_lock, VAR_14);

 VAR_12 = FUNC_5(&VAR_7->pbl);

 while (VAR_5 && FUNC_8(VAR_7, VAR_10)) {
  int VAR_16 = 0;
  struct qlnxr_qp *VAR_17;
  struct rdma_cqe_requester *VAR_18;
  enum rdma_cqe_type VAR_19;


  FUNC_13();

  VAR_18 = &VAR_10->req;
  VAR_17 = (struct qlnxr_qp *)(uintptr_t)FUNC_1(VAR_18->qp_handle.hi,
      VAR_18->qp_handle.lo);

  if (!VAR_17) {
   FUNC_2(VAR_15, "qp = NULL\n");
   break;
  }

  VAR_6->qp = &VAR_17->ibqp;

  VAR_19 = FUNC_0(VAR_18->flags, VAR_3);

  switch (VAR_19) {
  case 130:
   VAR_16 = FUNC_10(VAR_8, VAR_17, VAR_7, VAR_5,
     VAR_6, &VAR_10->req);
   FUNC_16(VAR_7, VAR_17, &VAR_10->req, &VAR_11);
   break;
  case 129:
   VAR_16 = FUNC_11(VAR_8, VAR_17, VAR_7, VAR_5,
     VAR_6, &VAR_10->resp, &VAR_11);
   break;
  case 128:
   VAR_16 = FUNC_12(VAR_8, VAR_17, VAR_7, VAR_5,
     VAR_6, &VAR_10->resp, &VAR_11);
   break;
  case 131:
  default:
   FUNC_2(VAR_15, "cqe type [0x%x] invalid\n", VAR_19);
   break;
  }
  VAR_5 -= VAR_16;
  VAR_6 += VAR_16;
  VAR_9 += VAR_16;

  VAR_10 = VAR_7->latest_cqe;
 }
 VAR_13 = FUNC_5(&VAR_7->pbl);

 VAR_7->cq_cons += VAR_13 - VAR_12;

 if (VAR_11) {



  FUNC_4(VAR_8, VAR_7, VAR_7->cq_cons - 1, VAR_7->arm_flags);
  FUNC_3(VAR_15, "cq = %p cons = 0x%x "
   "arm_flags = 0x%x db.icid = 0x%x\n", VAR_7,
   (VAR_7->cq_cons - 1), VAR_7->arm_flags, VAR_7->db.data.icid);
 }

 FUNC_15(&VAR_7->cq_lock, VAR_14);

 FUNC_3(VAR_15, "exit\n");

 return VAR_9;
}
