
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u64 ;
struct umr_common {int sem; int qp; } ;
struct TYPE_9__ {int send_flags; int * wr_cqe; } ;
struct TYPE_7__ {void* virt_addr; } ;
struct mlx5_umr_wr {int access_flags; TYPE_4__ wr; struct ib_pd* pd; void* length; TYPE_2__ target; } ;
struct mlx5_ib_umr_context {int status; int done; int cqe; } ;
struct TYPE_8__ {int key; } ;
struct mlx5_ib_mr {TYPE_3__ mmkey; int umem; } ;
struct TYPE_6__ {struct device* dma_device; } ;
struct mlx5_ib_dev {struct umr_common umrc; TYPE_1__ ib_dev; } ;
struct ib_sge {int dummy; } ;
struct ib_send_wr {int dummy; } ;
struct ib_pd {int device; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mlx5_ib_dev*,int ,int,int,int*,int **,int *) ;
 int FUNC_1 (struct device*,int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_4__*,struct ib_send_wr**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx5_ib_umr_context*) ;
 int FUNC_6 (struct mlx5_ib_dev*,char*,int) ;
 int FUNC_7 (struct ib_pd*,TYPE_4__*,struct ib_sge*,int ,int,int ,int) ;
 struct mlx5_ib_dev* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct ib_pd *VAR_10, struct mlx5_ib_mr *VAR_11, u64 VAR_12,
       u64 VAR_13, int VAR_14, int VAR_15, int VAR_16,
       int VAR_17, int VAR_18)
{
 struct mlx5_ib_dev *VAR_19 = FUNC_8(VAR_10->device);
 struct device *VAR_20 = VAR_19->ib_dev.dma_device;
 struct mlx5_ib_umr_context VAR_21;
 struct ib_send_wr *VAR_22;
 struct mlx5_umr_wr VAR_23 = {};
 struct ib_sge VAR_24;
 struct umr_common *VAR_25 = &VAR_19->umrc;
 dma_addr_t VAR_26 = 0;
 __be64 *VAR_27 = ((void*)0);
 int VAR_28;
 int VAR_29;

 FUNC_5(&VAR_21);

 VAR_23.wr.wr_cqe = &VAR_21.cqe;
 VAR_23.wr.send_flags = VAR_6;

 if (VAR_18 & VAR_4) {
  VAR_29 = FUNC_0(VAR_19, VAR_11->umem, VAR_14, VAR_15, &VAR_28,
         &VAR_27, &VAR_26);
  if (VAR_29)
   return VAR_29;

  VAR_23.target.virt_addr = VAR_12;
  VAR_23.length = VAR_13;
  VAR_23.wr.send_flags |= VAR_9;
 }

 FUNC_7(VAR_10, &VAR_23.wr, &VAR_24, VAR_26, VAR_14, VAR_11->mmkey.key,
       VAR_15);

 if (VAR_18 & VAR_3) {
  VAR_23.pd = VAR_10;
  VAR_23.wr.send_flags |= VAR_8;
 }

 if (VAR_18 & VAR_2) {
  VAR_23.access_flags = VAR_17;
  VAR_23.wr.send_flags |= VAR_7;
 }


 FUNC_2(&VAR_25->sem);
 VAR_29 = FUNC_3(VAR_25->qp, &VAR_23.wr, &VAR_22);

 if (VAR_29) {
  FUNC_6(VAR_19, "post send failed, err %d\n", VAR_29);
 } else {
  FUNC_10(&VAR_21.done);
  if (VAR_21.status != VAR_5) {
   FUNC_6(VAR_19, "reg umr failed (%u)\n",
         VAR_21.status);
   VAR_29 = -VAR_1;
  }
 }

 FUNC_9(&VAR_25->sem);
 if (VAR_18 & VAR_4) {
  FUNC_1(VAR_20, VAR_26, VAR_28, VAR_0);
  FUNC_4(VAR_27);
 }
 return VAR_29;
}
