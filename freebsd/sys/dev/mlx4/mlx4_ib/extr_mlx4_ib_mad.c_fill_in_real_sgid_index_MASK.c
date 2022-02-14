
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_ib_dev {int ib_dev; } ;
struct TYPE_2__ {int sgid_index; } ;
struct ib_ah_attr {TYPE_1__ grh; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_ib_dev*,int,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct mlx4_ib_dev *VAR_1, int VAR_2, int VAR_3,
        struct ib_ah_attr *VAR_4)
{
 if (FUNC_1(&VAR_1->ib_dev, VAR_3) == VAR_0)
  VAR_4->grh.sgid_index = VAR_2;
 else
  VAR_4->grh.sgid_index += FUNC_0(VAR_1, VAR_2, VAR_3);
}
