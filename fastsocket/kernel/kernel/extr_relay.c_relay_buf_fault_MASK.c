
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_fault {int pgoff; struct page* page; } ;
struct vm_area_struct {struct rchan_buf* vm_private_data; } ;
struct rchan_buf {scalar_t__ start; } ;
struct page {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct vm_area_struct *VAR_3, struct vm_fault *VAR_4)
{
 struct page *VAR_5;
 struct rchan_buf *VAR_6 = VAR_3->vm_private_data;
 pgoff_t VAR_7 = VAR_4->pgoff;

 if (!VAR_6)
  return VAR_1;

 VAR_5 = FUNC_1(VAR_6->start + (VAR_7 << VAR_0));
 if (!VAR_5)
  return VAR_2;
 FUNC_0(VAR_5);
 VAR_4->page = VAR_5;

 return 0;
}
