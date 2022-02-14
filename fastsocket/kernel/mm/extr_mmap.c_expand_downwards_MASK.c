
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (int *,int ,int ,int ,unsigned long,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct vm_area_struct*) ;
 int FUNC_7 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_8(struct vm_area_struct *VAR_3,
       unsigned long VAR_4)
{
 int VAR_5;





 if (FUNC_5(FUNC_1(VAR_3)))
  return -VAR_0;

 VAR_4 &= VAR_1;
 VAR_5 = FUNC_4(((void*)0), 0, 0, 0, VAR_4, 1);
 if (VAR_5)
  return VAR_5;

 FUNC_6(VAR_3);
 if (VAR_4 < VAR_3->vm_start) {
  unsigned long VAR_6, VAR_7;

  VAR_6 = VAR_3->vm_end - VAR_4;
  VAR_7 = (VAR_3->vm_start - VAR_4) >> VAR_2;

  VAR_5 = -VAR_0;
  if (VAR_7 <= VAR_3->vm_pgoff) {
   VAR_5 = FUNC_0(VAR_3, VAR_6, VAR_7);
   if (!VAR_5) {
    VAR_3->vm_start = VAR_4;
    VAR_3->vm_pgoff -= VAR_7;
    FUNC_3(VAR_3);
   }
  }
 }
 FUNC_7(VAR_3);
 FUNC_2(VAR_3);
 return VAR_5;
}
