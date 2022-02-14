
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_pgoff; int vm_start; scalar_t__ vm_end; int vm_flags; int anon_vma; int vm_file; } ;
struct rb_node {int dummy; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,int,struct vm_area_struct**,struct rb_node***,struct rb_node**) ;
 scalar_t__ FUNC_2 (struct mm_struct*,int ) ;
 int FUNC_3 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,struct rb_node**,struct rb_node*) ;
 int FUNC_4 (struct vm_area_struct*) ;

int FUNC_5(struct mm_struct * VAR_3, struct vm_area_struct * VAR_4)
{
 struct vm_area_struct * VAR_5, * VAR_6;
 struct rb_node ** VAR_7, * VAR_8;
 if (!VAR_4->vm_file) {
  FUNC_0(VAR_4->anon_vma);
  VAR_4->vm_pgoff = VAR_4->vm_start >> VAR_1;
 }
 VAR_5 = FUNC_1(VAR_3,VAR_4->vm_start,&VAR_6,&VAR_7,&VAR_8);
 if (VAR_5 && VAR_5->vm_start < VAR_4->vm_end)
  return -VAR_0;
 if ((VAR_4->vm_flags & VAR_2) &&
      FUNC_2(VAR_3, FUNC_4(VAR_4)))
  return -VAR_0;
 FUNC_3(VAR_3, VAR_4, VAR_6, VAR_7, VAR_8);
 return 0;
}
