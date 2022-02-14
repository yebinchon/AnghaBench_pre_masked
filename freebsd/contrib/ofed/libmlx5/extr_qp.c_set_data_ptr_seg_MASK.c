
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_wqe_data_seg {int addr; void* lkey; void* byte_count; } ;
struct ibv_sge {scalar_t__ addr; scalar_t__ lkey; scalar_t__ length; } ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mlx5_wqe_data_seg *VAR_0, struct ibv_sge *VAR_1,
        int VAR_2)
{
 VAR_0->byte_count = FUNC_0(VAR_1->length - VAR_2);
 VAR_0->lkey = FUNC_0(VAR_1->lkey);
 VAR_0->addr = FUNC_1(VAR_1->addr + VAR_2);
}
