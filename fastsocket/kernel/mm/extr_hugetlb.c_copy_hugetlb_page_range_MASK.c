
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; } ;
struct page {int dummy; } ;
struct mm_struct {int page_table_lock; } ;
struct hstate {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 struct hstate* FUNC_1 (struct vm_area_struct*) ;
 unsigned long FUNC_2 (struct hstate*) ;
 int * FUNC_3 (struct mm_struct*,unsigned long,unsigned long,int*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (struct mm_struct*,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_8 (struct page*) ;
 struct page* FUNC_9 (int ) ;
 int FUNC_10 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct mm_struct *VAR_4, struct mm_struct *VAR_5,
       struct vm_area_struct *VAR_6)
{
 pte_t *VAR_7, *VAR_8, VAR_9;
 struct page *VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 struct hstate *VAR_13 = FUNC_1(VAR_6);
 unsigned long VAR_14 = FUNC_2(VAR_13);
 bool VAR_15 = 0;

 VAR_12 = (VAR_6->vm_flags & (VAR_3 | VAR_2)) == VAR_2;

 for (VAR_11 = VAR_6->vm_start; VAR_11 < VAR_6->vm_end; VAR_11 += VAR_14) {
  VAR_7 = FUNC_5(VAR_5, VAR_11);
  if (!VAR_7)
   continue;
  VAR_8 = FUNC_3(VAR_4, VAR_11, VAR_14, &VAR_15);
  if (!VAR_8)
   goto nomem;


  if (VAR_15)
   continue;

  FUNC_11(&VAR_4->page_table_lock);
  FUNC_12(&VAR_5->page_table_lock, VAR_1);
  if (!FUNC_4(FUNC_6(VAR_7))) {
   if (VAR_12)
    FUNC_7(VAR_5, VAR_11, VAR_7);
   VAR_9 = FUNC_6(VAR_7);
   VAR_10 = FUNC_9(VAR_9);
   FUNC_0(VAR_10);
   FUNC_8(VAR_10);
   FUNC_10(VAR_4, VAR_11, VAR_8, VAR_9);
  }
  FUNC_13(&VAR_5->page_table_lock);
  FUNC_13(&VAR_4->page_table_lock);
 }
 return 0;

nomem:
 return -VAR_0;
}
