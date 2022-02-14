
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mlx5_resource {scalar_t__ rsn; } ;
struct mlx5_qp {int dummy; } ;
struct mlx5_context {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_context*,scalar_t__) ;
 struct mlx5_resource* FUNC_1 (struct mlx5_context*,scalar_t__) ;
 struct mlx5_qp* FUNC_2 (struct mlx5_resource*) ;

__attribute__((used)) static inline struct mlx5_qp *FUNC_3(struct mlx5_context *VAR_0,
           struct mlx5_resource **VAR_1,
           uint32_t VAR_2, int VAR_3)
{
 if (!*VAR_1 || (VAR_2 != (*VAR_1)->rsn))
  *VAR_1 = VAR_3 ? FUNC_1(VAR_0, VAR_2) :
          (struct mlx5_resource *)FUNC_0(VAR_0, VAR_2);

 return FUNC_2(*VAR_1);
}
