
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;
struct mm_struct {int page_table_lock; } ;
struct hstate {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (struct vm_area_struct*,unsigned long,int) ;
 int FUNC_7 (struct vm_area_struct*) ;
 int FUNC_8 (struct page*,struct page*,unsigned long,struct vm_area_struct*,int ) ;
 struct hstate* FUNC_9 (struct vm_area_struct*) ;
 unsigned long FUNC_10 (struct hstate*) ;
 scalar_t__ FUNC_11 (struct hstate*) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (struct mm_struct*,unsigned long) ;
 int FUNC_14 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct page*,struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_17 (struct vm_area_struct*,int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (struct vm_area_struct*,struct page*,int) ;
 int FUNC_20 (struct mm_struct*,unsigned long,scalar_t__) ;
 int FUNC_21 (struct mm_struct*,unsigned long,scalar_t__) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (struct page*) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (struct page*,struct vm_area_struct*,unsigned long) ;
 int FUNC_27 (struct page*) ;
 int FUNC_28 (struct hstate*) ;
 struct page* FUNC_29 (int ) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_32 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 scalar_t__ FUNC_35 (int ) ;
 scalar_t__ FUNC_36 (struct mm_struct*,struct vm_area_struct*,struct page*,unsigned long) ;

__attribute__((used)) static int FUNC_37(struct mm_struct *VAR_3, struct vm_area_struct *VAR_4,
   unsigned long VAR_5, pte_t *VAR_6, pte_t VAR_7,
   struct page *VAR_8)
{
 struct hstate *VAR_9 = FUNC_9(VAR_4);
 struct page *VAR_10, *VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 VAR_10 = FUNC_29(VAR_7);

retry_avoidcopy:


 VAR_12 = (FUNC_25(VAR_10) == 1);
 if (VAR_12) {
  if (FUNC_3(VAR_10))
   FUNC_26(VAR_10, VAR_4, VAR_5);
  FUNC_32(VAR_4, VAR_5, VAR_6);
  return 0;
 }
 if (!(VAR_4->vm_flags & VAR_2) &&
   FUNC_17(VAR_4, VAR_0) &&
   VAR_10 != VAR_8)
  VAR_13 = 1;

 FUNC_22(VAR_10);


 FUNC_34(&VAR_3->page_table_lock);
 VAR_11 = FUNC_6(VAR_4, VAR_5, VAR_13);

 if (FUNC_1(VAR_11)) {
  FUNC_23(VAR_10);
  if (VAR_13) {
   FUNC_0(FUNC_12(VAR_7));
   if (FUNC_36(VAR_3, VAR_4, VAR_10, VAR_5)) {
    FUNC_0(FUNC_24(VAR_10) != 1);
    FUNC_0(FUNC_12(VAR_7));
    FUNC_33(&VAR_3->page_table_lock);
    goto retry_avoidcopy;
   }
   FUNC_4(1);
  }


  FUNC_33(&VAR_3->page_table_lock);
  return -FUNC_2(VAR_11);
 }





 if (FUNC_35(FUNC_7(VAR_4))) {

  FUNC_33(&VAR_3->page_table_lock);
  return VAR_1;
 }

 FUNC_8(VAR_11, VAR_10, VAR_5, VAR_4,
       FUNC_28(VAR_9));
 FUNC_5(VAR_11);





 FUNC_33(&VAR_3->page_table_lock);
 VAR_6 = FUNC_13(VAR_3, VAR_5 & FUNC_10(VAR_9));
 if (FUNC_18(FUNC_30(FUNC_15(VAR_6), VAR_7))) {

  FUNC_21(VAR_3,
   VAR_5 & FUNC_10(VAR_9),
   (VAR_5 & FUNC_10(VAR_9)) + FUNC_11(VAR_9));
  FUNC_14(VAR_4, VAR_5, VAR_6);
  FUNC_31(VAR_3, VAR_5, VAR_6,
    FUNC_19(VAR_4, VAR_11, 1));
  FUNC_27(VAR_10);
  FUNC_16(VAR_11, VAR_4, VAR_5);

  VAR_11 = VAR_10;
  FUNC_20(VAR_3,
   VAR_5 & FUNC_10(VAR_9),
   (VAR_5 & FUNC_10(VAR_9)) + FUNC_11(VAR_9));
 }
 FUNC_23(VAR_11);
 FUNC_23(VAR_10);
 return 0;
}
