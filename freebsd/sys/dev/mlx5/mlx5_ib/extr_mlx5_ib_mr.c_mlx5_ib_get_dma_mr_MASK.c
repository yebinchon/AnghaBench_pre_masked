
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_mr {int rkey; int lkey; } ;
struct TYPE_4__ {int key; } ;
struct mlx5_ib_mr {struct ib_mr ibmr; int * umem; TYPE_2__ mmkey; } ;
typedef struct mlx5_ib_mr u32 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_pd {int device; } ;
struct TYPE_3__ {int pdn; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int ,struct mlx5_ib_mr*,int ) ;
 int FUNC_2 (void*,void*,struct ib_pd*,int) ;
 int FUNC_3 (void*,void*,int ,int ) ;
 int FUNC_4 (int ) ;
 struct ib_pd* VAR_7 ;
 struct ib_pd* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct mlx5_ib_mr*) ;
 struct mlx5_ib_mr* FUNC_6 (int,int ) ;
 struct ib_pd* VAR_10 ;
 struct ib_pd* VAR_11 ;
 struct ib_pd* VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (struct mlx5_core_dev*,TYPE_2__*,struct mlx5_ib_mr*,int) ;
 struct ib_pd* VAR_14 ;
 struct ib_pd* VAR_15 ;
 struct ib_pd* VAR_16 ;
 int VAR_17 ;
 struct mlx5_ib_dev* FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (struct ib_pd*) ;

struct ib_mr *FUNC_10(struct ib_pd *VAR_18, int VAR_19)
{
 struct mlx5_ib_dev *VAR_20 = FUNC_8(VAR_18->device);
 int VAR_21 = FUNC_4(VAR_9);
 struct mlx5_core_dev *VAR_22 = VAR_20->mdev;
 struct mlx5_ib_mr *VAR_23;
 void *VAR_24;
 u32 *VAR_25;
 int VAR_26;

 VAR_23 = FUNC_6(sizeof(*VAR_23), VAR_1);
 if (!VAR_23)
  return FUNC_0(-VAR_0);

 VAR_25 = FUNC_6(VAR_21, VAR_1);
 if (!VAR_25) {
  VAR_26 = -VAR_0;
  goto err_free;
 }

 VAR_24 = FUNC_1(VAR_9, VAR_25, VAR_13);

 FUNC_2(VAR_24, VAR_24, VAR_8, VAR_6);
 FUNC_2(VAR_24, VAR_24, VAR_7, !!(VAR_19 & VAR_3));
 FUNC_2(VAR_24, VAR_24, VAR_16, !!(VAR_19 & VAR_5));
 FUNC_2(VAR_24, VAR_24, VAR_15, !!(VAR_19 & VAR_4));
 FUNC_2(VAR_24, VAR_24, VAR_12, !!(VAR_19 & VAR_2));
 FUNC_2(VAR_24, VAR_24, VAR_11, 1);

 FUNC_2(VAR_24, VAR_24, VAR_10, 1);
 FUNC_2(VAR_24, VAR_24, VAR_18, FUNC_9(VAR_18)->pdn);
 FUNC_2(VAR_24, VAR_24, VAR_14, 0xffffff);
 FUNC_3(VAR_24, VAR_24, VAR_17, 0);

 VAR_26 = FUNC_7(VAR_22, &VAR_23->mmkey, VAR_25, VAR_21);
 if (VAR_26)
  goto err_in;

 FUNC_5(VAR_25);
 VAR_23->ibmr.lkey = VAR_23->mmkey.key;
 VAR_23->ibmr.rkey = VAR_23->mmkey.key;
 VAR_23->umem = ((void*)0);

 return &VAR_23->ibmr;

err_in:
 FUNC_5(VAR_25);

err_free:
 FUNC_5(VAR_23);

 return FUNC_0(VAR_26);
}
