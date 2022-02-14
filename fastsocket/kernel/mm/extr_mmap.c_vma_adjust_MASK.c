
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_flags; scalar_t__ vm_truncate_count; long vm_pgoff; struct vm_area_struct* vm_next; struct anon_vma* anon_vma; struct file* vm_file; struct mm_struct* vm_mm; } ;
struct prio_tree_root {int dummy; } ;
struct mm_struct {int map_count; } ;
struct file {struct address_space* f_mapping; } ;
struct anon_vma {int dummy; } ;
struct address_space {int i_mmap_lock; struct prio_tree_root i_mmap; } ;
typedef long pgoff_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mm_struct*,struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*,struct file*,struct address_space*) ;
 int FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*) ;
 scalar_t__ FUNC_5 (struct vm_area_struct*,struct vm_area_struct*) ;
 int FUNC_6 (struct anon_vma*) ;
 int FUNC_7 (struct vm_area_struct*,struct vm_area_struct*) ;
 int FUNC_8 (struct anon_vma*) ;
 int FUNC_9 (struct address_space*) ;
 int FUNC_10 (struct address_space*) ;
 int FUNC_11 (struct file*) ;
 int FUNC_12 (int ,struct vm_area_struct*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct mm_struct*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct mm_struct*) ;
 int VAR_4 ;
 int FUNC_18 (struct vm_area_struct*,unsigned long,unsigned long,long) ;
 int FUNC_19 (struct vm_area_struct*) ;
 int FUNC_20 (struct vm_area_struct*,struct prio_tree_root*) ;
 int FUNC_21 (struct vm_area_struct*,struct prio_tree_root*) ;

int FUNC_22(struct vm_area_struct *VAR_5, unsigned long VAR_6,
 unsigned long VAR_7, pgoff_t VAR_8, struct vm_area_struct *VAR_9)
{
 struct mm_struct *VAR_10 = VAR_5->vm_mm;
 struct vm_area_struct *VAR_11 = VAR_5->vm_next;
 struct vm_area_struct *VAR_12 = ((void*)0);
 struct address_space *VAR_13 = ((void*)0);
 struct prio_tree_root *VAR_14 = ((void*)0);
 struct anon_vma *VAR_15 = ((void*)0);
 struct file *VAR_16 = VAR_5->vm_file;
 long VAR_17 = 0;
 int VAR_18 = 0;

 if (VAR_11 && !VAR_9) {
  struct vm_area_struct *VAR_19 = ((void*)0);

  if (VAR_7 >= VAR_11->vm_end) {




again: VAR_18 = 1 + (VAR_7 > VAR_11->vm_end);
   VAR_7 = VAR_11->vm_end;
   VAR_19 = VAR_11;
   VAR_12 = VAR_5;
  } else if (VAR_7 > VAR_11->vm_start) {




   VAR_17 = (VAR_7 - VAR_11->vm_start) >> VAR_1;
   VAR_19 = VAR_11;
   VAR_12 = VAR_5;
  } else if (VAR_7 < VAR_5->vm_end) {





   VAR_17 = - ((VAR_5->vm_end - VAR_7) >> VAR_1);
   VAR_19 = VAR_5;
   VAR_12 = VAR_11;
  }






  if (VAR_19 && VAR_19->anon_vma && !VAR_12->anon_vma) {
   if (FUNC_5(VAR_12, VAR_19))
    return -VAR_0;
   VAR_12->anon_vma = VAR_19->anon_vma;
  }
 }

 if (VAR_16) {
  VAR_13 = VAR_16->f_mapping;
  if (!(VAR_5->vm_flags & VAR_3))
   VAR_14 = &VAR_13->i_mmap;
  FUNC_15(&VAR_13->i_mmap_lock);
  if (VAR_12 &&
      VAR_5->vm_truncate_count != VAR_11->vm_truncate_count) {




   VAR_12->vm_truncate_count = 0;
  }
  if (VAR_9) {
   VAR_9->vm_truncate_count = VAR_5->vm_truncate_count;






   FUNC_3(VAR_9);
  }
 }

 FUNC_18(VAR_5, VAR_6, VAR_7, VAR_17);







 if (VAR_5->anon_vma && (VAR_9 || VAR_12 || VAR_6 != VAR_5->vm_start)) {
  VAR_15 = VAR_5->anon_vma;
  FUNC_0(VAR_17 && VAR_11->anon_vma &&
     VAR_15 != VAR_11->anon_vma);
 } else if (VAR_17 && VAR_11->anon_vma)
  VAR_15 = VAR_11->anon_vma;
 if (VAR_15)
  FUNC_6(VAR_15);

 if (VAR_14) {
  FUNC_9(VAR_13);
  FUNC_21(VAR_5, VAR_14);
  if (VAR_17)
   FUNC_21(VAR_11, VAR_14);
 }

 VAR_5->vm_start = VAR_6;
 VAR_5->vm_end = VAR_7;
 VAR_5->vm_pgoff = VAR_8;
 if (VAR_17) {
  VAR_11->vm_start += VAR_17 << VAR_1;
  VAR_11->vm_pgoff += VAR_17;
 }

 if (VAR_14) {
  if (VAR_17)
   FUNC_20(VAR_11, VAR_14);
  FUNC_20(VAR_5, VAR_14);
  FUNC_10(VAR_13);
 }

 if (VAR_18) {




  FUNC_4(VAR_10, VAR_11, VAR_5);
  if (VAR_16)
   FUNC_2(VAR_11, VAR_16, VAR_13);
 } else if (VAR_9) {





  FUNC_1(VAR_10, VAR_9);
 }

 if (VAR_15)
  FUNC_8(VAR_15);
 if (VAR_13)
  FUNC_16(&VAR_13->i_mmap_lock);

 if (VAR_18) {
  if (VAR_16) {
   FUNC_11(VAR_16);
   if (VAR_11->vm_flags & VAR_2)
    FUNC_14(VAR_10);
  }
  if (VAR_11->anon_vma)
   FUNC_7(VAR_5, VAR_11);
  VAR_10->map_count--;
  FUNC_13(FUNC_19(VAR_11));
  FUNC_12(VAR_4, VAR_11);





  if (VAR_18 == 2) {
   VAR_11 = VAR_5->vm_next;
   goto again;
  }
 }

 FUNC_17(VAR_10);

 return 0;
}
