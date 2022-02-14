
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; } ;
struct page {int dummy; } ;
struct mm_struct {int page_table_lock; int nr_ptes; } ;
typedef int pmd_t ;
typedef int pgtable_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct mm_struct*,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct page*,unsigned long,int ) ;
 int FUNC_5 (int ,struct vm_area_struct*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,int ) ;
 int FUNC_8 (struct page*,struct vm_area_struct*,unsigned long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,struct mm_struct*) ;
 int FUNC_13 (struct mm_struct*,unsigned long) ;
 int FUNC_14 (struct mm_struct*,int ) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct mm_struct *VAR_3,
     struct vm_area_struct *VAR_4,
     unsigned long VAR_5, pmd_t *VAR_6,
     struct page *VAR_7)
{
 int VAR_8 = 0;
 pgtable_t VAR_9;

 FUNC_1(!FUNC_0(VAR_7));
 VAR_9 = FUNC_13(VAR_3, VAR_5);
 if (FUNC_19(!VAR_9)) {
  FUNC_6(VAR_7);
  FUNC_15(VAR_7);
  return VAR_1;
 }

 FUNC_4(VAR_7, VAR_5, VAR_0);
 FUNC_2(VAR_7);

 FUNC_17(&VAR_3->page_table_lock);
 if (FUNC_19(!FUNC_11(*VAR_6))) {
  FUNC_18(&VAR_3->page_table_lock);
  FUNC_6(VAR_7);
  FUNC_15(VAR_7);
  FUNC_14(VAR_3, VAR_9);
 } else {
  pmd_t VAR_10;
  VAR_10 = FUNC_7(VAR_7, VAR_4->vm_page_prot);
  VAR_10 = FUNC_5(FUNC_9(VAR_10), VAR_4);
  VAR_10 = FUNC_10(VAR_10);






  FUNC_8(VAR_7, VAR_4, VAR_5);
  FUNC_16(VAR_3, VAR_5, VAR_6, VAR_10);
  FUNC_12(VAR_9, VAR_3);
  FUNC_3(VAR_3, VAR_2, VAR_0);
  VAR_3->nr_ptes++;
  FUNC_18(&VAR_3->page_table_lock);
 }

 return VAR_8;
}
