
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef enum page_check_address_pmd_flag { ____Placeholder_page_check_address_pmd_flag } page_check_address_pmd_flag ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (struct mm_struct*,unsigned long) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,unsigned long) ;
 struct page* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ) ;

pmd_t *FUNC_10(struct page *VAR_3,
         struct mm_struct *VAR_4,
         unsigned long VAR_5,
         enum page_check_address_pmd_flag VAR_6)
{
 pgd_t *VAR_7;
 pud_t *VAR_8;
 pmd_t *VAR_9, *VAR_10 = ((void*)0);

 if (VAR_5 & ~VAR_0)
  goto out;

 VAR_7 = FUNC_1(VAR_4, VAR_5);
 if (!FUNC_2(*VAR_7))
  goto out;

 VAR_8 = FUNC_8(VAR_7, VAR_5);
 if (!FUNC_9(*VAR_8))
  goto out;

 VAR_9 = FUNC_4(VAR_8, VAR_5);
 if (FUNC_3(*VAR_9))
  goto out;
 if (FUNC_5(*VAR_9) != VAR_3)
  goto out;







 if (VAR_6 == VAR_1 &&
     FUNC_7(*VAR_9))
  goto out;
 if (FUNC_6(*VAR_9)) {
  FUNC_0(VAR_6 == VAR_2 &&
     !FUNC_7(*VAR_9));
  VAR_10 = VAR_9;
 }
out:
 return VAR_10;
}
