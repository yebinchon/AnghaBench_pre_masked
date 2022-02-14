
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct mlx5_srq {int dummy; } ;
struct mlx5_resource {int dummy; } ;
struct mlx5_context {int dummy; } ;


 int FUNC_0 (struct mlx5_context*,struct mlx5_resource**,scalar_t__) ;
 int FUNC_1 (struct mlx5_context*,struct mlx5_resource**,struct mlx5_srq**,scalar_t__,int*) ;
 int FUNC_2 (struct mlx5_context*,struct mlx5_srq**,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(struct mlx5_context *VAR_0,
         int VAR_1,
         uint32_t VAR_2,
         uint32_t VAR_3,
         struct mlx5_resource **VAR_4,
         struct mlx5_srq **VAR_5,
         uint8_t *VAR_6)
{
 int VAR_7;

 if (VAR_1) {
  VAR_7 = FUNC_1(VAR_0, VAR_4, VAR_5, VAR_3,
          VAR_6);
 } else {
  if (VAR_3) {
   *VAR_6 = 1;
   VAR_7 = FUNC_2(VAR_0, VAR_5, VAR_3);
  } else {
   VAR_7 = FUNC_0(VAR_0, VAR_4, VAR_2);
  }
 }

 return VAR_7;

}
