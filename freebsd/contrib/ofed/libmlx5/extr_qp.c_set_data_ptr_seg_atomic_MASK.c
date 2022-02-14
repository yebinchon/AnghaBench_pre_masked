
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_wqe_data_seg {int addr; void* lkey; void* byte_count; } ;
struct ibv_sge {int addr; int lkey; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mlx5_wqe_data_seg *VAR_1,
        struct ibv_sge *VAR_2)
{
 VAR_1->byte_count = FUNC_0(VAR_0);
 VAR_1->lkey = FUNC_0(VAR_2->lkey);
 VAR_1->addr = FUNC_1(VAR_2->addr);
}
