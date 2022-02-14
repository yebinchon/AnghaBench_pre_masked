
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_priv {int bf_mutex; int bf_list; } ;
struct TYPE_4__ {int bf_reg_size; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_bf {int reg; TYPE_2__* uar; } ;
struct TYPE_5__ {int bf_map; int free_bf_bmap; int bf_list; int map; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 struct mlx4_priv* FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*,TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct mlx4_dev *VAR_0, struct mlx4_bf *VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_6(VAR_0);
 int VAR_3;

 if (!VAR_1->uar || !VAR_1->uar->bf_map)
  return;

 FUNC_8(&VAR_2->bf_mutex);
 VAR_3 = (VAR_1->reg - VAR_1->uar->bf_map) / VAR_0->caps.bf_reg_size;
 VAR_1->uar->free_bf_bmap &= ~(1 << VAR_3);
 if (!VAR_1->uar->free_bf_bmap) {
  if (!FUNC_5(&VAR_1->uar->bf_list))
   FUNC_4(&VAR_1->uar->bf_list);

  FUNC_0(VAR_1->uar->bf_map);
  FUNC_1(VAR_1->uar->map);
  FUNC_7(VAR_0, VAR_1->uar);
  FUNC_2(VAR_1->uar);
 } else if (FUNC_5(&VAR_1->uar->bf_list))
  FUNC_3(&VAR_1->uar->bf_list, &VAR_2->bf_list);

 FUNC_9(&VAR_2->bf_mutex);
}
