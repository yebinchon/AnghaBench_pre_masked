
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct task_struct {int dummy; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 struct vm_area_struct* FUNC_0 (struct mm_struct*,unsigned long) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (unsigned long) ;

int FUNC_3(struct task_struct *VAR_10, struct mm_struct *VAR_11,
       unsigned long VAR_12, int VAR_13, unsigned int VAR_14,
       struct page **VAR_15, struct vm_area_struct **VAR_16)
{
 struct vm_area_struct *VAR_17;
 unsigned long VAR_18;
 int VAR_19;




 VAR_18 = (VAR_14 & VAR_2) ?
   (VAR_9 | VAR_6) : (VAR_8 | VAR_5);
 VAR_18 &= (VAR_14 & VAR_1) ?
   (VAR_5 | VAR_6) : (VAR_8 | VAR_9);

 for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
  VAR_17 = FUNC_0(VAR_11, VAR_12);
  if (!VAR_17)
   goto finish_or_fault;


  if ((VAR_17->vm_flags & (VAR_4 | VAR_7)) ||
      !(VAR_18 & VAR_17->vm_flags))
   goto finish_or_fault;

  if (VAR_15) {
   VAR_15[VAR_19] = FUNC_2(VAR_12);
   if (VAR_15[VAR_19])
    FUNC_1(VAR_15[VAR_19]);
  }
  if (VAR_16)
   VAR_16[VAR_19] = VAR_17;
  VAR_12 += VAR_3;
 }

 return VAR_19;

finish_or_fault:
 return VAR_19 ? : -VAR_0;
}
