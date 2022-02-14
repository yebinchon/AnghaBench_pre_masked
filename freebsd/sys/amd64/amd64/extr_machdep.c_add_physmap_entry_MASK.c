
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(uint64_t VAR_3, uint64_t VAR_4, vm_paddr_t *VAR_5,
    int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_9 = *VAR_6;

 if (VAR_4 == 0)
  return (1);







 VAR_8 = VAR_9;
 for (VAR_7 = 0; VAR_7 <= VAR_9; VAR_7 += 2) {
  if (VAR_3 < VAR_5[VAR_7 + 1]) {
   if (VAR_3 + VAR_4 <= VAR_5[VAR_7]) {
    VAR_8 = VAR_7;
    break;
   }
   if (VAR_2 & VAR_1)
    FUNC_0(
      "Overlapping memory regions, ignoring second region\n");
   return (1);
  }
 }


 if (VAR_8 <= VAR_9 && VAR_3 + VAR_4 == VAR_5[VAR_8]) {
  VAR_5[VAR_8] = VAR_3;
  return (1);
 }


 if (VAR_8 > 0 && VAR_3 == VAR_5[VAR_8 - 1]) {
  VAR_5[VAR_8 - 1] += VAR_4;
  return (1);
 }

 VAR_9 += 2;
 *VAR_6 = VAR_9;
 if (VAR_9 == VAR_0) {
  FUNC_0(
  "Too many segments in the physical address map, giving up\n");
  return (0);
 }





 for (VAR_7 = (VAR_9 - 2); VAR_7 > VAR_8; VAR_7 -= 2) {
  VAR_5[VAR_7] = VAR_5[VAR_7 - 2];
  VAR_5[VAR_7 + 1] = VAR_5[VAR_7 - 1];
 }


 VAR_5[VAR_8] = VAR_3;
 VAR_5[VAR_8 + 1] = VAR_3 + VAR_4;
 return (1);
}
