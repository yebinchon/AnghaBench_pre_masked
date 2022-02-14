
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pgd_t ;
typedef int nodemask_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,int *,unsigned long,unsigned long,int const*,unsigned long,void*) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static inline int FUNC_4(struct vm_area_struct *VAR_1,
  unsigned long VAR_2, unsigned long VAR_3,
  const nodemask_t *VAR_4, unsigned long VAR_5,
  void *VAR_6)
{
 pgd_t *VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_3(VAR_1->vm_mm, VAR_2);
 do {
  VAR_8 = FUNC_1(VAR_2, VAR_3);
  if (FUNC_2(VAR_7))
   continue;
  if (FUNC_0(VAR_1, VAR_7, VAR_2, VAR_8, VAR_4,
        VAR_5, VAR_6))
   return -VAR_0;
 } while (VAR_7++, VAR_2 = VAR_8, VAR_2 != VAR_3);
 return 0;
}
