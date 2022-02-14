
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_1 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int * FUNC_12 (struct mm_struct*,int *,unsigned long,int **) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_17 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_18 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static void FUNC_20(struct mm_struct *VAR_2, pmd_t *VAR_3,
  unsigned long VAR_4, unsigned long VAR_5, pgprot_t VAR_6,
  int VAR_7)
{
 pte_t *VAR_8, VAR_9;
 spinlock_t *VAR_10;

 VAR_8 = FUNC_12(VAR_2, VAR_3, VAR_4, &VAR_10);
 FUNC_2();
 do {
  VAR_9 = *VAR_8;
  if (FUNC_13(VAR_9)) {
   pte_t VAR_11;






    VAR_11 = FUNC_17(VAR_2, VAR_4, VAR_8);
   VAR_11 = FUNC_11(VAR_11, VAR_6);





   if (VAR_7 && FUNC_8(VAR_11))
    VAR_11 = FUNC_10(VAR_11);






    FUNC_16(VAR_2, VAR_4, VAR_8, VAR_11);
  } else if (VAR_0 && !FUNC_9(VAR_9)) {
   swp_entry_t VAR_12 = FUNC_14(VAR_9);

   if (FUNC_4(VAR_12)) {




    FUNC_6(&VAR_12);
    FUNC_18(VAR_2, VAR_4, VAR_8,
     FUNC_19(VAR_12));
   }
  }
 } while (VAR_8++, VAR_4 += VAR_1, VAR_4 != VAR_5);
 FUNC_3();
 FUNC_15(VAR_8 - 1, VAR_10);
}
