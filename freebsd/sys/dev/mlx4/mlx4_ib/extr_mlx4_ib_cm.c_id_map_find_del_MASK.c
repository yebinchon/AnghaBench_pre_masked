
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_root {int dummy; } ;
struct mlx4_ib_sriov {int id_map_lock; int pv_id_table; struct rb_root sl_id_map; } ;
struct id_map_entry {int node; int sl_cm_id; int slave_id; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct mlx4_ib_sriov sriov; } ;


 struct id_map_entry* FUNC_0 (struct ib_device*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct rb_root*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct ib_device*) ;

__attribute__((used)) static void FUNC_7(struct ib_device *VAR_0, int VAR_1)
{
 struct mlx4_ib_sriov *VAR_2 = &FUNC_6(VAR_0)->sriov;
 struct rb_root *VAR_3 = &VAR_2->sl_id_map;
 struct id_map_entry *VAR_4, *VAR_5;

 FUNC_4(&VAR_2->id_map_lock);
 VAR_4 = (struct id_map_entry *)FUNC_1(&VAR_2->pv_id_table, VAR_1);
 if (!VAR_4)
  goto out;
 VAR_5 = FUNC_0(VAR_0, VAR_4->slave_id, VAR_4->sl_cm_id);
 if (VAR_5 && VAR_5 == VAR_4)
  FUNC_3(&VAR_5->node, VAR_3);
 FUNC_2(&VAR_2->pv_id_table, VAR_1);
out:
 FUNC_5(&VAR_2->id_map_lock);
}
