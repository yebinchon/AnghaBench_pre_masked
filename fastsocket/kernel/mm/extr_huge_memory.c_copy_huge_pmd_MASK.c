
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int anon_vma; } ;
struct page {int dummy; } ;
struct mm_struct {int page_table_lock; int nr_ptes; } ;
typedef int pmd_t ;
typedef int pgtable_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mm_struct*,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ) ;
 struct page* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_11 (int ,struct mm_struct*) ;
 int FUNC_12 (struct mm_struct*,unsigned long) ;
 int FUNC_13 (struct mm_struct*,int ) ;
 int FUNC_14 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int ,int *) ;

int FUNC_20(struct mm_struct *VAR_5, struct mm_struct *VAR_6,
    pmd_t *VAR_7, pmd_t *VAR_8, unsigned long VAR_9,
    struct vm_area_struct *VAR_10)
{
 struct page *VAR_11;
 pmd_t VAR_12;
 pgtable_t VAR_13;
 int VAR_14;

 VAR_14 = -VAR_1;
 VAR_13 = FUNC_12(VAR_5, VAR_9);
 if (FUNC_18(!VAR_13))
  goto out;

 FUNC_15(&VAR_5->page_table_lock);
 FUNC_16(&VAR_6->page_table_lock, VAR_3);

 VAR_14 = -VAR_0;
 VAR_12 = *VAR_8;
 if (FUNC_18(!FUNC_7(VAR_12))) {
  FUNC_13(VAR_5, VAR_13);
  goto out_unlock;
 }
 if (FUNC_18(FUNC_8(VAR_12))) {

  FUNC_17(&VAR_6->page_table_lock);
  FUNC_17(&VAR_5->page_table_lock);
  FUNC_13(VAR_5, VAR_13);

  FUNC_19(VAR_10->anon_vma, VAR_8);
  goto out;
 }
 VAR_11 = FUNC_6(VAR_12);
 FUNC_1(!FUNC_0(VAR_11));
 FUNC_3(VAR_11);
 FUNC_4(VAR_11);
 FUNC_2(VAR_5, VAR_4, VAR_2);

 FUNC_10(VAR_6, VAR_9, VAR_8);
 VAR_12 = FUNC_5(FUNC_9(VAR_12));
 FUNC_14(VAR_5, VAR_9, VAR_7, VAR_12);
 FUNC_11(VAR_13, VAR_5);
 VAR_5->nr_ptes++;

 VAR_14 = 0;
out_unlock:
 FUNC_17(&VAR_6->page_table_lock);
 FUNC_17(&VAR_5->page_table_lock);
out:
 return VAR_14;
}
