
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mlx5_srq {scalar_t__ srqn; } ;
struct mlx5_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_srq* FUNC_0 (struct mlx5_context*,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(struct mlx5_context *VAR_2,
         struct mlx5_srq **VAR_3,
         uint32_t VAR_4)
{
 if (!*VAR_3 || (VAR_4 != (*VAR_3)->srqn)) {
  *VAR_3 = FUNC_0(VAR_2, VAR_4);
  if (FUNC_1(!*VAR_3))
   return VAR_1;
 }

 return VAR_0;
}
