
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_resource {int dummy; } ;
struct mlx5_context {int uidx_table_mutex; TYPE_1__* uidx_table; } ;
typedef size_t int32_t ;
struct TYPE_2__ {void** table; int refcnt; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 void** FUNC_0 (int,int) ;
 size_t FUNC_1 (struct mlx5_context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int32_t FUNC_4(struct mlx5_context *VAR_2, void *VAR_3)
{
 int32_t VAR_4;
 int32_t VAR_5 = -1;
 int32_t VAR_6;

 FUNC_2(&VAR_2->uidx_table_mutex);
 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 < 0)
  goto out;

 VAR_4 = VAR_6 >> VAR_1;

 if (!VAR_2->uidx_table[VAR_4].refcnt) {
  VAR_2->uidx_table[VAR_4].table = FUNC_0(VAR_0 + 1,
           sizeof(struct mlx5_resource *));
  if (!VAR_2->uidx_table[VAR_4].table)
   goto out;
 }

 ++VAR_2->uidx_table[VAR_4].refcnt;
 VAR_2->uidx_table[VAR_4].table[VAR_6 & VAR_0] = VAR_3;
 VAR_5 = VAR_6;

out:
 FUNC_3(&VAR_2->uidx_table_mutex);
 return VAR_5;
}
