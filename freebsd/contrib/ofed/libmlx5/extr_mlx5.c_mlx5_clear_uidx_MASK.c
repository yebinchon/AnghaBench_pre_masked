
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct mlx5_context {int uidx_table_mutex; TYPE_1__* uidx_table; } ;
struct TYPE_2__ {int ** table; int refcnt; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlx5_context *VAR_2, uint32_t VAR_3)
{
 int VAR_4 = VAR_3 >> VAR_1;

 FUNC_1(&VAR_2->uidx_table_mutex);

 if (!--VAR_2->uidx_table[VAR_4].refcnt)
  FUNC_0(VAR_2->uidx_table[VAR_4].table);
 else
  VAR_2->uidx_table[VAR_4].table[VAR_3 & VAR_0] = ((void*)0);

 FUNC_2(&VAR_2->uidx_table_mutex);
}
