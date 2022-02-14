
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 int * FUNC_0 (struct mm_struct*,unsigned long,int **) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_5 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *) ;

__attribute__((used)) static int FUNC_6(struct mm_struct *VAR_1, struct vm_area_struct *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4, pgprot_t VAR_5)
{
 int VAR_6 = -VAR_0;
 pte_t *VAR_7;
 spinlock_t *VAR_8;

 VAR_7 = FUNC_0(VAR_1, VAR_3, &VAR_8);
 if (!VAR_7)
  goto out;

 if (!FUNC_2(*VAR_7))
  FUNC_5(VAR_1, VAR_2, VAR_3, VAR_7);

 FUNC_4(VAR_1, VAR_3, VAR_7, FUNC_1(VAR_4));







 FUNC_3(VAR_7, VAR_8);
 VAR_6 = 0;
out:
 return VAR_6;
}
