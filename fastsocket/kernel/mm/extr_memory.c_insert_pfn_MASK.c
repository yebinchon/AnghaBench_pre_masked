
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct mm_struct*,unsigned long,int **) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_6 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_7(struct vm_area_struct *VAR_2, unsigned long VAR_3,
   unsigned long VAR_4, pgprot_t VAR_5)
{
 struct mm_struct *VAR_6 = VAR_2->vm_mm;
 int VAR_7;
 pte_t *VAR_8, VAR_9;
 spinlock_t *VAR_10;

 VAR_7 = -VAR_1;
 VAR_8 = FUNC_0(VAR_6, VAR_3, &VAR_10);
 if (!VAR_8)
  goto out;
 VAR_7 = -VAR_0;
 if (!FUNC_3(*VAR_8))
  goto out_unlock;


 VAR_9 = FUNC_2(FUNC_1(VAR_4, VAR_5));
 FUNC_5(VAR_6, VAR_3, VAR_8, VAR_9);
 FUNC_6(VAR_2, VAR_3, VAR_9);

 VAR_7 = 0;
out_unlock:
 FUNC_4(VAR_8, VAR_10);
out:
 return VAR_7;
}
