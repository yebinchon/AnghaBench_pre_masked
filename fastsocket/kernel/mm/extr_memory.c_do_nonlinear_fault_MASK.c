
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgoff_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,int ,unsigned int,int ) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mm_struct*,int *,int *,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct mm_struct *VAR_3, struct vm_area_struct *VAR_4,
  unsigned long VAR_5, pte_t *VAR_6, pmd_t *VAR_7,
  unsigned int VAR_8, pte_t VAR_9)
{
 pgoff_t VAR_10;

 VAR_8 |= VAR_0;

 if (!FUNC_3(VAR_3, VAR_7, VAR_6, VAR_9))
  return 0;

 if (FUNC_4(!(VAR_4->vm_flags & VAR_2))) {



  FUNC_1(VAR_4, VAR_5, VAR_9, ((void*)0));
  return VAR_1;
 }

 VAR_10 = FUNC_2(VAR_9);
 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7, VAR_10, VAR_8, VAR_9);
}
