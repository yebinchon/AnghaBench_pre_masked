
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int flags; int size; } ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vm_struct* FUNC_0 (void*) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,struct page*) ;
 struct page* FUNC_2 (void*) ;

int FUNC_3(struct vm_area_struct *VAR_5, void *VAR_6,
      unsigned long VAR_7)
{
 struct vm_struct *VAR_8;
 unsigned long VAR_9 = VAR_5->vm_start;
 unsigned long VAR_10 = VAR_5->vm_end - VAR_5->vm_start;

 if ((VAR_2-1) & (unsigned long)VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_6);
 if (!VAR_8)
  return -VAR_0;

 if (!(VAR_8->flags & VAR_4))
  return -VAR_0;

 if (VAR_10 + (VAR_7 << VAR_1) > VAR_8->size - VAR_2)
  return -VAR_0;

 VAR_6 += VAR_7 << VAR_1;
 do {
  struct page *VAR_11 = FUNC_2(VAR_6);
  int VAR_12;

  VAR_12 = FUNC_1(VAR_5, VAR_9, VAR_11);
  if (VAR_12)
   return VAR_12;

  VAR_9 += VAR_2;
  VAR_6 += VAR_2;
  VAR_10 -= VAR_2;
 } while (VAR_10 > 0);


 VAR_5->vm_flags |= VAR_3;

 return 0;
}
