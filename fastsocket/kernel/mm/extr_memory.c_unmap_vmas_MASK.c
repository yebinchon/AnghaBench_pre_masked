
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zap_details {int * i_mmap_lock; } ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; struct mm_struct* vm_mm; scalar_t__ vm_file; struct vm_area_struct* vm_next; } ;
struct mmu_gather {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (struct vm_area_struct*) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 unsigned long FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_8 (struct mm_struct*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_9 () ;
 unsigned long FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (struct mmu_gather*,unsigned long,unsigned long) ;
 struct mmu_gather* FUNC_13 (struct mm_struct*,int) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct vm_area_struct*,unsigned long,unsigned long,int *) ;
 unsigned long FUNC_16 (struct mmu_gather*,struct vm_area_struct*,unsigned long,unsigned long,long*,struct zap_details*) ;
 int FUNC_17 (struct vm_area_struct*,int ,int ) ;

unsigned long FUNC_18(struct mmu_gather **VAR_3,
  struct vm_area_struct *VAR_4, unsigned long VAR_5,
  unsigned long VAR_6, unsigned long *VAR_7,
  struct zap_details *VAR_8, int VAR_9)
{
 long VAR_10 = VAR_2;
 unsigned long VAR_11 = 0;
 int VAR_12 = 0;
 unsigned long VAR_13 = VAR_5;
 spinlock_t *VAR_14 = VAR_8? VAR_8->i_mmap_lock: ((void*)0);
 struct mm_struct *VAR_15 = VAR_4->vm_mm;





 FUNC_8(VAR_15, VAR_5, VAR_6);
 *VAR_3 = FUNC_13(VAR_15, VAR_9);
 for ( ; VAR_4 && VAR_4->vm_start < VAR_6; VAR_4 = VAR_4->vm_next) {
  unsigned long VAR_16;

  VAR_13 = FUNC_5(VAR_4->vm_start, VAR_5);
  if (VAR_13 >= VAR_4->vm_end)
   continue;
  VAR_16 = FUNC_6(VAR_4->vm_end, VAR_6);
  if (VAR_16 <= VAR_4->vm_start)
   continue;

  if (VAR_4->vm_flags & VAR_1)
   *VAR_7 += (VAR_16 - VAR_13) >> VAR_0;

  if (FUNC_14(FUNC_3(VAR_4)))
   FUNC_17(VAR_4, 0, 0);

  while (VAR_13 != VAR_16) {
   if (!VAR_12) {
    VAR_11 = VAR_13;
    VAR_12 = 1;
   }

   if (FUNC_14(FUNC_4(VAR_4))) {
    if (VAR_4->vm_file) {
     FUNC_15(VAR_4, VAR_13, VAR_16, ((void*)0));
     VAR_10 -= (VAR_16 - VAR_13) /
     FUNC_10(FUNC_2(VAR_4));
    }

    VAR_13 = VAR_16;
   } else
    VAR_13 = FUNC_16(*VAR_3, VAR_4,
      VAR_13, VAR_16, &VAR_10, VAR_8);

   if (VAR_10 > 0) {
    FUNC_0(VAR_13 != VAR_16);
    break;
   }

   FUNC_12(*VAR_3, VAR_11, VAR_13);

   if (FUNC_9() ||
    (VAR_14 && FUNC_11(VAR_14))) {
    if (VAR_14) {
     *VAR_3 = ((void*)0);
     goto out;
    }
    FUNC_1();
   }

   *VAR_3 = FUNC_13(VAR_4->vm_mm, VAR_9);
   VAR_12 = 0;
   VAR_10 = VAR_2;
  }
 }
out:
 FUNC_7(VAR_15, VAR_5, VAR_6);
 return VAR_13;
}
