
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx5_cq {int arm_sn; int cons_index; int cqn; void** dbrec; } ;
struct mlx5_context {int lock32; scalar_t__* uar; } ;
struct ibv_cq {int context; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int*,scalar_t__,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct mlx5_cq* FUNC_4 (struct ibv_cq*) ;
 struct mlx5_context* FUNC_5 (int ) ;

int FUNC_6(struct ibv_cq *VAR_4, int VAR_5)
{
 struct mlx5_cq *VAR_6 = FUNC_4(VAR_4);
 struct mlx5_context *VAR_7 = FUNC_5(VAR_4->context);
 uint32_t VAR_8[2];
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;

 VAR_9 = VAR_6->arm_sn & 3;
 VAR_10 = VAR_6->cons_index & 0xffffff;
 VAR_11 = VAR_5 ? VAR_2 : VAR_1;

 VAR_6->dbrec[VAR_0] = FUNC_0(VAR_9 << 28 | VAR_11 | VAR_10);





 FUNC_3();

 VAR_8[0] = FUNC_0(VAR_9 << 28 | VAR_11 | VAR_10);
 VAR_8[1] = FUNC_0(VAR_6->cqn);

 FUNC_1(VAR_8, VAR_7->uar[0] + VAR_3, &VAR_7->lock32);

 FUNC_2();

 return 0;
}
