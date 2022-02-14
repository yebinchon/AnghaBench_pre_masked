
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_wqe_data_seg {void* byte_count; int addr; void* lkey; } ;
struct ib_sge {int length; int addr; int lkey; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct mlx4_wqe_data_seg *VAR_0, struct ib_sge *VAR_1)
{
 VAR_0->lkey = FUNC_0(VAR_1->lkey);
 VAR_0->addr = FUNC_1(VAR_1->addr);
 FUNC_2();

 VAR_0->byte_count = FUNC_0(VAR_1->length);
}
