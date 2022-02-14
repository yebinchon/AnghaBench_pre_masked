
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pgd_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mm_struct*,struct mm_struct*,int *,int *,struct vm_area_struct*,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int * FUNC_2 (struct mm_struct*,int *,unsigned long) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_5(struct mm_struct *VAR_1, struct mm_struct *VAR_2,
  pgd_t *VAR_3, pgd_t *VAR_4, struct vm_area_struct *VAR_5,
  unsigned long VAR_6, unsigned long VAR_7)
{
 pud_t *VAR_8, *VAR_9;
 unsigned long VAR_10;

 VAR_9 = FUNC_2(VAR_1, VAR_3, VAR_6);
 if (!VAR_9)
  return -VAR_0;
 VAR_8 = FUNC_4(VAR_4, VAR_6);
 do {
  VAR_10 = FUNC_1(VAR_6, VAR_7);
  if (FUNC_3(VAR_8))
   continue;
  if (FUNC_0(VAR_1, VAR_2, VAR_9, VAR_8,
      VAR_5, VAR_6, VAR_10))
   return -VAR_0;
 } while (VAR_9++, VAR_8++, VAR_6 = VAR_10, VAR_6 != VAR_7);
 return 0;
}
