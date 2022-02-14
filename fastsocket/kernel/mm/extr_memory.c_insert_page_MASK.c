
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_3 ;
 int FUNC_1 (struct page*) ;
 int * FUNC_2 (struct mm_struct*,unsigned long,int **) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct mm_struct*,int ) ;
 int FUNC_5 (struct page*,int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct mm_struct*,unsigned long,int *,int ) ;

__attribute__((used)) static int FUNC_10(struct vm_area_struct *VAR_4, unsigned long VAR_5,
   struct page *VAR_6, pgprot_t VAR_7)
{
 struct mm_struct *VAR_8 = VAR_4->vm_mm;
 int VAR_9;
 pte_t *VAR_10;
 spinlock_t *VAR_11;

 VAR_9 = -VAR_1;
 if (FUNC_0(VAR_6))
  goto out;
 VAR_9 = -VAR_2;
 FUNC_1(VAR_6);
 VAR_10 = FUNC_2(VAR_8, VAR_5, &VAR_11);
 if (!VAR_10)
  goto out;
 VAR_9 = -VAR_0;
 if (!FUNC_7(*VAR_10))
  goto out_unlock;


 FUNC_3(VAR_6);
 FUNC_4(VAR_8, VAR_3);
 FUNC_6(VAR_6);
 FUNC_9(VAR_8, VAR_5, VAR_10, FUNC_5(VAR_6, VAR_7));

 VAR_9 = 0;
 FUNC_8(VAR_10, VAR_11);
 return VAR_9;
out_unlock:
 FUNC_8(VAR_10, VAR_11);
out:
 return VAR_9;
}
