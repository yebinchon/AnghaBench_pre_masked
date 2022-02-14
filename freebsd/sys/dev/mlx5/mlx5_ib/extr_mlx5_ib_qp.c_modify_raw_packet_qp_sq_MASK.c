
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int qpn; } ;
struct TYPE_4__ {TYPE_1__ mqp; } ;
struct mlx5_ib_sq {int state; TYPE_2__ base; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (void*) ;
 int VAR_1 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct mlx5_core_dev*,void*,int) ;
 void* FUNC_5 (int) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct mlx5_core_dev *VAR_6,
       struct mlx5_ib_sq *VAR_7, int VAR_8)
{
 void *VAR_9;
 void *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_2);
 VAR_9 = FUNC_5(VAR_11);
 if (!VAR_9)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_9, VAR_4, VAR_7->base.mqp.qpn);
 FUNC_1(VAR_2, VAR_9, VAR_3, VAR_7->state);

 VAR_10 = FUNC_0(VAR_2, VAR_9, VAR_1);
 FUNC_1(VAR_10, VAR_10, VAR_5, VAR_8);

 VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_11);
 if (VAR_12)
  goto out;

 VAR_7->state = VAR_8;

out:
 FUNC_3(VAR_9);
 return VAR_12;
}
