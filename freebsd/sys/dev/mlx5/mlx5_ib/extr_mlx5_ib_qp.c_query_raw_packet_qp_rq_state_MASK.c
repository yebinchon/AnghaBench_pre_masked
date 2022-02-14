
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int qpn; } ;
struct TYPE_4__ {TYPE_1__ mqp; } ;
struct mlx5_ib_rq {int state; TYPE_2__ base; } ;
struct mlx5_ib_dev {int mdev; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,int ,void*) ;
 void* FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct mlx5_ib_dev *VAR_4,
     struct mlx5_ib_rq *VAR_5,
     u8 *VAR_6)
{
 void *VAR_7;
 void *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_1);
 VAR_7 = FUNC_5(VAR_9);
 if (!VAR_7)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_4->mdev, VAR_5->base.mqp.qpn, VAR_7);
 if (VAR_10)
  goto out;

 VAR_8 = FUNC_0(VAR_1, VAR_7, VAR_2);
 *VAR_6 = FUNC_1(VAR_8, VAR_8, VAR_3);
 VAR_5->state = *VAR_6;

out:
 FUNC_3(VAR_7);
 return VAR_10;
}
