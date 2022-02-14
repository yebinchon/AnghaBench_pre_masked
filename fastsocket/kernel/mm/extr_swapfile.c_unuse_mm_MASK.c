
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {scalar_t__ anon_vma; struct vm_area_struct* vm_next; } ;
struct page {int dummy; } ;
struct mm_struct {int mmap_sem; struct vm_area_struct* mmap; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct vm_area_struct*,int ,struct page*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct mm_struct *VAR_0,
    swp_entry_t VAR_1, struct page *VAR_2)
{
 struct vm_area_struct *VAR_3;
 int VAR_4 = 0;

 if (!FUNC_2(&VAR_0->mmap_sem)) {




  FUNC_0(VAR_2);
  FUNC_4(VAR_2);
  FUNC_1(&VAR_0->mmap_sem);
  FUNC_3(VAR_2);
 }
 for (VAR_3 = VAR_0->mmap; VAR_3; VAR_3 = VAR_3->vm_next) {
  if (VAR_3->anon_vma && (VAR_4 = FUNC_5(VAR_3, VAR_1, VAR_2)))
   break;
 }
 FUNC_6(&VAR_0->mmap_sem);
 return (VAR_4 < 0)? VAR_4: 0;
}
