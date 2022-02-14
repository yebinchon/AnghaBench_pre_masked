
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int vm_flags; scalar_t__ vm_file; TYPE_1__* vm_ops; int anon_vma_chain; } ;
struct mm_struct {int dummy; } ;
struct mempolicy {int dummy; } ;
struct TYPE_2__ {int (* close ) (struct vm_area_struct*) ;int (* open ) (struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mempolicy*) ;
 unsigned long VAR_3 ;
 int FUNC_2 (struct mempolicy*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct mm_struct*) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,struct vm_area_struct*) ;
 int FUNC_5 (struct mm_struct*,unsigned long) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct vm_area_struct*) ;
 unsigned long FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct vm_area_struct*) ;
 struct vm_area_struct* FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,struct vm_area_struct*) ;
 struct mempolicy* FUNC_13 (int ) ;
 int FUNC_14 (struct mempolicy*) ;
 int FUNC_15 (struct mm_struct*) ;
 int FUNC_16 (struct vm_area_struct*) ;
 int FUNC_17 (struct vm_area_struct*) ;
 int FUNC_18 (struct vm_area_struct*) ;
 int VAR_6 ;
 int FUNC_19 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,struct vm_area_struct*) ;
 int FUNC_20 (struct vm_area_struct*) ;
 int FUNC_21 (struct vm_area_struct*,struct mempolicy*) ;

__attribute__((used)) static int FUNC_22(struct mm_struct * VAR_7, struct vm_area_struct * VAR_8,
       unsigned long VAR_9, int VAR_10)
{
 struct mempolicy *VAR_11;
 struct vm_area_struct *VAR_12;
 int VAR_13 = -VAR_1;

 if (FUNC_10(VAR_8) && (VAR_9 &
     ~(FUNC_9(FUNC_8(VAR_8)))))
  return -VAR_0;

 VAR_12 = FUNC_11(VAR_6, VAR_2);
 if (!VAR_12)
  goto out_err;


 *VAR_12 = *VAR_8;

 FUNC_0(&VAR_12->anon_vma_chain);

 if (VAR_10)
  VAR_12->vm_end = VAR_9;
 else {
  VAR_12->vm_start = VAR_9;
  VAR_12->vm_pgoff += ((VAR_9 - VAR_8->vm_start) >> VAR_3);
 }

 VAR_11 = FUNC_13(FUNC_20(VAR_8));
 if (FUNC_1(VAR_11)) {
  VAR_13 = FUNC_2(VAR_11);
  goto out_free_vma;
 }
 FUNC_21(VAR_12, VAR_11);

 if (FUNC_4(VAR_12, VAR_8))
  goto out_free_mpol;

 if (VAR_12->vm_file) {
  FUNC_7(VAR_12->vm_file);
  if (VAR_8->vm_flags & VAR_5)
   FUNC_3(VAR_7);
 }

 if (VAR_12->vm_ops && VAR_12->vm_ops->open)
  VAR_12->vm_ops->open(VAR_12);

 if (VAR_10) {
  unsigned long VAR_14;

  VAR_14 = VAR_8->vm_end;
  VAR_13 = FUNC_19(VAR_8, VAR_9, VAR_8->vm_end, VAR_8->vm_pgoff +
   ((VAR_9 - VAR_12->vm_start) >> VAR_3), VAR_12);
  if (!VAR_13 && VAR_8->vm_flags & VAR_4)
   FUNC_5(VAR_7, VAR_14);
 } else
  VAR_13 = FUNC_19(VAR_8, VAR_8->vm_start, VAR_9, VAR_8->vm_pgoff, VAR_12);


 if (!VAR_13)
  return 0;


 if (VAR_12->vm_ops && VAR_12->vm_ops->close)
  VAR_12->vm_ops->close(VAR_12);
 if (VAR_12->vm_file) {
  if (VAR_8->vm_flags & VAR_5)
   FUNC_15(VAR_7);
  FUNC_6(VAR_12->vm_file);
 }
 FUNC_18(VAR_12);
 out_free_mpol:
 FUNC_14(VAR_11);
 out_free_vma:
 FUNC_12(VAR_6, VAR_12);
 out_err:
 return VAR_13;
}
