
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_mm; } ;
typedef int spinlock_t ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned long,int **,int **) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(struct vm_area_struct *VAR_3, unsigned long VAR_4,
 unsigned long *VAR_5)
{
 int VAR_6 = -VAR_0;
 spinlock_t *VAR_7;
 pte_t *VAR_8;

 if (!(VAR_3->vm_flags & (VAR_1 | VAR_2)))
  return VAR_6;

 VAR_6 = FUNC_0(VAR_3->vm_mm, VAR_4, &VAR_8, &VAR_7);
 if (VAR_6)
  return VAR_6;
 *VAR_5 = FUNC_1(*VAR_8);
 FUNC_2(VAR_8, VAR_7);
 return 0;
}
