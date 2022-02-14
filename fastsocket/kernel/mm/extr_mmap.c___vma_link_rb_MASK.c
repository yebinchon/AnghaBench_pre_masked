
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_rb; } ;
struct rb_node {int dummy; } ;
struct mm_struct {int mm_rb; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,struct rb_node*,struct rb_node**) ;

void FUNC_2(struct mm_struct *VAR_0, struct vm_area_struct *VAR_1,
  struct rb_node **VAR_2, struct rb_node *VAR_3)
{
 FUNC_1(&VAR_1->vm_rb, VAR_3, VAR_2);
 FUNC_0(&VAR_1->vm_rb, &VAR_0->mm_rb);
}
