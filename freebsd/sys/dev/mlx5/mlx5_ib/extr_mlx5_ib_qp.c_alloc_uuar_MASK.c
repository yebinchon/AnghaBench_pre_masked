
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_uuar_info {int ver; int lock; int * count; } ;
typedef enum mlx5_ib_latency_class { ____Placeholder_mlx5_ib_latency_class } mlx5_ib_latency_class ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct mlx5_uuar_info*) ;
 int FUNC_1 (struct mlx5_uuar_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mlx5_uuar_info *VAR_2,
        enum mlx5_ib_latency_class VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_2(&VAR_2->lock);
 switch (VAR_3) {
 case 129:
  VAR_4 = 0;
  VAR_2->count[VAR_4]++;
  break;

 case 128:
  if (VAR_2->ver < 2)
   VAR_4 = -VAR_1;
  else
   VAR_4 = FUNC_1(VAR_2);
  break;

 case 130:
  if (VAR_2->ver < 2)
   VAR_4 = -VAR_1;
  else
   VAR_4 = FUNC_0(VAR_2);
  break;

 case 131:
  VAR_4 = 2;
  break;
 }
 FUNC_3(&VAR_2->lock);

 return VAR_4;
}
