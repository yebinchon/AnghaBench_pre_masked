
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mqp; struct mlx5_ib_qp* container_mibqp; } ;
struct mlx5_ib_rq {TYPE_1__ base; } ;
struct mlx5_ib_qp {int flags; } ;
struct mlx5_ib_dev {int mdev; } ;
typedef void __be64 ;


 int VAR_0 ;
 void* FUNC_0 (void*,void*,void*) ;
 int FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (void*,void*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (void*,void*,int ,int) ;
 int FUNC_4 (void*,void*,int ,int ) ;
 int FUNC_5 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (void*,void*,int) ;
 int FUNC_9 (int ,void*,int,int *) ;
 void* FUNC_10 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static int FUNC_11(struct mlx5_ib_dev *VAR_28,
       struct mlx5_ib_rq *VAR_29, void *VAR_30)
{
 struct mlx5_ib_qp *VAR_31 = VAR_29->base.container_mibqp;
 __be64 *VAR_32;
 __be64 *VAR_33;
 void *VAR_34;
 void *VAR_35;
 void *VAR_36;
 void *VAR_37 = FUNC_0(VAR_7, VAR_30, VAR_37);
 int VAR_38;
 int VAR_39;
 u32 VAR_40 = FUNC_6(VAR_37);

 VAR_38 = FUNC_5(VAR_8) + VAR_40;
 VAR_34 = FUNC_10(VAR_38);
 if (!VAR_34)
  return -VAR_0;

 VAR_35 = FUNC_0(VAR_8, VAR_34, VAR_9);
 FUNC_3(VAR_35, VAR_35, VAR_26, 1);
 FUNC_3(VAR_35, VAR_35, VAR_19, VAR_2);
 FUNC_3(VAR_35, VAR_35, VAR_24, VAR_3);
 FUNC_3(VAR_35, VAR_35, VAR_12, 1);
 FUNC_3(VAR_35, VAR_35, VAR_25, FUNC_1(VAR_37, VAR_37, VAR_25));
 FUNC_3(VAR_35, VAR_35, VAR_5, FUNC_1(VAR_37, VAR_37, VAR_6));

 if (VAR_31->flags & VAR_1)
  FUNC_3(VAR_35, VAR_35, VAR_23, 1);

 VAR_36 = FUNC_0(VAR_35, VAR_35, VAR_36);
 FUNC_3(VAR_36, VAR_36, VAR_27, VAR_4);
 FUNC_3(VAR_36, VAR_36, VAR_11,
   FUNC_1(VAR_37, VAR_37, VAR_11));
 FUNC_3(VAR_36, VAR_36, VAR_20, FUNC_1(VAR_37, VAR_37, VAR_20));
 FUNC_3(VAR_36, VAR_36, VAR_21, FUNC_1(VAR_37, VAR_37, VAR_21));
 FUNC_4(VAR_36, VAR_36, VAR_10, FUNC_2(VAR_37, VAR_37, VAR_10));
 FUNC_3(VAR_36, VAR_36, VAR_17, FUNC_1(VAR_37, VAR_37, VAR_15) + 4);
 FUNC_3(VAR_36, VAR_36, VAR_16, FUNC_1(VAR_37, VAR_37, VAR_13));
 FUNC_3(VAR_36, VAR_36, VAR_18, FUNC_1(VAR_37, VAR_37, VAR_14));

 VAR_32 = (__be64 *)FUNC_0(VAR_36, VAR_36, VAR_32);
 VAR_33 = (__be64 *)FUNC_0(VAR_7, VAR_30, VAR_32);
 FUNC_8(VAR_32, VAR_33, VAR_40);

 VAR_39 = FUNC_9(VAR_28->mdev, VAR_34, VAR_38, &VAR_29->base.mqp);

 FUNC_7(VAR_34);

 return VAR_39;
}
