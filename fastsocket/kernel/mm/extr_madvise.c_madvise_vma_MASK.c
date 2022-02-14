
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;





 long FUNC_0 (struct vm_area_struct*,struct vm_area_struct**,unsigned long,unsigned long,int) ;
 long FUNC_1 (struct vm_area_struct*,struct vm_area_struct**,unsigned long,unsigned long) ;
 long FUNC_2 (struct vm_area_struct*,struct vm_area_struct**,unsigned long,unsigned long) ;
 long FUNC_3 (struct vm_area_struct*,struct vm_area_struct**,unsigned long,unsigned long) ;

__attribute__((used)) static long
FUNC_4(struct vm_area_struct *VAR_0, struct vm_area_struct **VAR_1,
  unsigned long VAR_2, unsigned long VAR_3, int VAR_4)
{
 switch (VAR_4) {
 case 129:
  return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 case 128:
  return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 case 130:
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 default:
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 }
}
