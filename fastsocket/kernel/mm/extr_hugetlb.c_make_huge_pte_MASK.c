
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; } ;
struct page {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static pte_t FUNC_6(struct vm_area_struct *VAR_0, struct page *VAR_1,
    int VAR_2)
{
 pte_t VAR_3;

 if (VAR_2) {
  VAR_3 =
      FUNC_4(FUNC_2(FUNC_1(VAR_1, VAR_0->vm_page_prot)));
 } else {
  VAR_3 = FUNC_0(FUNC_1(VAR_1, VAR_0->vm_page_prot));
 }
 VAR_3 = FUNC_5(VAR_3);
 VAR_3 = FUNC_3(VAR_3);

 return VAR_3;
}
