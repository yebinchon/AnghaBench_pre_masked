
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_flags; struct page** vm_private_data; int * vm_ops; int vm_page_prot; struct mm_struct* vm_mm; int anon_vma_chain; } ;
struct page {int dummy; } ;
struct mm_struct {unsigned long def_flags; unsigned long total_vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct mm_struct*,struct vm_area_struct*) ;
 int FUNC_2 (int ,struct vm_area_struct*) ;
 struct vm_area_struct* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct vm_area_struct*) ;
 int FUNC_5 (int *,int ,int ,int ,unsigned long,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (unsigned long) ;

int FUNC_8(struct mm_struct *VAR_6,
       unsigned long VAR_7, unsigned long VAR_8,
       unsigned long VAR_9, struct page **VAR_10)
{
 int VAR_11;
 struct vm_area_struct *VAR_12;

 VAR_12 = FUNC_3(VAR_5, VAR_1);
 if (FUNC_6(VAR_12 == ((void*)0)))
  return -VAR_0;

 FUNC_0(&VAR_12->anon_vma_chain);
 VAR_12->vm_mm = VAR_6;
 VAR_12->vm_start = VAR_7;
 VAR_12->vm_end = VAR_7 + VAR_8;

 VAR_12->vm_flags = VAR_9 | VAR_6->def_flags | VAR_3;
 VAR_12->vm_page_prot = FUNC_7(VAR_12->vm_flags);

 VAR_12->vm_ops = &VAR_4;
 VAR_12->vm_private_data = VAR_10;

 VAR_11 = FUNC_5(((void*)0), 0, 0, 0, VAR_12->vm_start, 1);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_1(VAR_6, VAR_12);
 if (VAR_11)
  goto out;

 VAR_6->total_vm += VAR_8 >> VAR_2;

 FUNC_4(VAR_12);

 return 0;

out:
 FUNC_2(VAR_5, VAR_12);
 return VAR_11;
}
