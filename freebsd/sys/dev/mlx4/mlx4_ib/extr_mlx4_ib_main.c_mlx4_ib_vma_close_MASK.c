
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_private_data; } ;
struct mlx4_ib_vma_private_data {int * vma; } ;



__attribute__((used)) static void FUNC_0(struct vm_area_struct *VAR_0)
{
 struct mlx4_ib_vma_private_data *VAR_1;
 VAR_1 = (struct mlx4_ib_vma_private_data *)
    VAR_0->vm_private_data;




 VAR_1->vma = ((void*)0);
}
