
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void u32 ;
struct TYPE_4__ {int key; } ;
struct mlx5_ib_mr {int live; TYPE_2__ mmkey; struct mlx5_ib_dev* dev; struct ib_umem* umem; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_umem {int dummy; } ;
struct ib_pd {int device; } ;
struct ib_mr {int dummy; } ;
typedef int __be64 ;
struct TYPE_3__ {int pdn; } ;


 int VAR_0 ;
 struct mlx5_ib_mr* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (void*,void*,struct ib_pd*,int) ;
 int FUNC_4 (void*,void*,int ,int ) ;
 int FUNC_5 (void*) ;
 struct ib_pd* VAR_8 ;
 struct ib_pd* VAR_9 ;
 struct ib_pd* VAR_10 ;
 void* VAR_11 ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct mlx5_ib_mr*) ;
 int VAR_12 ;
 int FUNC_8 (void*) ;
 struct mlx5_ib_mr* FUNC_9 (int,int ) ;
 int VAR_13 ;
 struct ib_pd* VAR_14 ;
 struct ib_pd* VAR_15 ;
 struct ib_pd* VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int ,TYPE_2__*,void*,int) ;
 int FUNC_11 (struct mlx5_ib_dev*,char*,int ) ;
 int FUNC_12 (struct mlx5_ib_dev*,struct ib_umem*,int,int *,int ) ;
 int FUNC_13 (struct mlx5_ib_dev*,char*) ;
 void* FUNC_14 (int) ;
 int VAR_18 ;
 struct ib_pd* VAR_19 ;
 struct ib_pd* VAR_20 ;
 struct ib_pd* VAR_21 ;
 struct ib_pd* VAR_22 ;
 int VAR_23 ;
 struct mlx5_ib_dev* FUNC_15 (int ) ;
 struct mlx5_ib_mr* FUNC_16 (struct ib_mr*) ;
 TYPE_1__* FUNC_17 (struct ib_pd*) ;
 struct ib_pd* VAR_24 ;
 struct ib_pd* VAR_25 ;

__attribute__((used)) static struct mlx5_ib_mr *FUNC_18(struct ib_mr *VAR_26, struct ib_pd *VAR_27,
         u64 VAR_28, u64 VAR_29,
         struct ib_umem *VAR_30, int VAR_31,
         int VAR_32, int VAR_33)
{
 struct mlx5_ib_dev *VAR_34 = FUNC_15(VAR_27->device);
 struct mlx5_ib_mr *VAR_35;
 __be64 *VAR_36;
 void *VAR_37;
 int VAR_38;
 u32 *VAR_39;
 int VAR_40;
 bool VAR_41 = !!(FUNC_2(VAR_34->mdev, VAR_18));

 VAR_35 = VAR_26 ? FUNC_16(VAR_26) : FUNC_9(sizeof(*VAR_35), VAR_1);
 if (!VAR_35)
  return FUNC_0(-VAR_0);

 VAR_38 = FUNC_5(VAR_11) +
  sizeof(*VAR_36) * ((VAR_31 + 1) / 2) * 2;
 VAR_39 = FUNC_14(VAR_38);
 if (!VAR_39) {
  VAR_40 = -VAR_0;
  goto err_1;
 }
 VAR_36 = (__be64 *)FUNC_1(VAR_11, VAR_39, VAR_12);
 FUNC_12(VAR_34, VAR_30, VAR_32, VAR_36,
        VAR_41 ? VAR_7 : 0);



 FUNC_3(VAR_11, VAR_39, VAR_19, !!(VAR_41));

 VAR_37 = FUNC_1(VAR_11, VAR_39, VAR_17);
 FUNC_3(VAR_37, VAR_37, VAR_9, VAR_6);
 FUNC_3(VAR_37, VAR_37, VAR_8, !!(VAR_33 & VAR_3));
 FUNC_3(VAR_37, VAR_37, VAR_22, !!(VAR_33 & VAR_5));
 FUNC_3(VAR_37, VAR_37, VAR_21, !!(VAR_33 & VAR_4));
 FUNC_3(VAR_37, VAR_37, VAR_16, !!(VAR_33 & VAR_2));
 FUNC_3(VAR_37, VAR_37, VAR_15, 1);

 FUNC_4(VAR_37, VAR_37, VAR_23, VAR_28);
 FUNC_4(VAR_37, VAR_37, VAR_13, VAR_29);
 FUNC_3(VAR_37, VAR_37, VAR_27, FUNC_17(VAR_27)->pdn);
 FUNC_3(VAR_37, VAR_37, VAR_10, 0);
 FUNC_3(VAR_37, VAR_37, VAR_25,
   FUNC_6(VAR_28, VAR_29, 1 << VAR_32));
 FUNC_3(VAR_37, VAR_37, VAR_14, VAR_32);
 FUNC_3(VAR_37, VAR_37, VAR_20, 0xffffff);
 FUNC_3(VAR_11, VAR_39, VAR_24,
   FUNC_6(VAR_28, VAR_29, 1 << VAR_32));

 VAR_40 = FUNC_10(VAR_34->mdev, &VAR_35->mmkey, VAR_39, VAR_38);
 if (VAR_40) {
  FUNC_13(VAR_34, "create mkey failed\n");
  goto err_2;
 }
 VAR_35->umem = VAR_30;
 VAR_35->dev = VAR_34;
 VAR_35->live = 1;
 FUNC_8(VAR_39);

 FUNC_11(VAR_34, "mkey = 0x%x\n", VAR_35->mmkey.key);

 return VAR_35;

err_2:
 FUNC_8(VAR_39);

err_1:
 if (!VAR_26)
  FUNC_7(VAR_35);

 return FUNC_0(VAR_40);
}
