
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_12__ {int pool_lock; int pool_bm; } ;
struct TYPE_11__ {struct mlx4_eq* eq; int * irq_names; } ;
struct mlx4_priv {TYPE_6__ msix_ctl; TYPE_5__ eq_table; } ;
struct TYPE_8__ {int ports; } ;
struct mlx4_eq {scalar_t__ ref_count; int have_irq; int irq; TYPE_2__ actv_ports; } ;
struct TYPE_7__ {int num_comp_vectors; } ;
struct mlx4_dev {int flags; TYPE_4__* persist; TYPE_1__ caps; } ;
struct TYPE_10__ {TYPE_3__* pdev; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int ) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (struct mlx4_eq*,int) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*,int ) ;
 int VAR_4 ;
 struct mlx4_priv* FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_priv*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int ,int *,struct mlx4_eq*) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int,char*,int,char*) ;
 scalar_t__ FUNC_13 (int,int ) ;

int FUNC_14(struct mlx4_dev *VAR_5, u8 VAR_6, int *VAR_7)
{
 struct mlx4_priv *VAR_8 = FUNC_6(VAR_5);
 int VAR_9 = 0, VAR_10 = 0;
 u32 VAR_11 = (u32)-1;
 int VAR_12 = FUNC_0(*VAR_7);
 int *VAR_13 = ((void*)0);


 FUNC_8(&VAR_8->msix_ctl.pool_lock);
 if (VAR_12 < (VAR_5->caps.num_comp_vectors + 1) &&
     (VAR_12 >= 0) &&
     (VAR_12 != VAR_1)) {
  if (FUNC_13(VAR_6 - 1,
        VAR_8->eq_table.eq[VAR_12].actv_ports.ports)) {
   VAR_13 = &VAR_12;
  } else {
   struct mlx4_eq *VAR_14;

   for (VAR_10 = 1; VAR_10 < VAR_6;
        VAR_12 += FUNC_5(VAR_5, VAR_10++))
    ;

   VAR_14 = &VAR_8->eq_table.eq[VAR_12];
   if (VAR_12 < VAR_5->caps.num_comp_vectors + 1 &&
       FUNC_13(VAR_6 - 1, VAR_14->actv_ports.ports)) {
    VAR_13 = &VAR_12;
   }
  }
 }

 if (!VAR_13) {
  VAR_12 = -1;
  for (VAR_10 = 0; VAR_11 && VAR_10 < VAR_5->caps.num_comp_vectors + 1;
       VAR_10++) {
   struct mlx4_eq *VAR_15 = &VAR_8->eq_table.eq[VAR_10];

   if (VAR_11 > VAR_15->ref_count &&
       FUNC_13(VAR_6 - 1, VAR_15->actv_ports.ports)) {
    VAR_11 = VAR_15->ref_count;
    VAR_12 = VAR_10;
   }
  }

  if (VAR_12 < 0) {
   VAR_9 = -VAR_0;
   goto err_unlock;
  }

  VAR_13 = &VAR_12;
 }

 if (!FUNC_13(*VAR_13, VAR_8->msix_ctl.pool_bm) &&
     VAR_5->flags & VAR_2) {
  FUNC_11(*VAR_13, VAR_8->msix_ctl.pool_bm);
  FUNC_12(VAR_8->eq_table.irq_names +
    *VAR_13 * VAR_3,
    VAR_3, "mlx4-%d@%s",
    *VAR_13, FUNC_3(&VAR_5->persist->pdev->dev));

  VAR_9 = FUNC_10(VAR_8->eq_table.eq[*VAR_13].irq,
      VAR_4, 0,
      &VAR_8->eq_table.irq_names[*VAR_13 << 5],
      VAR_8->eq_table.eq + *VAR_13);

  if (VAR_9) {
   FUNC_2(*VAR_13, VAR_8->msix_ctl.pool_bm);
   *VAR_13 = -1;
  } else {
   FUNC_7(VAR_8, *VAR_13);
   FUNC_4(&VAR_8->eq_table.eq[*VAR_13], 1);
   VAR_8->eq_table.eq[*VAR_13].have_irq = 1;
  }
 }

 if (!VAR_9 && *VAR_13 >= 0)
  VAR_8->eq_table.eq[*VAR_13].ref_count++;

err_unlock:
 FUNC_9(&VAR_8->msix_ctl.pool_lock);

 if (!VAR_9 && *VAR_13 >= 0)
  *VAR_7 = FUNC_1(*VAR_13);
 else
  *VAR_7 = 0;

 return VAR_9;
}
