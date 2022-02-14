
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int qpn; } ;
struct TYPE_4__ {TYPE_1__ mqp; } ;
struct mlx5_ib_rq {int tirn; TYPE_2__ base; } ;
struct mlx5_ib_dev {int mdev; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (void*,void*,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int,int *) ;
 int * FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct mlx5_ib_dev *VAR_7,
        struct mlx5_ib_rq *VAR_8, u32 VAR_9)
{
 u32 *VAR_10;
 void *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_12 = FUNC_2(VAR_2);
 VAR_10 = FUNC_5(VAR_12);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_2, VAR_10, VAR_5);
 FUNC_1(VAR_11, VAR_11, VAR_3, VAR_1);
 FUNC_1(VAR_11, VAR_11, VAR_4, VAR_8->base.mqp.qpn);
 FUNC_1(VAR_11, VAR_11, VAR_6, VAR_9);

 VAR_13 = FUNC_4(VAR_7->mdev, VAR_10, VAR_12, &VAR_8->tirn);

 FUNC_3(VAR_10);

 return VAR_13;
}
