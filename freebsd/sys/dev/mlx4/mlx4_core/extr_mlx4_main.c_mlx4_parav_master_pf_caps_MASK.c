
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* pkey_phys_table_len; } ;
struct TYPE_4__ {int num_ports; scalar_t__* port_type; int* gid_table_len; scalar_t__* pkey_table_len; } ;
struct mlx4_dev {TYPE_1__ phys_caps; TYPE_2__ caps; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mlx4_dev *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 <= VAR_1->caps.num_ports; VAR_2++) {
  if (VAR_1->caps.port_type[VAR_2] == VAR_0)
   VAR_1->caps.gid_table_len[VAR_2] =
    FUNC_0(VAR_1, 0, VAR_2);
  else
   VAR_1->caps.gid_table_len[VAR_2] = 1;
  VAR_1->caps.pkey_table_len[VAR_2] =
   VAR_1->phys_caps.pkey_phys_table_len[VAR_2] - 1;
 }
}
