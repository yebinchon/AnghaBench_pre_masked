
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_flags; scalar_t__ vm_pgoff; } ;
struct page {int dummy; } ;
struct kvm {int dummy; } ;
typedef scalar_t__ pfn_t ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int *) ;
 struct page* VAR_3 ;
 struct vm_area_struct* FUNC_3 (TYPE_1__*,unsigned long) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (unsigned long,int,int,struct page**) ;
 struct page* VAR_4 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;

pfn_t FUNC_11(struct kvm *VAR_5, unsigned long VAR_6)
{
 struct page *VAR_7[1];
 int VAR_8;
 pfn_t VAR_9;

 FUNC_7();

 VAR_8 = FUNC_5(VAR_6, 1, 1, VAR_7);

 if (FUNC_9(VAR_8 != 1)) {
  struct vm_area_struct *VAR_10;

  FUNC_2(&VAR_2->mm->mmap_sem);
  if (FUNC_1(VAR_6)) {
   FUNC_10(&VAR_2->mm->mmap_sem);
   FUNC_4(VAR_4);
   return FUNC_8(VAR_4);
  }

  VAR_10 = FUNC_3(VAR_2->mm, VAR_6);

  if (VAR_10 == ((void*)0) || VAR_6 < VAR_10->vm_start ||
      !(VAR_10->vm_flags & VAR_1)) {
   FUNC_10(&VAR_2->mm->mmap_sem);
   FUNC_4(VAR_3);
   return FUNC_8(VAR_3);
  }

  VAR_9 = ((VAR_6 - VAR_10->vm_start) >> VAR_0) + VAR_10->vm_pgoff;
  FUNC_10(&VAR_2->mm->mmap_sem);
  FUNC_0(!FUNC_6(VAR_9));
 } else
  VAR_9 = FUNC_8(VAR_7[0]);

 return VAR_9;
}
