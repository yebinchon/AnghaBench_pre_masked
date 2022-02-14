
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_paddr_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int
FUNC_1(vm_page_t *VAR_1, size_t VAR_2, size_t VAR_3)
{
 vm_paddr_t VAR_4, VAR_5;
 int VAR_6, VAR_7;

 if (VAR_3 == 0)
  return (0);

 VAR_3 += VAR_2;
 VAR_7 = 1;
 VAR_4 = FUNC_0(VAR_1[0]);
 for (VAR_6 = 1; VAR_3 > VAR_0; VAR_3 -= VAR_0, VAR_6++) {
  VAR_5 = FUNC_0(VAR_1[VAR_6]);
  if (VAR_4 + VAR_0 != VAR_5)
   VAR_7++;
  VAR_4 = VAR_5;
 }
 return (VAR_7);
}
