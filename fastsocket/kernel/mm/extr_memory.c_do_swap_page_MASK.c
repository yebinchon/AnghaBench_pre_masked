
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ val; } ;
typedef TYPE_1__ swp_entry_t ;
struct vm_area_struct {int vm_flags; int vm_page_prot; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct mem_cgroup {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mm_struct*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct page*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_9 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,int *,int *,int ) ;
 int FUNC_10 (struct vm_area_struct*,struct page*) ;
 int FUNC_11 (struct mm_struct*) ;
 int FUNC_12 (struct mm_struct*,int ) ;
 scalar_t__ FUNC_13 (TYPE_1__) ;
 scalar_t__ FUNC_14 (TYPE_1__) ;
 struct page* FUNC_15 (struct page*,struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct page*,struct mm_struct*,unsigned int) ;
 struct page* FUNC_18 (TYPE_1__) ;
 int FUNC_19 (int ,struct vm_area_struct*) ;
 int FUNC_20 (struct mem_cgroup*) ;
 int FUNC_21 (struct page*,struct mem_cgroup*) ;
 scalar_t__ FUNC_22 (struct mm_struct*,struct page*,int ,struct mem_cgroup**) ;
 int FUNC_23 (struct mm_struct*,int *,unsigned long) ;
 int FUNC_24 (struct page*,int ) ;
 int FUNC_25 (TYPE_1__) ;
 int FUNC_26 (struct page*) ;
 scalar_t__ FUNC_27 (struct page*) ;
 int FUNC_28 (struct vm_area_struct*,unsigned long,int ,int *) ;
 int FUNC_29 (int ) ;
 int * FUNC_30 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_31 (int ,int ) ;
 TYPE_1__ FUNC_32 (int ) ;
 int FUNC_33 (struct mm_struct*,int *,int *,int ) ;
 int FUNC_34 (int *,int *) ;
 scalar_t__ FUNC_35 (struct page*) ;
 int FUNC_36 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_37 (TYPE_1__) ;
 int VAR_13 ;
 struct page* FUNC_38 (TYPE_1__,int ,struct vm_area_struct*,unsigned long) ;
 int FUNC_39 (struct mm_struct*,unsigned long) ;
 int FUNC_40 (struct page*) ;
 scalar_t__ FUNC_41 (int) ;
 int FUNC_42 (struct page*) ;
 int FUNC_43 (struct vm_area_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_44 () ;

__attribute__((used)) static int FUNC_45(struct mm_struct *VAR_14, struct vm_area_struct *VAR_15,
  unsigned long VAR_16, pte_t *VAR_17, pmd_t *VAR_18,
  unsigned int VAR_19, pte_t VAR_20)
{
 spinlock_t *VAR_21;
 struct page *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);
 swp_entry_t VAR_24;
 pte_t VAR_25;
 int VAR_26;
 struct mem_cgroup *VAR_27 = ((void*)0);
 int VAR_28 = 0;
 int VAR_29 = 0;

 if (!FUNC_33(VAR_14, VAR_18, VAR_17, VAR_20))
  goto out;

 VAR_24 = FUNC_32(VAR_20);
 if (FUNC_41(FUNC_25(VAR_24))) {
  if (FUNC_14(VAR_24)) {
   FUNC_23(VAR_14, VAR_18, VAR_16);
  } else if (FUNC_13(VAR_24)) {
   VAR_29 = VAR_6;
  } else {
   FUNC_28(VAR_15, VAR_16, VAR_20, ((void*)0));
   VAR_29 = VAR_10;
  }
  goto out;
 }
 FUNC_7(VAR_0);
 VAR_22 = FUNC_18(VAR_24);
 if (!VAR_22) {
  FUNC_11(VAR_14);
  VAR_22 = FUNC_38(VAR_24,
     VAR_2, VAR_15, VAR_16);
  if (!VAR_22) {




   VAR_17 = FUNC_30(VAR_14, VAR_18, VAR_16, &VAR_21);
   if (FUNC_16(FUNC_31(*VAR_17, VAR_20)))
    VAR_29 = VAR_8;
   FUNC_6(VAR_0);
   goto unlock;
  }


  VAR_29 = VAR_7;
  FUNC_4(VAR_4);
 } else if (FUNC_0(VAR_22)) {




  VAR_29 = VAR_6;
  FUNC_6(VAR_0);
  goto out_release;
 }

 VAR_26 = FUNC_17(VAR_22, VAR_14, VAR_19);
 FUNC_6(VAR_0);
 if (!VAR_26) {
  VAR_29 |= VAR_9;
  goto out_release;
 }







 if (FUNC_41(!FUNC_2(VAR_22) || FUNC_27(VAR_22) != VAR_24.val))
  goto out_page;

 VAR_23 = VAR_22;
 VAR_22 = FUNC_15(VAR_22, VAR_15, VAR_16);
 if (FUNC_41(!VAR_22)) {
  VAR_29 = VAR_8;
  VAR_22 = VAR_23;
  VAR_23 = ((void*)0);
  goto out_page;
 }
 if (VAR_22 == VAR_23)
  VAR_23 = ((void*)0);

 if (FUNC_22(VAR_14, VAR_22, VAR_3, &VAR_27)) {
  VAR_29 = VAR_8;
  goto out_page;
 }




 VAR_17 = FUNC_30(VAR_14, VAR_18, VAR_16, &VAR_21);
 if (FUNC_41(!FUNC_31(*VAR_17, VAR_20)))
  goto out_nomap;

 if (FUNC_41(!FUNC_3(VAR_22))) {
  VAR_29 = VAR_10;
  goto out_nomap;
 }
 FUNC_12(VAR_14, VAR_12);
 FUNC_5(VAR_14, VAR_13);
 VAR_25 = FUNC_24(VAR_22, VAR_15->vm_page_prot);
 if ((VAR_19 & VAR_1) && FUNC_35(VAR_22)) {
  VAR_25 = FUNC_19(FUNC_29(VAR_25), VAR_15);
  VAR_19 &= ~VAR_1;
  VAR_28 = 1;
 }
 FUNC_10(VAR_15, VAR_22);
 FUNC_36(VAR_14, VAR_16, VAR_17, VAR_25);
 FUNC_8(VAR_22, VAR_15, VAR_16, VAR_28);

 FUNC_21(VAR_22, VAR_27);

 FUNC_37(VAR_24);
 if (FUNC_44() || (VAR_15->vm_flags & VAR_11) || FUNC_1(VAR_22))
  FUNC_40(VAR_22);
 FUNC_42(VAR_22);
 if (VAR_23) {
  FUNC_42(VAR_23);
  FUNC_26(VAR_23);
 }

 if (VAR_19 & VAR_1) {
  VAR_29 |= FUNC_9(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_21, VAR_25);
  if (VAR_29 & VAR_5)
   VAR_29 &= VAR_5;
  goto out;
 }


 FUNC_43(VAR_15, VAR_16, VAR_25);
unlock:
 FUNC_34(VAR_17, VAR_21);
out:
 FUNC_39(VAR_14, VAR_16);
 return VAR_29;
out_nomap:
 FUNC_20(VAR_27);
 FUNC_34(VAR_17, VAR_21);
out_page:
 FUNC_42(VAR_22);
out_release:
 FUNC_26(VAR_22);
 if (VAR_23) {
  FUNC_42(VAR_23);
  FUNC_26(VAR_23);
 }
 return VAR_29;
}
