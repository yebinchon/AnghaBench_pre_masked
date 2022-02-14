
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_page_prot; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct vm_area_struct*,unsigned long) ;
 int VAR_5 ;
 int FUNC_2 (struct vm_area_struct*) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*,unsigned long) ;
 int FUNC_4 (struct mm_struct*,int ) ;
 scalar_t__ FUNC_5 (struct page*,struct mm_struct*,int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,int ) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (struct page*,struct vm_area_struct*,unsigned long) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_20 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_23(struct mm_struct *VAR_6, struct vm_area_struct *VAR_7,
  unsigned long VAR_8, pte_t *VAR_9, pmd_t *VAR_10,
  unsigned int VAR_11)
{
 struct page *VAR_12;
 spinlock_t *VAR_13;
 pte_t VAR_14;

 FUNC_17(VAR_9);


 if (FUNC_3(VAR_7, VAR_8) < 0)
  return VAR_3;


 if (!(VAR_11 & VAR_0)) {
  VAR_14 = FUNC_13(FUNC_11(FUNC_8(VAR_8),
      VAR_7->vm_page_prot));
  VAR_9 = FUNC_16(VAR_6, VAR_10, VAR_8, &VAR_13);
  if (!FUNC_15(*VAR_9))
   goto unlock;
  goto setpte;
 }


 if (FUNC_21(FUNC_2(VAR_7)))
  goto oom;
 VAR_12 = FUNC_1(VAR_7, VAR_8);
 if (!VAR_12)
  goto oom;
 FUNC_0(VAR_12);

 FUNC_20(VAR_6, VAR_8);
 if (FUNC_5(VAR_12, VAR_6, VAR_1))
  goto oom_free_page;

 VAR_14 = FUNC_7(VAR_12, VAR_7->vm_page_prot);
 if (VAR_7->vm_flags & VAR_4)
  VAR_14 = FUNC_14(FUNC_12(VAR_14));

 VAR_9 = FUNC_16(VAR_6, VAR_10, VAR_8, &VAR_13);
 if (!FUNC_15(*VAR_9))
  goto release;

 FUNC_4(VAR_6, VAR_5);
 FUNC_9(VAR_12, VAR_7, VAR_8);
setpte:
 FUNC_19(VAR_6, VAR_8, VAR_9, VAR_14);


 FUNC_22(VAR_7, VAR_8, VAR_14);
unlock:
 FUNC_18(VAR_9, VAR_13);
 return 0;
release:
 FUNC_6(VAR_12);
 FUNC_10(VAR_12);
 goto unlock;
oom_free_page:
 FUNC_10(VAR_12);
oom:
 return VAR_2;
}
