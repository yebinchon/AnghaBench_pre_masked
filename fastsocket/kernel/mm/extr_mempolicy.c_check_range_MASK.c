
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct mm_struct {int dummy; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 struct vm_area_struct* FUNC_0 (int) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,int const*,unsigned long,void*) ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,unsigned long) ;
 int FUNC_3 (struct vm_area_struct*) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*) ;

__attribute__((used)) static struct vm_area_struct *
FUNC_5(struct mm_struct *VAR_5, unsigned long VAR_6, unsigned long VAR_7,
  const nodemask_t *VAR_8, unsigned long VAR_9, void *VAR_10)
{
 int VAR_11;
 struct vm_area_struct *VAR_12, *VAR_13, *VAR_14;


 VAR_12 = FUNC_2(VAR_5, VAR_6);
 if (!VAR_12)
  return FUNC_0(-VAR_0);
 VAR_14 = ((void*)0);
 for (VAR_13 = VAR_12; VAR_13 && VAR_13->vm_start < VAR_7; VAR_13 = VAR_13->vm_next) {
  if (!(VAR_9 & VAR_1)) {
   if (!VAR_13->vm_next && VAR_13->vm_end < VAR_7)
    return FUNC_0(-VAR_0);
   if (VAR_14 && VAR_14->vm_end < VAR_13->vm_start)
    return FUNC_0(-VAR_0);
  }
  if (!FUNC_3(VAR_13) &&
      ((VAR_9 & VAR_4) ||
       ((VAR_9 & (VAR_2 | VAR_3)) &&
    FUNC_4(VAR_13)))) {
   unsigned long VAR_15 = VAR_13->vm_end;

   if (VAR_15 > VAR_7)
    VAR_15 = VAR_7;
   if (VAR_13->vm_start > VAR_6)
    VAR_6 = VAR_13->vm_start;
   VAR_11 = FUNC_1(VAR_13, VAR_6, VAR_15, VAR_8,
      VAR_9, VAR_10);
   if (VAR_11) {
    VAR_12 = FUNC_0(VAR_11);
    break;
   }
  }
  VAR_14 = VAR_13;
 }
 return VAR_12;
}
