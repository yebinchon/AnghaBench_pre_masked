
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int * FUNC_2 (struct mm_struct*,int *,unsigned long) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct mm_struct*,int *,unsigned long,unsigned long,unsigned long,int ) ;

__attribute__((used)) static inline int FUNC_5(struct mm_struct *VAR_2, pud_t *VAR_3,
   unsigned long VAR_4, unsigned long VAR_5,
   unsigned long VAR_6, pgprot_t VAR_7)
{
 pmd_t *VAR_8;
 unsigned long VAR_9;

 VAR_6 -= VAR_4 >> VAR_1;
 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (!VAR_8)
  return -VAR_0;
 FUNC_0(FUNC_3(*VAR_8));
 do {
  VAR_9 = FUNC_1(VAR_4, VAR_5);
  if (FUNC_4(VAR_2, VAR_8, VAR_4, VAR_9,
    VAR_6 + (VAR_4 >> VAR_1), VAR_7))
   return -VAR_0;
 } while (VAR_8++, VAR_4 = VAR_9, VAR_4 != VAR_5);
 return 0;
}
