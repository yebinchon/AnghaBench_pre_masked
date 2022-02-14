
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlx5_core_diagnostics_entry {scalar_t__ counter_id; } ;



__attribute__((used)) static int FUNC_0(
 const struct mlx5_core_diagnostics_entry *VAR_0,
 int VAR_1, u16 VAR_2)
{
 int VAR_3;


 if (VAR_2 == 0)
  return -1;


 for (VAR_3 = 0; VAR_3 != VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].counter_id == VAR_2)
   return VAR_3;
 }
 return -1;
}
