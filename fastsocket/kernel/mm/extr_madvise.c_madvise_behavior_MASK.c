
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_flags; unsigned long vm_start; unsigned long vm_end; int vm_file; int anon_vma; scalar_t__ vm_pgoff; struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,int,unsigned long*) ;
 int FUNC_2 (struct mm_struct*,struct vm_area_struct*,unsigned long,int) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ,int ,scalar_t__,int ) ;
 int FUNC_4 (struct vm_area_struct*) ;

__attribute__((used)) static long FUNC_5(struct vm_area_struct * VAR_9,
       struct vm_area_struct **VAR_10,
       unsigned long VAR_11, unsigned long VAR_12, int VAR_13)
{
 struct mm_struct * VAR_14 = VAR_9->vm_mm;
 int VAR_15 = 0;
 pgoff_t VAR_16;
 unsigned long VAR_17 = VAR_9->vm_flags;

 switch (VAR_13) {
 case 131:
  VAR_17 = VAR_17 & ~VAR_7 & ~VAR_8;
  break;
 case 129:
  VAR_17 = (VAR_17 & ~VAR_7) | VAR_8;
  break;
 case 130:
  VAR_17 = (VAR_17 & ~VAR_8) | VAR_7;
  break;
 case 135:
  VAR_17 |= VAR_4;
  break;
 case 137:
  if (VAR_9->vm_flags & VAR_5) {
   VAR_15 = -VAR_1;
   goto out;
  }
  VAR_17 &= ~VAR_4;
  break;
 case 136:
  VAR_17 |= VAR_6;
  break;
 case 138:
  VAR_17 &= ~VAR_6;
  break;
 case 133:
 case 128:
  VAR_15 = FUNC_1(VAR_9, VAR_11, VAR_12, VAR_13, &VAR_17);
  if (VAR_15)
   goto out;
  break;
 case 134:
 case 132:
  VAR_15 = FUNC_0(&VAR_17, VAR_13);
  if (VAR_15)
   goto out;
  break;
 }

 if (VAR_17 == VAR_9->vm_flags) {
  *VAR_10 = VAR_9;
  goto out;
 }

 VAR_16 = VAR_9->vm_pgoff + ((VAR_11 - VAR_9->vm_start) >> VAR_3);
 *VAR_10 = FUNC_3(VAR_14, *VAR_10, VAR_11, VAR_12, VAR_17, VAR_9->anon_vma,
    VAR_9->vm_file, VAR_16, FUNC_4(VAR_9));
 if (*VAR_10) {
  VAR_9 = *VAR_10;
  goto success;
 }

 *VAR_10 = VAR_9;

 if (VAR_11 != VAR_9->vm_start) {
  VAR_15 = FUNC_2(VAR_14, VAR_9, VAR_11, 1);
  if (VAR_15)
   goto out;
 }

 if (VAR_12 != VAR_9->vm_end) {
  VAR_15 = FUNC_2(VAR_14, VAR_9, VAR_12, 0);
  if (VAR_15)
   goto out;
 }

success:



 VAR_9->vm_flags = VAR_17;

out:
 if (VAR_15 == -VAR_2)
  VAR_15 = -VAR_0;
 return VAR_15;
}
