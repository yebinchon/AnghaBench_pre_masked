
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct anon_vma* anon_vma; } ;
struct page {scalar_t__ index; struct address_space* mapping; } ;
struct anon_vma {int dummy; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long) ;

void FUNC_3(struct page *VAR_1,
 struct vm_area_struct *VAR_2, unsigned long VAR_3)
{
 struct anon_vma *VAR_4 = VAR_2->anon_vma;

 FUNC_1(!FUNC_0(VAR_1));
 FUNC_1(!VAR_4);
 FUNC_1(VAR_1->index != FUNC_2(VAR_2, VAR_3));

 VAR_4 = (void *) VAR_4 + VAR_0;
 VAR_1->mapping = (struct address_space *) VAR_4;
}
