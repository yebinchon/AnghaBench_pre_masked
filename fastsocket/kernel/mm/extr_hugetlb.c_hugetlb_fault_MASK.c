
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;
struct mm_struct {int page_table_lock; } ;
struct hstate {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int DEFINE_MUTEX ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hstate*) ;
 int VAR_3 ;
 struct hstate* FUNC_1 (struct vm_area_struct*) ;
 int VAR_4 ;
 int FUNC_2 (struct hstate*) ;
 int * FUNC_3 (struct mm_struct*,unsigned long,int ,int*) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (struct mm_struct*,unsigned long) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct vm_area_struct*,unsigned long,int *,int ,unsigned int) ;
 int FUNC_8 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,int ,struct page*) ;
 int FUNC_9 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,unsigned int) ;
 struct page* FUNC_10 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct mm_struct*,int *,unsigned long) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 struct page* FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (struct page*) ;
 int FUNC_27 (struct vm_area_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_28 (struct hstate*,struct vm_area_struct*,unsigned long) ;

int FUNC_29(struct mm_struct *VAR_5, struct vm_area_struct *VAR_6,
   unsigned long VAR_7, unsigned int VAR_8)
{
 pte_t *VAR_9;
 pte_t VAR_10;
 int VAR_11;
 struct page *VAR_12 = ((void*)0);
 struct page *VAR_13 = ((void*)0);
 static DEFINE_MUTEX(VAR_14);
 struct hstate *VAR_15 = FUNC_1(VAR_6);
 bool VAR_16 = 0;

 VAR_9 = FUNC_5(VAR_5, VAR_7);
 if (VAR_9) {
  VAR_10 = FUNC_6(VAR_9);
  if (FUNC_25(FUNC_12(VAR_10))) {
   FUNC_14(VAR_5, (pmd_t *)VAR_9, VAR_7);
   return 0;
  } else if (FUNC_25(FUNC_11(VAR_10)))
   return VAR_1 |
          FUNC_0(VAR_15 - VAR_4);
 }

 VAR_9 = FUNC_3(VAR_5, VAR_7, FUNC_2(VAR_15), &VAR_16);
 if (!VAR_9)
  return VAR_2;


 if (VAR_16)
  return 0;






 FUNC_15(&VAR_14);
 VAR_10 = FUNC_6(VAR_9);
 if (FUNC_4(VAR_10)) {
  VAR_11 = FUNC_9(VAR_5, VAR_6, VAR_7, VAR_9, VAR_8);
  goto out_mutex;
 }

 VAR_11 = 0;
 if ((VAR_8 & VAR_0) && !FUNC_21(VAR_10)) {
  if (FUNC_28(VAR_15, VAR_6, VAR_7) < 0) {
   VAR_11 = VAR_2;
   goto out_mutex;
  }

  if (!(VAR_6->vm_flags & VAR_3))
   VAR_13 = FUNC_10(VAR_15,
        VAR_6, VAR_7);
 }
 VAR_12 = FUNC_19(VAR_10);
 if (VAR_12 != VAR_13)
  FUNC_13(VAR_12);

 FUNC_23(&VAR_5->page_table_lock);

 if (FUNC_25(!FUNC_20(VAR_10, FUNC_6(VAR_9))))
  goto out_page_table_lock;


 if (VAR_8 & VAR_0) {
  if (!FUNC_21(VAR_10)) {
   VAR_11 = FUNC_8(VAR_5, VAR_6, VAR_7, VAR_9, VAR_10,
       VAR_13);
   goto out_page_table_lock;
  }
  VAR_10 = FUNC_17(VAR_10);
 }
 VAR_10 = FUNC_18(VAR_10);
 if (FUNC_7(VAR_6, VAR_7, VAR_9, VAR_10,
      VAR_8 & VAR_0))
  FUNC_27(VAR_6, VAR_7, VAR_10);

out_page_table_lock:
 FUNC_24(&VAR_5->page_table_lock);

 if (VAR_13) {
  FUNC_26(VAR_13);
  FUNC_22(VAR_13);
 }
 if (VAR_12 != VAR_13)
  FUNC_26(VAR_12);

out_mutex:
 FUNC_16(&VAR_14);

 return VAR_11;
}
