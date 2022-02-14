
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_context {TYPE_1__* uidx_table; } ;
typedef size_t int32_t ;
struct TYPE_2__ {scalar_t__ refcnt; int * table; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int32_t FUNC_0(struct mlx5_context *VAR_3)
{
 int32_t VAR_4;
 int32_t VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_3->uidx_table[VAR_4].refcnt < VAR_0)
   break;
 }

 if (VAR_4 == VAR_2)
  return -1;

 if (!VAR_3->uidx_table[VAR_4].refcnt)
  return VAR_4 << VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_0 + 1; VAR_5++) {
  if (!VAR_3->uidx_table[VAR_4].table[VAR_5])
   break;
 }

 return (VAR_4 << VAR_1) | VAR_5;
}
