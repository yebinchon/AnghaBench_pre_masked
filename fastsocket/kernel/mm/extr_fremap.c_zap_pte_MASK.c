
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (struct mm_struct*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct mm_struct*,unsigned long,int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct mm_struct*) ;
 struct page* FUNC_14 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_15(struct mm_struct *VAR_1, struct vm_area_struct *VAR_2,
   unsigned long VAR_3, pte_t *VAR_4)
{
 pte_t VAR_5 = *VAR_4;

 if (FUNC_9(VAR_5)) {
  struct page *VAR_6;

  FUNC_1(VAR_2, VAR_3, FUNC_8(VAR_5));
  VAR_5 = FUNC_11(VAR_2, VAR_3, VAR_4);
  VAR_6 = FUNC_14(VAR_2, VAR_3, VAR_5);
  if (VAR_6) {
   if (FUNC_6(VAR_5))
    FUNC_12(VAR_6);
   FUNC_4(VAR_6);
   FUNC_3(VAR_6);
   FUNC_13(VAR_1);
   FUNC_0(VAR_1, VAR_0);
  }
 } else {
  if (!FUNC_7(VAR_5))
   FUNC_2(FUNC_10(VAR_5));
  FUNC_5(VAR_1, VAR_3, VAR_4, 0);
 }
}
