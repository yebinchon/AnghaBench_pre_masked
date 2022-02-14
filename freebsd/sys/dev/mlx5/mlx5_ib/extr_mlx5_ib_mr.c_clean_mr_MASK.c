
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int key; } ;
struct TYPE_7__ {int psv_idx; } ;
struct TYPE_6__ {int psv_idx; } ;
struct TYPE_5__ {int device; } ;
struct mlx5_ib_mr {int umred; TYPE_4__ mmkey; struct mlx5_ib_mr* sig; TYPE_3__ psv_wire; TYPE_2__ psv_memory; TYPE_1__ ibmr; } ;
struct mlx5_ib_dev {int mdev; } ;


 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 int FUNC_2 (struct mlx5_ib_mr*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mlx5_ib_mr*) ;
 int FUNC_5 (struct mlx5_ib_dev*,char*,...) ;
 struct mlx5_ib_dev* FUNC_6 (int ) ;
 int FUNC_7 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;

__attribute__((used)) static int FUNC_8(struct mlx5_ib_mr *VAR_0)
{
 struct mlx5_ib_dev *VAR_1 = FUNC_6(VAR_0->ibmr.device);
 int VAR_2 = VAR_0->umred;
 int VAR_3;

 if (VAR_0->sig) {
  if (FUNC_3(VAR_1->mdev,
       VAR_0->sig->psv_memory.psv_idx))
   FUNC_5(VAR_1, "failed to destroy mem psv %d\n",
         VAR_0->sig->psv_memory.psv_idx);
  if (FUNC_3(VAR_1->mdev,
       VAR_0->sig->psv_wire.psv_idx))
   FUNC_5(VAR_1, "failed to destroy wire psv %d\n",
         VAR_0->sig->psv_wire.psv_idx);
  FUNC_2(VAR_0->sig);
  VAR_0->sig = ((void*)0);
 }

 FUNC_4(VAR_0);

 if (!VAR_2) {
  VAR_3 = FUNC_0(VAR_1, VAR_0);
  if (VAR_3) {
   FUNC_5(VAR_1, "failed to destroy mkey 0x%x (%d)\n",
         VAR_0->mmkey.key, VAR_3);
   return VAR_3;
  }
 } else {
  VAR_3 = FUNC_7(VAR_1, VAR_0);
  if (VAR_3) {
   FUNC_5(VAR_1, "failed unregister\n");
   return VAR_3;
  }
  FUNC_1(VAR_1, VAR_0);
 }

 if (!VAR_2)
  FUNC_2(VAR_0);

 return 0;
}
