
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_fault {struct page* page; scalar_t__ pgoff; } ;
struct vm_area_struct {struct page** vm_private_data; scalar_t__ vm_pgoff; } ;
struct page {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;

__attribute__((used)) static int FUNC_1(struct vm_area_struct *VAR_1,
    struct vm_fault *VAR_2)
{
 pgoff_t VAR_3;
 struct page **VAR_4;







 VAR_3 = VAR_2->pgoff - VAR_1->vm_pgoff;

 for (VAR_4 = VAR_1->vm_private_data; VAR_3 && *VAR_4; ++VAR_4)
  VAR_3--;

 if (*VAR_4) {
  struct page *VAR_5 = *VAR_4;
  FUNC_0(VAR_5);
  VAR_2->page = VAR_5;
  return 0;
 }

 return VAR_0;
}
