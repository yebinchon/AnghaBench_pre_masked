
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mlx5_context {scalar_t__ hca_core_clock; } ;
struct ibv_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (int ) ;
 struct mlx5_context* FUNC_2 (struct ibv_context*) ;

__attribute__((used)) static int FUNC_3(struct ibv_context *VAR_1, uint64_t *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 int VAR_6;
 struct mlx5_context *VAR_7 = FUNC_2(VAR_1);

 if (!VAR_7->hca_core_clock)
  return -VAR_0;


 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_3 = FUNC_1(FUNC_0(VAR_7->hca_core_clock));
  VAR_4 = FUNC_1(FUNC_0(VAR_7->hca_core_clock + 4));
  VAR_5 = FUNC_1(FUNC_0(VAR_7->hca_core_clock));
  if (VAR_3 == VAR_5)
   break;
 }

 *VAR_2 = (uint64_t)VAR_3 << 32 | (uint64_t)VAR_4;

 return 0;
}
