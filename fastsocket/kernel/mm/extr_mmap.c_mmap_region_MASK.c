
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned int vm_flags; unsigned long vm_pgoff; struct file* vm_file; void* vm_page_prot; int anon_vma_chain; struct mm_struct* vm_mm; } ;
struct rb_node {int dummy; } ;
struct mm_struct {unsigned long total_vm; unsigned long locked_vm; } ;
struct inode {int i_writecount; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {TYPE_3__* f_op; TYPE_2__ f_path; } ;
struct TYPE_8__ {struct mm_struct* mm; } ;
struct TYPE_7__ {int (* mmap ) (struct file*,struct vm_area_struct*) ;} ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 scalar_t__ FUNC_1 (struct file*,unsigned int) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (int *) ;
 TYPE_4__* VAR_16 ;
 int FUNC_4 (struct file*) ;
 scalar_t__ FUNC_5 (struct mm_struct*,unsigned long,unsigned long) ;
 struct vm_area_struct* FUNC_6 (struct mm_struct*,unsigned long,struct vm_area_struct**,struct rb_node***,struct rb_node**) ;
 int FUNC_7 (struct file*) ;
 int FUNC_8 (struct file*) ;
 scalar_t__ FUNC_9 (struct file*) ;
 int FUNC_10 (int ,struct vm_area_struct*) ;
 struct vm_area_struct* FUNC_11 (int ,int ) ;
 int FUNC_12 (unsigned long,unsigned long) ;
 int FUNC_13 (struct mm_struct*,unsigned long) ;
 long FUNC_14 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_15 (struct vm_area_struct*) ;
 scalar_t__ FUNC_16 (unsigned long) ;
 int FUNC_17 (struct vm_area_struct*) ;
 int FUNC_18 (struct file*,struct vm_area_struct*) ;
 scalar_t__ VAR_17 ;
 int FUNC_19 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,unsigned long,unsigned long) ;
 int VAR_18 ;
 void* FUNC_20 (unsigned int) ;
 int FUNC_21 (struct mm_struct*,unsigned int,struct file*,unsigned long) ;
 int FUNC_22 (unsigned long) ;
 int FUNC_23 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,struct rb_node**,struct rb_node*) ;
 struct vm_area_struct* FUNC_24 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long,unsigned int,int *,struct file*,unsigned long,int *) ;
 scalar_t__ FUNC_25 (struct vm_area_struct*) ;

unsigned long FUNC_26(struct file *VAR_19, unsigned long VAR_20,
     unsigned long VAR_21, unsigned long VAR_22,
     unsigned int VAR_23, unsigned long VAR_24)
{
 struct mm_struct *VAR_25 = VAR_16->mm;
 struct vm_area_struct *VAR_26, *VAR_27;
 int VAR_28 = 0;
 int VAR_29;
 struct rb_node **VAR_30, *VAR_31;
 unsigned long VAR_32 = 0;
 struct inode *VAR_33 = VAR_19 ? VAR_19->f_path.dentry->d_inode : ((void*)0);


 VAR_29 = -VAR_1;
munmap_back:
 VAR_26 = FUNC_6(VAR_25, VAR_20, &VAR_27, &VAR_30, &VAR_31);
 if (VAR_26 && VAR_26->vm_start < VAR_20 + VAR_21) {
  if (FUNC_5(VAR_25, VAR_20, VAR_21))
   return -VAR_1;
  goto munmap_back;
 }


 if (!FUNC_13(VAR_25, VAR_21 >> VAR_7))
  return -VAR_1;





 if ((VAR_22 & VAR_4)) {

  if (VAR_17 != VAR_6)
   VAR_23 |= VAR_14;


  if (VAR_19 && FUNC_9(VAR_19))
   VAR_23 |= VAR_14;
 }




 if (FUNC_1(VAR_19, VAR_23)) {
  VAR_32 = VAR_21 >> VAR_7;
  if (FUNC_16(VAR_32))
   return -VAR_1;
  VAR_23 |= VAR_8;
 }




 VAR_26 = FUNC_24(VAR_25, VAR_27, VAR_20, VAR_20 + VAR_21, VAR_23, ((void*)0), VAR_19, VAR_24, ((void*)0));
 if (VAR_26)
  goto out;






 VAR_26 = FUNC_11(VAR_18, VAR_2);
 if (!VAR_26) {
  VAR_29 = -VAR_1;
  goto unacct_error;
 }

 VAR_26->vm_mm = VAR_25;
 VAR_26->vm_start = VAR_20;
 VAR_26->vm_end = VAR_20 + VAR_21;
 VAR_26->vm_flags = VAR_23;
 VAR_26->vm_page_prot = FUNC_20(VAR_23);
 VAR_26->vm_pgoff = VAR_24;
 FUNC_0(&VAR_26->anon_vma_chain);

 if (VAR_19) {
  VAR_29 = -VAR_0;
  if (VAR_23 & (VAR_11|VAR_12))
   goto free_vma;
  if (VAR_23 & VAR_9) {
   VAR_29 = FUNC_4(VAR_19);
   if (VAR_29)
    goto free_vma;
   VAR_28 = 1;
  }
  VAR_26->vm_file = VAR_19;
  FUNC_8(VAR_19);
  VAR_29 = VAR_19->f_op->mmap(VAR_19, VAR_26);
  if (VAR_29)
   goto unmap_and_free_vma;
  if (VAR_23 & VAR_10)
   FUNC_2(VAR_25);






  VAR_20 = VAR_26->vm_start;
  VAR_24 = VAR_26->vm_pgoff;
  VAR_23 = VAR_26->vm_flags;
 } else if (VAR_23 & VAR_15) {
  VAR_29 = FUNC_17(VAR_26);
  if (VAR_29)
   goto free_vma;
 }

 if (FUNC_25(VAR_26))
  VAR_26->vm_page_prot = FUNC_20(VAR_23 & ~VAR_15);

 FUNC_23(VAR_25, VAR_26, VAR_27, VAR_30, VAR_31);
 VAR_19 = VAR_26->vm_file;


 if (VAR_28)
  FUNC_3(&VAR_33->i_writecount);
out:
 FUNC_15(VAR_26);

 VAR_25->total_vm += VAR_21 >> VAR_7;
 FUNC_21(VAR_25, VAR_23, VAR_19, VAR_21 >> VAR_7);
 if (VAR_23 & VAR_13) {



  long VAR_34 = FUNC_14(VAR_26, VAR_20, VAR_20 + VAR_21);
  if (VAR_34 < 0)
   return VAR_34;
  VAR_25->locked_vm += (VAR_21 >> VAR_7) - VAR_34;
 } else if ((VAR_22 & VAR_5) && !(VAR_22 & VAR_3))
  FUNC_12(VAR_20, VAR_20 + VAR_21);
 return VAR_20;

unmap_and_free_vma:
 if (VAR_28)
  FUNC_3(&VAR_33->i_writecount);
 VAR_26->vm_file = ((void*)0);
 FUNC_7(VAR_19);


 FUNC_19(VAR_25, VAR_26, VAR_27, VAR_26->vm_start, VAR_26->vm_end);
 VAR_32 = 0;
free_vma:
 FUNC_10(VAR_18, VAR_26);
unacct_error:
 if (VAR_32)
  FUNC_22(VAR_32);
 return VAR_29;
}
