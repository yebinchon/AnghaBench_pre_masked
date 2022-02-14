
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_wqe_data_seg {void* byte_count; int addr; void* lkey; } ;
struct ibv_sge {int lkey; int length; int addr; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct mlx4_wqe_data_seg *VAR_0, struct ibv_sge *VAR_1)
{
 VAR_0->lkey = FUNC_0(VAR_1->lkey);
 VAR_0->addr = FUNC_1(VAR_1->addr);
 FUNC_3();

 if (FUNC_2(VAR_1->length))
  VAR_0->byte_count = FUNC_0(VAR_1->length);
 else
  VAR_0->byte_count = FUNC_0(0x80000000);
}
