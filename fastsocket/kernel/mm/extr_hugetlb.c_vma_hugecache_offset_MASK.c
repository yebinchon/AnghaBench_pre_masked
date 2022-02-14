
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_pgoff; } ;
struct hstate {int dummy; } ;
typedef unsigned long pgoff_t ;


 unsigned long FUNC_0 (struct hstate*) ;
 unsigned long FUNC_1 (struct hstate*) ;

__attribute__((used)) static pgoff_t FUNC_2(struct hstate *VAR_0,
   struct vm_area_struct *VAR_1, unsigned long VAR_2)
{
 return ((VAR_2 - VAR_1->vm_start) >> FUNC_1(VAR_0)) +
   (VAR_1->vm_pgoff >> FUNC_0(VAR_0));
}
