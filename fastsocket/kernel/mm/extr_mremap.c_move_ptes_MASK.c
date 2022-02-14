
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_page_prot; scalar_t__ vm_truncate_count; TYPE_1__* vm_file; struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
struct address_space {int i_mmap_lock; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;
struct TYPE_2__ {struct address_space* f_mapping; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,unsigned long,unsigned long) ;
 int * FUNC_3 (struct mm_struct*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (struct mm_struct*,int *,unsigned long,int **) ;
 int * FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_10 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct vm_area_struct *VAR_2, pmd_t *VAR_3,
  unsigned long VAR_4, unsigned long VAR_5,
  struct vm_area_struct *VAR_6, pmd_t *VAR_7,
  unsigned long VAR_8)
{
 struct address_space *VAR_9 = ((void*)0);
 struct mm_struct *VAR_10 = VAR_2->vm_mm;
 pte_t *VAR_11, *VAR_12, VAR_13;
 spinlock_t *VAR_14, *VAR_15;

 if (VAR_2->vm_file) {






  VAR_9 = VAR_2->vm_file->f_mapping;
  FUNC_11(&VAR_9->i_mmap_lock);
  VAR_6->vm_truncate_count = 0;
 }





 VAR_11 = FUNC_5(VAR_10, VAR_3, VAR_4, &VAR_14);
  VAR_12 = FUNC_6(VAR_7, VAR_8);
 VAR_15 = FUNC_3(VAR_10, VAR_7);
 if (VAR_15 != VAR_14)
  FUNC_12(VAR_15, VAR_1);
 FUNC_0();

 for (; VAR_4 < VAR_5; VAR_11++, VAR_4 += VAR_0,
       VAR_12++, VAR_8 += VAR_0) {
  if (FUNC_4(*VAR_11))
   continue;
  VAR_13 = FUNC_9(VAR_10, VAR_4, VAR_11);
  VAR_13 = FUNC_2(VAR_13, VAR_6->vm_page_prot, VAR_4, VAR_8);
  FUNC_10(VAR_10, VAR_8, VAR_12, VAR_13);
 }

 FUNC_1();
 if (VAR_15 != VAR_14)
  FUNC_13(VAR_15);
 FUNC_7(VAR_12 - 1);
 FUNC_8(VAR_11 - 1, VAR_14);
 if (VAR_9)
  FUNC_13(&VAR_9->i_mmap_lock);
}
