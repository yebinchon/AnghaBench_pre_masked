
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static int
FUNC_1(vm_paddr_t *VAR_1, vm_paddr_t VAR_2, vm_paddr_t VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4 += 2) {
  if (VAR_2 > VAR_0[VAR_4 + 1])
   continue;
  if (VAR_2 < VAR_0[VAR_4]) {
   VAR_1[VAR_5++] = VAR_2;
   if (VAR_3 < VAR_0[VAR_4])
    VAR_1[VAR_5++] = VAR_3;
   else
    VAR_1[VAR_5++] = VAR_0[VAR_4];
  }
  VAR_2 = VAR_0[VAR_4 + 1];
  if (VAR_3 <= VAR_2)
   break;
 }
 if (VAR_2 < VAR_3) {
  VAR_1[VAR_5++] = VAR_2;
  VAR_1[VAR_5++] = VAR_3;
 }
 return (VAR_5);
}
