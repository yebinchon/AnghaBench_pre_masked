
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_ib_sriov {int id_map_lock; int pv_id_table; } ;
struct id_map_entry {scalar_t__ pv_cm_id; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct mlx4_ib_sriov sriov; } ;


 struct id_map_entry* FUNC_0 (struct ib_device*,int,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct ib_device*) ;

__attribute__((used)) static struct id_map_entry *
FUNC_5(struct ib_device *VAR_0, int *VAR_1, int VAR_2, int VAR_3)
{
 struct id_map_entry *VAR_4;
 struct mlx4_ib_sriov *VAR_5 = &FUNC_4(VAR_0)->sriov;

 FUNC_2(&VAR_5->id_map_lock);
 if (*VAR_1 == -1) {
  VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);
  if (VAR_4)
   *VAR_1 = (int) VAR_4->pv_cm_id;
 } else
  VAR_4 = (struct id_map_entry *)FUNC_1(&VAR_5->pv_id_table, *VAR_1);
 FUNC_3(&VAR_5->id_map_lock);

 return VAR_4;
}
