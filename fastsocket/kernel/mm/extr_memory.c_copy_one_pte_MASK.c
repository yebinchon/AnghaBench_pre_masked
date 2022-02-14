
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned long val; } ;
typedef TYPE_1__ swp_entry_t ;
struct vm_area_struct {unsigned long vm_flags; } ;
struct page {int dummy; } ;
struct mm_struct {int mmlist; } ;
typedef int pte_t ;


 size_t FUNC_0 (struct page*) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (TYPE_1__) ;
 scalar_t__ FUNC_4 (TYPE_1__) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 TYPE_1__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_16 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (TYPE_1__) ;
 int FUNC_20 (TYPE_1__) ;
 scalar_t__ FUNC_21 (int) ;
 struct page* FUNC_22 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static inline unsigned long
FUNC_23(struct mm_struct *VAR_2, struct mm_struct *VAR_3,
  pte_t *VAR_4, pte_t *VAR_5, struct vm_area_struct *VAR_6,
  unsigned long VAR_7, int *VAR_8)
{
 unsigned long VAR_9 = VAR_6->vm_flags;
 pte_t VAR_10 = *VAR_5;
 struct page *VAR_11;


 if (FUNC_21(!FUNC_12(VAR_10))) {
  if (!FUNC_9(VAR_10)) {
   swp_entry_t VAR_12 = FUNC_13(VAR_10);

   if (FUNC_19(VAR_12) < 0)
    return VAR_12.val;


   if (FUNC_21(FUNC_6(&VAR_2->mmlist))) {
    FUNC_17(&VAR_1);
    if (FUNC_6(&VAR_2->mmlist))
     FUNC_5(&VAR_2->mmlist,
       &VAR_3->mmlist);
    FUNC_18(&VAR_1);
   }
   if (!FUNC_3(VAR_12))
    VAR_8[2]++;
   else if (FUNC_4(VAR_12) &&
     FUNC_2(VAR_9)) {




    FUNC_7(&VAR_12);
    VAR_10 = FUNC_20(VAR_12);
    FUNC_16(VAR_3, VAR_7, VAR_5, VAR_10);
   }
  }
  goto out_set_pte;
 }





 if (FUNC_2(VAR_9)) {
  FUNC_15(VAR_3, VAR_7, VAR_5);
  VAR_10 = FUNC_14(VAR_10);
 }





 if (VAR_9 & VAR_0)
  VAR_10 = FUNC_10(VAR_10);
 VAR_10 = FUNC_11(VAR_10);

 VAR_11 = FUNC_22(VAR_6, VAR_7, VAR_10);
 if (VAR_11) {
  FUNC_1(VAR_11);
  FUNC_8(VAR_11);
  VAR_8[FUNC_0(VAR_11)]++;
 }

out_set_pte:
 FUNC_16(VAR_2, VAR_7, VAR_4, VAR_10);
 return 0;
}
