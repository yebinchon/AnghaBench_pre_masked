
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_end; } ;
struct task_struct {int min_flt; int maj_flt; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ FUNC_2 (struct page*) ;
 unsigned long VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct page*) ;
 unsigned long VAR_11 ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 int VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 int FUNC_5 () ;
 int VAR_25 ;
 int FUNC_6 (int ) ;
 struct vm_area_struct* FUNC_7 (struct mm_struct*,unsigned long) ;
 int FUNC_8 (struct vm_area_struct*,struct page*,unsigned long) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct mm_struct*,struct vm_area_struct*,struct page**,struct vm_area_struct**,unsigned long*,int*,int,unsigned int) ;
 struct page* FUNC_11 (struct vm_area_struct*,unsigned long,unsigned int) ;
 struct vm_area_struct* FUNC_12 (struct mm_struct*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct mm_struct*,struct vm_area_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_15 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_16 (struct vm_area_struct*) ;
 int FUNC_17 (int ) ;
 int * FUNC_18 (struct mm_struct*,unsigned long) ;
 int * FUNC_19 (unsigned long) ;
 scalar_t__ FUNC_20 (int ) ;
 int * FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 int * FUNC_24 (int *,unsigned long) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int ) ;
 int * FUNC_27 (int *,unsigned long) ;
 scalar_t__ FUNC_28 (int ) ;
 struct page* FUNC_29 (struct vm_area_struct*,unsigned long,int ) ;

int FUNC_30(struct task_struct *VAR_26, struct mm_struct *VAR_27,
       unsigned long VAR_28, int VAR_29, unsigned int VAR_30,
       struct page **VAR_31, struct vm_area_struct **VAR_32)
{
 int VAR_33;
 unsigned long VAR_34;

 if (VAR_29 <= 0)
  return 0;

 FUNC_4(!!VAR_31 != !!(VAR_30 & VAR_6));





 VAR_34 = (VAR_30 & VAR_8) ?
   (VAR_24 | VAR_21) : (VAR_23 | VAR_20);
 VAR_34 &= (VAR_30 & VAR_5) ?
   (VAR_20 | VAR_21) : (VAR_23 | VAR_24);
 VAR_33 = 0;

 do {
  struct vm_area_struct *VAR_35;

  VAR_35 = FUNC_7(VAR_27, VAR_28);
  if (!VAR_35 && FUNC_15(VAR_27, VAR_28)) {
   unsigned long VAR_36 = VAR_28 & VAR_9;
   struct vm_area_struct *VAR_37 = FUNC_12(VAR_27);
   pgd_t *VAR_38;
   pud_t *VAR_39;
   pmd_t *VAR_40;
   pte_t *VAR_41;


   if (VAR_30 & VAR_8)
    return VAR_33 ? : -VAR_0;
   if (VAR_36 > VAR_11)
    VAR_38 = FUNC_19(VAR_36);
   else
    VAR_38 = FUNC_18(VAR_27, VAR_36);
   FUNC_1(FUNC_17(*VAR_38));
   VAR_39 = FUNC_27(VAR_38, VAR_36);
   FUNC_1(FUNC_26(*VAR_39));
   VAR_40 = FUNC_21(VAR_39, VAR_36);
   if (FUNC_20(*VAR_40))
    return VAR_33 ? : -VAR_0;
   FUNC_4(FUNC_22(*VAR_40));
   VAR_41 = FUNC_24(VAR_40, VAR_36);
   if (FUNC_23(*VAR_41)) {
    FUNC_25(VAR_41);
    return VAR_33 ? : -VAR_0;
   }
   if (VAR_31) {
    struct page *VAR_42 = FUNC_29(VAR_37, VAR_28, *VAR_41);
    VAR_31[VAR_33] = VAR_42;
    if (VAR_42)
     FUNC_13(VAR_42);
   }
   FUNC_25(VAR_41);
   if (VAR_32)
    VAR_32[VAR_33] = VAR_37;
   VAR_33++;
   VAR_28 += VAR_10;
   VAR_29--;
   continue;
  }

  if (!VAR_35 ||
      (VAR_35->vm_flags & (VAR_19 | VAR_22)) ||
      !(VAR_34 & VAR_35->vm_flags))
   return VAR_33 ? : -VAR_0;

  if (FUNC_16(VAR_35)) {
   VAR_33 = FUNC_10(VAR_27, VAR_35, VAR_31, VAR_32,
     &VAR_28, &VAR_29, VAR_33, VAR_30);
   continue;
  }

  do {
   struct page *VAR_43;
   unsigned int VAR_44 = VAR_30;





   if (FUNC_28(FUNC_6(VAR_25)))
    return VAR_33 ? VAR_33 : -VAR_3;

   FUNC_5();
   while (!(VAR_43 = FUNC_11(VAR_35, VAR_28, VAR_44))) {
    int VAR_45;

    VAR_45 = FUNC_14(VAR_27, VAR_35, VAR_28,
     (VAR_44 & VAR_8) ?
     VAR_4 : 0);

    if (VAR_45 & VAR_12) {
     if (VAR_45 & VAR_16)
      return VAR_33 ? VAR_33 : -VAR_2;
     if (VAR_45 & (VAR_13 |
         VAR_14)) {
      if (VAR_33)
       return VAR_33;
      else if (VAR_30 & VAR_7)
       return -VAR_1;
      else
       return -VAR_0;
     }
     if (VAR_45 & VAR_17)
      return VAR_33 ? VAR_33 : -VAR_0;
     FUNC_0();
    }

    if (VAR_26) {
     if (VAR_45 & VAR_15)
      VAR_26->maj_flt++;
     else
      VAR_26->min_flt++;
    }
    if ((VAR_45 & VAR_18) &&
        !(VAR_35->vm_flags & VAR_24))
     VAR_44 &= ~VAR_8;

    FUNC_5();
   }
   if (FUNC_2(VAR_43))
    return VAR_33 ? VAR_33 : FUNC_3(VAR_43);
   if (VAR_31) {
    VAR_31[VAR_33] = VAR_43;

    FUNC_8(VAR_35, VAR_43, VAR_28);
    FUNC_9(VAR_43);
   }
   if (VAR_32)
    VAR_32[VAR_33] = VAR_35;
   VAR_33++;
   VAR_28 += VAR_10;
   VAR_29--;
  } while (VAR_29 && VAR_28 < VAR_35->vm_end);
 } while (VAR_29);
 return VAR_33;
}
