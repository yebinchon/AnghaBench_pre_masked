
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx5_srq {int dummy; } ;
struct mlx5_cqe64 {int wqe_counter; int srqn_uidx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mlx5_cqe64*,int ) ;
 scalar_t__ FUNC_3 (struct mlx5_cqe64*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct mlx5_srq*,int ) ;
 int FUNC_6 (struct mlx5_cqe64*) ;

__attribute__((used)) static inline int FUNC_7(struct mlx5_cqe64 *VAR_0, uint32_t VAR_1,
          struct mlx5_srq *VAR_2, int VAR_3)
{
 if (VAR_3) {
  if (FUNC_3(VAR_0, VAR_1)) {
   if (VAR_2 && FUNC_4(FUNC_6(VAR_0)))
    FUNC_5(VAR_2,
        FUNC_0(VAR_0->wqe_counter));
   return 1;
  }
 } else {
  if (FUNC_2(VAR_0, VAR_1)) {
   if (VAR_2 && (FUNC_1(VAR_0->srqn_uidx) & 0xffffff))
    FUNC_5(VAR_2,
        FUNC_0(VAR_0->wqe_counter));
   return 1;
  }
 }

 return 0;
}
