
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
struct TYPE_9__ {int * wr_cqe; } ;
struct mlx5_umr_wr {TYPE_4__ wr; } ;
struct mlx5_ib_umr_context {scalar_t__ status; int done; int cqe; } ;
struct TYPE_7__ {int pd; void* size; void* iova; int key; } ;
struct mlx5_ib_mr {int live; TYPE_2__ mmkey; } ;
struct TYPE_6__ {struct device* dma_device; } ;
struct mlx5_ib_dev {struct umr_common umrc; TYPE_1__ ib_dev; } ;
struct ib_umem {int dummy; } ;
struct ib_sge {int dummy; } ;
struct ib_send_wr {int dummy; } ;
struct ib_pd {int device; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
typedef int __be64 ;
struct TYPE_8__ {int pdn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5_ib_mr* FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct mlx5_ib_dev*,int ,int) ;
 struct mlx5_ib_mr* FUNC_2 (struct mlx5_ib_dev*,int) ;
 int FUNC_3 (struct mlx5_ib_dev*,struct ib_umem*,int,int,int*,int **,int *) ;
 int FUNC_4 (struct device*,int ,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 int FUNC_7 (int ,TYPE_4__*,struct ib_send_wr**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mlx5_ib_umr_context*) ;
 int FUNC_10 (struct mlx5_ib_dev*,char*,...) ;
 int FUNC_11 (struct mlx5_ib_dev*,int) ;
 int FUNC_12 (struct ib_pd*,TYPE_4__*,struct ib_sge*,int ,int,int ,int,void*,void*,int) ;
 struct mlx5_ib_dev* FUNC_13 (int ) ;
 TYPE_3__* FUNC_14 (struct ib_pd*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static struct mlx5_ib_mr *FUNC_17(struct ib_pd *VAR_4, struct ib_umem *VAR_5,
      u64 VAR_6, u64 VAR_7, int VAR_8,
      int VAR_9, int VAR_10, int VAR_11)
{
 struct mlx5_ib_dev *VAR_12 = FUNC_13(VAR_4->device);
 struct device *VAR_13 = VAR_12->ib_dev.dma_device;
 struct umr_common *VAR_14 = &VAR_12->umrc;
 struct mlx5_ib_umr_context VAR_15;
 struct mlx5_umr_wr VAR_16 = {};
 struct ib_send_wr *VAR_17;
 struct mlx5_ib_mr *VAR_18;
 struct ib_sge VAR_19;
 int VAR_20;
 __be64 *VAR_21;
 dma_addr_t VAR_22;
 int VAR_23 = 0;
 int VAR_24;

 for (VAR_24 = 0; VAR_24 < 1; VAR_24++) {
  VAR_18 = FUNC_2(VAR_12, VAR_10);
  if (VAR_18)
   break;

  VAR_23 = FUNC_1(VAR_12, FUNC_11(VAR_12, VAR_10), 1);
  if (VAR_23 && VAR_23 != -VAR_1) {
   FUNC_10(VAR_12, "add_keys failed, err %d\n", VAR_23);
   break;
  }
 }

 if (!VAR_18)
  return FUNC_0(-VAR_1);

 VAR_23 = FUNC_3(VAR_12, VAR_5, VAR_8, VAR_9, &VAR_20, &VAR_21,
        &VAR_22);
 if (VAR_23)
  goto free_mr;

 FUNC_9(&VAR_15);

 VAR_16.wr.wr_cqe = &VAR_15.cqe;
 FUNC_12(VAR_4, &VAR_16.wr, &VAR_19, VAR_22, VAR_8, VAR_18->mmkey.key,
    VAR_9, VAR_6, VAR_7, VAR_11);

 FUNC_5(&VAR_14->sem);
 VAR_23 = FUNC_7(VAR_14->qp, &VAR_16.wr, &VAR_17);
 if (VAR_23) {
  FUNC_10(VAR_12, "post send failed, err %d\n", VAR_23);
  goto unmap_dma;
 } else {
  FUNC_16(&VAR_15.done);
  if (VAR_15.status != VAR_3) {
   FUNC_10(VAR_12, "reg umr failed\n");
   VAR_23 = -VAR_2;
  }
 }

 VAR_18->mmkey.iova = VAR_6;
 VAR_18->mmkey.size = VAR_7;
 VAR_18->mmkey.pd = FUNC_14(VAR_4)->pdn;

 VAR_18->live = 1;

unmap_dma:
 FUNC_15(&VAR_14->sem);
 FUNC_4(VAR_13, VAR_22, VAR_20, VAR_0);

 FUNC_8(VAR_21);

free_mr:
 if (VAR_23) {
  FUNC_6(VAR_12, VAR_18);
  return FUNC_0(VAR_23);
 }

 return VAR_18;
}
