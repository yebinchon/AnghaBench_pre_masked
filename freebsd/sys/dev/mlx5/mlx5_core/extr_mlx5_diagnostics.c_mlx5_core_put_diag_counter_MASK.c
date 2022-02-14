
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u16 ;
struct mlx5_core_diagnostics_entry {scalar_t__ counter_id; } ;



__attribute__((used)) static void FUNC_0(
 const struct mlx5_core_diagnostics_entry *VAR_0,
 u64 *VAR_1, int VAR_2, u16 VAR_3, u64 VAR_4)
{
 int VAR_5;


 if (VAR_3 == 0)
  return;


 for (VAR_5 = 0; VAR_5 != VAR_2; VAR_5++) {
  if (VAR_0[VAR_5].counter_id == VAR_3) {
   VAR_1[VAR_5] = VAR_4;
   break;
  }
 }
}
