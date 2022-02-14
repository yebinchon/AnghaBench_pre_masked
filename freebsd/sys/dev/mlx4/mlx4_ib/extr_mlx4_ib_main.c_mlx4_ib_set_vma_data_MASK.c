
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int * vm_ops; struct mlx4_ib_vma_private_data* vm_private_data; } ;
struct mlx4_ib_vma_private_data {struct vm_area_struct* vma; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct vm_area_struct *VAR_1,
     struct mlx4_ib_vma_private_data *VAR_2)
{
 VAR_2->vma = VAR_1;
 VAR_1->vm_private_data = VAR_2;
 VAR_1->vm_ops = &VAR_0;
}
