
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int * vm_ops; struct mlx5_ib_vma_private_data* vm_private_data; } ;
struct mlx5_ib_vma_private_data {int list; struct vm_area_struct* vma; } ;
struct list_head {int dummy; } ;
struct mlx5_ib_ucontext {struct list_head vma_private_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_ib_vma_private_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct vm_area_struct *VAR_3,
    struct mlx5_ib_ucontext *VAR_4)
{
 struct mlx5_ib_vma_private_data *VAR_5;
 struct list_head *VAR_6 = &VAR_4->vma_private_list;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->vma = VAR_3;
 VAR_3->vm_private_data = VAR_5;
 VAR_3->vm_ops = &VAR_2;

 FUNC_1(&VAR_5->list, VAR_6);

 return 0;
}
