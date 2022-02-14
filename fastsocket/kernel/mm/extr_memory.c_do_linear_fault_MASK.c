
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; scalar_t__ vm_pgoff; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef scalar_t__ pgoff_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,scalar_t__,unsigned int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mm_struct *VAR_2, struct vm_area_struct *VAR_3,
  unsigned long VAR_4, pte_t *VAR_5, pmd_t *VAR_6,
  unsigned int VAR_7, pte_t VAR_8)
{
 pgoff_t VAR_9 = (((VAR_4 & VAR_0)
   - VAR_3->vm_start) >> VAR_1) + VAR_3->vm_pgoff;

 FUNC_1(VAR_5);
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6, VAR_9, VAR_7, VAR_8);
}
