
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ib_pd {int dummy; } ;
struct qlnxr_pd {struct ib_pd ibpd; TYPE_1__* uctx; int pd_id; } ;
struct qlnxr_dev {int pd_count; int * rdma_ctx; int * ha; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int qlnx_host_t ;
struct TYPE_2__ {struct qlnxr_pd* pd; } ;


 int VAR_0 ;
 struct ib_pd* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 struct qlnxr_dev* FUNC_6 (struct ib_device*) ;
 TYPE_1__* FUNC_7 (struct ib_ucontext*) ;
 int FUNC_8 (struct ib_udata*,int *,int) ;
 int FUNC_9 (struct qlnxr_pd*) ;
 struct qlnxr_pd* FUNC_10 (int,int ) ;

struct ib_pd *
FUNC_11(struct ib_device *VAR_2, struct ib_ucontext *VAR_3,
 struct ib_udata *VAR_4)
{
 struct qlnxr_pd *VAR_5 = ((void*)0);
 u16 VAR_6;
 int VAR_7;
 struct qlnxr_dev *VAR_8;
 qlnx_host_t *VAR_9;

 VAR_8 = FUNC_6(VAR_2);
 VAR_9 = VAR_8->ha;

 FUNC_2(VAR_9, "ibdev = %p context = %p"
  " udata = %p enter\n", VAR_2, VAR_3, VAR_4);

 if (VAR_8->rdma_ctx == ((void*)0)) {
  FUNC_1(VAR_9, "dev->rdma_ctx = NULL\n");
  VAR_7 = -1;
  goto err;
 }

 VAR_5 = FUNC_10(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_7 = -VAR_0;
  FUNC_1(VAR_9, "kzalloc(pd) = NULL\n");
  goto err;
 }

 VAR_7 = FUNC_4(VAR_8->rdma_ctx, &VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_9, "ecore_rdma_alloc_pd failed\n");
  goto err;
 }

 VAR_5->pd_id = VAR_6;

 if (VAR_4 && VAR_3) {

  VAR_7 = FUNC_8(VAR_4, &VAR_5->pd_id, sizeof(VAR_5->pd_id));
  if (VAR_7) {
   FUNC_1(VAR_9, "ib_copy_to_udata failed\n");
   FUNC_5(VAR_8->rdma_ctx, VAR_6);
   goto err;
  }

  VAR_5->uctx = FUNC_7(VAR_3);
  VAR_5->uctx->pd = VAR_5;
 }

 FUNC_3(&VAR_8->pd_count, 1);
 FUNC_2(VAR_9, "exit [pd, pd_id, pd_count] = [%p, 0x%x, %d]\n",
  VAR_5, VAR_6, VAR_8->pd_count);

 return &VAR_5->ibpd;

err:
 FUNC_9(VAR_5);
 FUNC_2(VAR_9, "exit -1\n");
 return FUNC_0(VAR_7);
}
