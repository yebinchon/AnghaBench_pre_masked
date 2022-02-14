
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long,int ) ;
 int * FUNC_4 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct mm_struct*,unsigned long,int *,int ) ;

__attribute__((used)) static int FUNC_9(struct mm_struct *VAR_2, pmd_t *VAR_3,
   unsigned long VAR_4, unsigned long VAR_5,
   unsigned long VAR_6, pgprot_t VAR_7)
{
 pte_t *VAR_8;
 spinlock_t *VAR_9;

 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4, &VAR_9);
 if (!VAR_8)
  return -VAR_0;
 FUNC_1();
 do {
  FUNC_0(!FUNC_6(*VAR_8));
  FUNC_8(VAR_2, VAR_4, VAR_8, FUNC_5(FUNC_3(VAR_6, VAR_7)));
  VAR_6++;
 } while (VAR_8++, VAR_4 += VAR_1, VAR_4 != VAR_5);
 FUNC_2();
 FUNC_7(VAR_8 - 1, VAR_9);
 return 0;
}
