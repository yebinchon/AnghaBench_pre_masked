
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_flags; unsigned long vm_end; unsigned long vm_start; int vm_file; int vm_page_prot; int anon_vma; scalar_t__ vm_pgoff; struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_2__ {int mm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,int ,int) ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long,int ) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_5 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_6 (struct vm_area_struct*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (unsigned long) ;
 int FUNC_9 (struct mm_struct*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (struct mm_struct*,unsigned long,int ,long) ;
 int FUNC_12 (unsigned long) ;
 struct vm_area_struct* FUNC_13 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ,int ,scalar_t__,int ) ;
 int FUNC_14 (struct vm_area_struct*) ;
 scalar_t__ FUNC_15 (struct vm_area_struct*) ;

int
FUNC_16(struct vm_area_struct *VAR_9, struct vm_area_struct **VAR_10,
 unsigned long VAR_11, unsigned long VAR_12, unsigned long VAR_13)
{
 struct mm_struct *VAR_14 = VAR_9->vm_mm;
 unsigned long VAR_15 = VAR_9->vm_flags;
 long VAR_16 = (VAR_12 - VAR_11) >> VAR_1;
 unsigned long VAR_17 = 0;
 unsigned long VAR_18;
 pgoff_t VAR_19;
 int VAR_20;
 int VAR_21 = 0;

 VAR_18 = VAR_9->vm_end;
 if (VAR_13 == VAR_15) {
  *VAR_10 = VAR_9;
  return 0;
 }







 if (VAR_13 & VAR_7) {
  if (!(VAR_15 & (VAR_2|VAR_7|VAR_4|
      VAR_6|VAR_5))) {
   VAR_17 = VAR_16;
   if (FUNC_8(VAR_17))
    return -VAR_0;
   VAR_13 |= VAR_2;
  }
 }




 VAR_19 = VAR_9->vm_pgoff + ((VAR_11 - VAR_9->vm_start) >> VAR_1);
 *VAR_10 = FUNC_13(VAR_14, *VAR_10, VAR_11, VAR_12, VAR_13,
   VAR_9->anon_vma, VAR_9->vm_file, VAR_19, FUNC_14(VAR_9));
 if (*VAR_10) {
  VAR_9 = *VAR_10;
  goto success;
 }

 *VAR_10 = VAR_9;

 if (VAR_11 != VAR_9->vm_start) {
  VAR_20 = FUNC_9(VAR_14, VAR_9, VAR_11, 1);
  if (VAR_20)
   goto fail;
 }

 if (VAR_12 != VAR_9->vm_end) {
  VAR_20 = FUNC_9(VAR_14, VAR_9, VAR_12, 0);
  if (VAR_20)
   goto fail;
 }

success:




 VAR_9->vm_flags = VAR_13;
 VAR_9->vm_page_prot = FUNC_7(VAR_9->vm_page_prot,
       FUNC_10(VAR_13));

 if (FUNC_15(VAR_9)) {
  VAR_9->vm_page_prot = FUNC_10(VAR_13 & ~VAR_6);
  VAR_21 = 1;
 }

 if (VAR_15 & VAR_3)
  FUNC_0(VAR_8->mm, VAR_18);

 FUNC_5(VAR_14, VAR_11, VAR_12);
 if (FUNC_3(VAR_9))
  FUNC_2(VAR_9, VAR_11, VAR_12, VAR_9->vm_page_prot);
 else
  FUNC_1(VAR_9, VAR_11, VAR_12, VAR_9->vm_page_prot, VAR_21);
 FUNC_4(VAR_14, VAR_11, VAR_12);
 FUNC_11(VAR_14, VAR_15, VAR_9->vm_file, -VAR_16);
 FUNC_11(VAR_14, VAR_13, VAR_9->vm_file, VAR_16);
 FUNC_6(VAR_9);
 return 0;

fail:
 FUNC_12(VAR_17);
 return VAR_20;
}
