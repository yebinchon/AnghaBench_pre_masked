
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct hstate {unsigned long order; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct hstate* FUNC_0 (struct vm_area_struct*) ;
 int FUNC_1 (struct vm_area_struct*) ;

unsigned long FUNC_2(struct vm_area_struct *VAR_2)
{
 struct hstate *VAR_3;

 if (!FUNC_1(VAR_2))
  return VAR_1;

 VAR_3 = FUNC_0(VAR_2);

 return 1UL << (VAR_3->order + VAR_0);
}
