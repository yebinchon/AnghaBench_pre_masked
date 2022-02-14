
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx4_cq {int arm_sn; int cons_index; int cqn; void** arm_db; } ;
struct ibv_cq {int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int*,int ,int ) ;
 struct mlx4_cq* FUNC_2 (struct ibv_cq*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

int FUNC_5(struct ibv_cq *VAR_3, int VAR_4)
{
 struct mlx4_cq *VAR_5 = FUNC_2(VAR_3);
 uint32_t VAR_6[2];
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;

 VAR_7 = VAR_5->arm_sn & 3;
 VAR_8 = VAR_5->cons_index & 0xffffff;
 VAR_9 = VAR_4 ? VAR_1 : VAR_0;

 *VAR_5->arm_db = FUNC_0(VAR_7 << 28 | VAR_9 | VAR_8);





 FUNC_4();

 VAR_6[0] = FUNC_0(VAR_7 << 28 | VAR_9 | VAR_5->cqn);
 VAR_6[1] = FUNC_0(VAR_8);

 FUNC_1(VAR_6, FUNC_3(VAR_3->context), VAR_2);

 return 0;
}
