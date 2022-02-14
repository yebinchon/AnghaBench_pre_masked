
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mlx5_rwqe_sig {int signature; } ;
typedef struct mlx5_rwqe_sig uint32_t ;
typedef struct mlx5_rwqe_sig uint16_t ;
struct mlx5_qp {TYPE_1__* ibv_qp; } ;
struct TYPE_2__ {struct mlx5_rwqe_sig qp_num; } ;


 int FUNC_0 (struct mlx5_rwqe_sig*,int) ;

__attribute__((used)) static void FUNC_1(struct mlx5_qp *VAR_0, struct mlx5_rwqe_sig *VAR_1,
   int VAR_2, uint16_t VAR_3)
{
 uint8_t VAR_4;
 uint32_t VAR_5 = VAR_0->ibv_qp->qp_num;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 VAR_4 ^= FUNC_0(&VAR_5, 4);
 VAR_4 ^= FUNC_0(&VAR_3, 2);
 VAR_1->signature = VAR_4;
}
