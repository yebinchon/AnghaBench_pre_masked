
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_uuar_info {int num_uars; int num_low_latency_uuars; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mlx5_uuar_info *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->num_uars * VAR_0 -
  VAR_1->num_low_latency_uuars - 1;

 return VAR_2 >= 0 ? VAR_2 : 0;
}
