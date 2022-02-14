
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* reserved_qps_base; int log_num_macs; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 size_t VAR_0 ;

int FUNC_0(struct mlx4_dev *VAR_1, u8 VAR_2)
{
 return VAR_1->caps.reserved_qps_base[VAR_0] +
   (VAR_2 - 1) * (1 << VAR_1->caps.log_num_macs);
}
