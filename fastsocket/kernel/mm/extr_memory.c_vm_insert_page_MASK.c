
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_page_prot; int vm_flags; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,struct page*,int ) ;
 int FUNC_1 (struct page*) ;

int FUNC_2(struct vm_area_struct *VAR_3, unsigned long VAR_4,
   struct page *VAR_5)
{
 if (VAR_4 < VAR_3->vm_start || VAR_4 >= VAR_3->vm_end)
  return -VAR_0;
 if (!FUNC_1(VAR_5))
  return -VAR_1;
 VAR_3->vm_flags |= VAR_2;
 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_3->vm_page_prot);
}
