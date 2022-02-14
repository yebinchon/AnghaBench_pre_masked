
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_mac_table {int* is_dup; int max; scalar_t__ total; scalar_t__* refs; scalar_t__* entries; int mutex; } ;
struct TYPE_2__ {int log_num_macs; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct mlx4_dev *VAR_1, struct mlx4_mac_table *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_2->mutex);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->entries[VAR_3] = 0;
  VAR_2->refs[VAR_3] = 0;
  VAR_2->is_dup[VAR_3] = 0;
 }
 VAR_2->max = 1 << VAR_1->caps.log_num_macs;
 VAR_2->total = 0;
}
