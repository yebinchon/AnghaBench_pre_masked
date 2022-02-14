
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct rb_node {int dummy; } ;
struct mm_struct {int map_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,struct rb_node**,struct rb_node*) ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,scalar_t__,struct vm_area_struct**,struct rb_node***,struct rb_node**) ;

__attribute__((used)) static void FUNC_3(struct mm_struct *VAR_0, struct vm_area_struct *VAR_1)
{
 struct vm_area_struct *VAR_2, *VAR_3;
 struct rb_node **VAR_4, *VAR_5;

 VAR_2 = FUNC_2(VAR_0, VAR_1->vm_start,&VAR_3, &VAR_4, &VAR_5);
 FUNC_0(VAR_2 && VAR_2->vm_start < VAR_1->vm_end);
 FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4, VAR_5);
 VAR_0->map_count++;
}
