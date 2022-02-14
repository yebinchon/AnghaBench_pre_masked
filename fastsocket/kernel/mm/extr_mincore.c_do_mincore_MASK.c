
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_end; } ;
struct TYPE_2__ {int mm; } ;


 long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct vm_area_struct* FUNC_0 (int ,unsigned long) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*) ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long,unsigned char*) ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long,unsigned char*) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_6(unsigned long VAR_3, unsigned long VAR_4, unsigned char *VAR_5)
{
 struct vm_area_struct *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_0(VAR_2->mm, VAR_3);
 if (!VAR_6 || VAR_3 < VAR_6->vm_start)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_6->vm_end, VAR_3 + (VAR_4 << VAR_1));

 if (FUNC_1(VAR_6)) {
  FUNC_3(VAR_6, VAR_3, VAR_7, VAR_5);
  return (VAR_7 - VAR_3) >> VAR_1;
 }

 VAR_7 = FUNC_5(VAR_3, VAR_7);

 if (FUNC_1(VAR_6))
  FUNC_3(VAR_6, VAR_3, VAR_7, VAR_5);
 else
  FUNC_4(VAR_6, VAR_3, VAR_7, VAR_5);

 return (VAR_7 - VAR_3) >> VAR_1;
}
