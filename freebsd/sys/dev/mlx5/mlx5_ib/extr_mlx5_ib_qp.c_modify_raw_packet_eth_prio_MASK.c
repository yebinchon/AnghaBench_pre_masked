
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_ib_sq {int tisn; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int prio; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (void*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,void*,int) ;
 void* FUNC_5 (int) ;
 void* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct mlx5_core_dev *VAR_5,
          struct mlx5_ib_sq *VAR_6, u8 VAR_7)
{
 void *VAR_8;
 void *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_3);
 VAR_8 = FUNC_5(VAR_10);
 if (!VAR_8)
  return -VAR_0;

 FUNC_1(VAR_3, VAR_8, VAR_1.prio, 1);

 VAR_9 = FUNC_0(VAR_3, VAR_8, VAR_2);
 FUNC_1(VAR_9, VAR_9, VAR_4, ((VAR_7 & 0x7) << 1));

 VAR_11 = FUNC_4(VAR_5, VAR_6->tisn, VAR_8, VAR_10);

 FUNC_3(VAR_8);

 return VAR_11;
}
