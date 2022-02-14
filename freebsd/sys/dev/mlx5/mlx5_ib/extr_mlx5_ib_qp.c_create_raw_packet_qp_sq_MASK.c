
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mlx5_ib_ubuffer {int * umem; int buf_size; int buf_addr; } ;
struct TYPE_2__ {int mqp; } ;
struct mlx5_ib_sq {int tisn; struct mlx5_ib_ubuffer ubuffer; TYPE_1__ base; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_pd {int dummy; } ;
typedef void __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,void*,void*) ;
 int FUNC_1 (void*,void*,struct ib_pd*) ;
 int FUNC_2 (void*,void*,int ) ;
 int VAR_2 ;
 int FUNC_3 (void*,void*,struct ib_pd*,int) ;
 int FUNC_4 (void*,void*,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (void*) ;
 int VAR_4 ;
 struct ib_pd* VAR_5 ;
 struct ib_pd* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 struct ib_pd* VAR_11 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 struct ib_pd* VAR_12 ;
 struct ib_pd* VAR_13 ;
 struct ib_pd* VAR_14 ;
 struct ib_pd* VAR_15 ;
 int FUNC_9 (int ,void*,int,int *) ;
 int FUNC_10 (struct mlx5_ib_dev*,int *,int,void*,int ) ;
 int FUNC_11 (struct mlx5_ib_dev*,struct ib_pd*,int ,int ,int **,int*,int*,int*,int*) ;
 void* FUNC_12 (int) ;
 struct ib_pd* VAR_16 ;
 void* VAR_17 ;
 struct ib_pd* VAR_18 ;
 struct ib_pd* VAR_19 ;
 struct ib_pd* VAR_20 ;
 struct ib_pd* VAR_21 ;
 struct ib_pd* VAR_22 ;
 struct ib_pd* VAR_23 ;

__attribute__((used)) static int FUNC_13(struct mlx5_ib_dev *VAR_24,
       struct mlx5_ib_sq *VAR_25, void *VAR_26,
       struct ib_pd *VAR_27)
{
 struct mlx5_ib_ubuffer *VAR_28 = &VAR_25->ubuffer;
 __be64 *VAR_29;
 void *VAR_30;
 void *VAR_31;
 void *VAR_32 = FUNC_0(VAR_7, VAR_26, VAR_32);
 void *VAR_33;
 int VAR_34;
 int VAR_35;
 int VAR_36 = 0;
 int VAR_37;
 int VAR_38 = 0;
 u32 VAR_39 = 0;

 VAR_35 = FUNC_11(VAR_24, VAR_27, VAR_28->buf_addr, VAR_28->buf_size,
          &VAR_25->ubuffer.umem, &VAR_37, &VAR_36,
          &VAR_38, &VAR_39);
 if (VAR_35)
  return VAR_35;

 VAR_34 = FUNC_5(VAR_8) + sizeof(u64) * VAR_38;
 VAR_30 = FUNC_12(VAR_34);
 if (!VAR_30) {
  VAR_35 = -VAR_0;
  goto err_umem;
 }

 VAR_31 = FUNC_0(VAR_8, VAR_30, VAR_9);
 FUNC_3(VAR_31, VAR_31, VAR_11, 1);
 FUNC_3(VAR_31, VAR_31, VAR_18, VAR_3);
 FUNC_3(VAR_31, VAR_31, VAR_22, FUNC_1(VAR_32, VAR_32, VAR_22));
 FUNC_3(VAR_31, VAR_31, VAR_5, FUNC_1(VAR_32, VAR_32, VAR_6));
 FUNC_3(VAR_31, VAR_31, VAR_19, 1);
 FUNC_3(VAR_31, VAR_31, VAR_20, VAR_25->tisn);

 VAR_33 = FUNC_0(VAR_31, VAR_31, VAR_33);
 FUNC_3(VAR_33, VAR_33, VAR_23, VAR_4);
 FUNC_3(VAR_33, VAR_33, VAR_27, FUNC_1(VAR_32, VAR_32, VAR_27));
 FUNC_3(VAR_33, VAR_33, VAR_21, FUNC_1(VAR_32, VAR_32, VAR_21));
 FUNC_4(VAR_33, VAR_33, VAR_10, FUNC_2(VAR_32, VAR_32, VAR_10));
 FUNC_3(VAR_33, VAR_33, VAR_14, FUNC_7(VAR_2));
 FUNC_3(VAR_33, VAR_33, VAR_15, FUNC_1(VAR_32, VAR_32, VAR_12));
 FUNC_3(VAR_33, VAR_33, VAR_13, VAR_36 - VAR_1);
 FUNC_3(VAR_33, VAR_33, VAR_16, VAR_39);

 VAR_29 = (__be64 *)FUNC_0(VAR_33, VAR_33, VAR_29);
 FUNC_10(VAR_24, VAR_25->ubuffer.umem, VAR_36, VAR_29, 0);

 VAR_35 = FUNC_9(VAR_24->mdev, VAR_30, VAR_34, &VAR_25->base.mqp);

 FUNC_8(VAR_30);

 if (VAR_35)
  goto err_umem;

 return 0;

err_umem:
 FUNC_6(VAR_25->ubuffer.umem);
 VAR_25->ubuffer.umem = ((void*)0);

 return VAR_35;
}
