
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct vm_area_struct {int vm_page_prot; } ;
struct page {int dummy; } ;
struct mm_struct {int page_table_lock; } ;
typedef int pte_t ;
struct TYPE_9__ {int member_0; } ;
typedef TYPE_1__ pmd_t ;
typedef int pgtable_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int,struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct page*,struct page*,unsigned long,struct vm_area_struct*) ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 (struct page**) ;
 struct page** FUNC_8 (int,int ) ;
 int FUNC_9 (int ,struct vm_area_struct*) ;
 scalar_t__ FUNC_10 (struct page*,struct mm_struct*,int ) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*,int ) ;
 int FUNC_13 (struct page*,struct vm_area_struct*,unsigned long) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct mm_struct*,TYPE_1__*,int ) ;
 int FUNC_17 (TYPE_1__,TYPE_1__) ;
 int FUNC_18 (struct vm_area_struct*,unsigned long,TYPE_1__*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int * FUNC_21 (TYPE_1__*,unsigned long) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_25 () ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int) ;

__attribute__((used)) static int FUNC_29(struct mm_struct *VAR_8,
     struct vm_area_struct *VAR_9,
     unsigned long VAR_10,
     pmd_t *VAR_11, pmd_t VAR_12,
     struct page *VAR_13,
     unsigned long VAR_14)
{
 pgtable_t VAR_15;
 pmd_t VAR_16 = {0};
 int VAR_17 = 0, VAR_18;
 struct page **VAR_19;

 VAR_19 = FUNC_8(sizeof(struct page *) * VAR_2,
   VAR_1);
 if (FUNC_28(!VAR_19)) {
  VAR_17 |= VAR_5;
  goto out;
 }

 for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
  VAR_19[VAR_18] = FUNC_3(VAR_0 |
            VAR_7,
            VAR_9, VAR_10, FUNC_15(VAR_13));
  if (FUNC_28(!VAR_19[VAR_18] ||
        FUNC_10(VAR_19[VAR_18], VAR_8,
             VAR_1))) {
   if (VAR_19[VAR_18])
    FUNC_23(VAR_19[VAR_18]);
   while (--VAR_18 >= 0) {
    FUNC_11(VAR_19[VAR_18]);
    FUNC_23(VAR_19[VAR_18]);
   }
   FUNC_7(VAR_19);
   VAR_17 |= VAR_5;
   goto out;
  }
 }

 for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
  FUNC_5(VAR_19[VAR_18], VAR_13 + VAR_18,
       VAR_14 + VAR_3*VAR_18, VAR_9);
  FUNC_2(VAR_19[VAR_18]);
  FUNC_4();
 }

 FUNC_26(&VAR_8->page_table_lock);
 if (FUNC_28(!FUNC_17(*VAR_11, VAR_12)))
  goto out_free_pages;
 FUNC_1(!FUNC_0(VAR_13));

 FUNC_18(VAR_9, VAR_14, VAR_11);


 VAR_15 = FUNC_6(VAR_8);
 FUNC_16(VAR_8, &VAR_16, VAR_15);

 for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++, VAR_14 += VAR_4) {
  pte_t *VAR_20, VAR_21;
  VAR_21 = FUNC_12(VAR_19[VAR_18], VAR_9->vm_page_prot);
  VAR_21 = FUNC_9(FUNC_19(VAR_21), VAR_9);
  FUNC_13(VAR_19[VAR_18], VAR_9, VAR_14);
  VAR_20 = FUNC_21(&VAR_16, VAR_14);
  FUNC_1(!FUNC_20(*VAR_20));
  FUNC_24(VAR_8, VAR_14, VAR_20, VAR_21);
  FUNC_22(VAR_20);
 }
 FUNC_7(VAR_19);

 FUNC_25();
 FUNC_16(VAR_8, VAR_11, VAR_15);
 FUNC_14(VAR_13);
 FUNC_27(&VAR_8->page_table_lock);

 VAR_17 |= VAR_6;
 FUNC_23(VAR_13);

out:
 return VAR_17;

out_free_pages:
 FUNC_27(&VAR_8->page_table_lock);
 for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
  FUNC_11(VAR_19[VAR_18]);
  FUNC_23(VAR_19[VAR_18]);
 }
 FUNC_7(VAR_19);
 goto out;
}
