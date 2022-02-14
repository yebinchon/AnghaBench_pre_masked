
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int nodemask_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,int *,unsigned long,unsigned long,int const*,unsigned long,void*) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static inline int FUNC_5(struct vm_area_struct *VAR_1, pud_t *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4,
  const nodemask_t *VAR_5, unsigned long VAR_6,
  void *VAR_7)
{
 pmd_t *VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_3(VAR_2, VAR_3);
 do {
  VAR_9 = FUNC_1(VAR_3, VAR_4);
  FUNC_4(VAR_1->vm_mm, VAR_8);
  if (FUNC_2(VAR_8))
   continue;
  if (FUNC_0(VAR_1, VAR_8, VAR_3, VAR_9, VAR_5,
        VAR_6, VAR_7))
   return -VAR_0;
 } while (VAR_8++, VAR_3 = VAR_9, VAR_3 != VAR_4);
 return 0;
}
