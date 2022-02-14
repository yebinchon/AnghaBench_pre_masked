
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; int vm_page_prot; } ;
struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,struct page*,int ) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long,int ) ;
 struct page* FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;

int FUNC_5(struct vm_area_struct *VAR_3, unsigned long VAR_4,
   unsigned long VAR_5)
{
 FUNC_0(!(VAR_3->vm_flags & VAR_2));

 if (VAR_4 < VAR_3->vm_start || VAR_4 >= VAR_3->vm_end)
  return -VAR_0;
 if (!VAR_1 && FUNC_4(VAR_5)) {
  struct page *VAR_6;

  VAR_6 = FUNC_3(VAR_5);
  return FUNC_1(VAR_3, VAR_4, VAR_6, VAR_3->vm_page_prot);
 }
 return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_3->vm_page_prot);
}
