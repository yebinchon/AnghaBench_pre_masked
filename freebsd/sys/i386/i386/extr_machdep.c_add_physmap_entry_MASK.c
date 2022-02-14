
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int uint64_t ;
typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int
FUNC_1(uint64_t VAR_6, uint64_t VAR_7, vm_paddr_t *VAR_8,
    int *VAR_9)
{
 uint64_t VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_14 = *VAR_9;

 if (VAR_7 == 0)
  return (1);

 VAR_10 = 0x100000000;
 if (VAR_5 && VAR_3)
  VAR_10 = VAR_2 ? -1ULL : 0x600000000;
 if (VAR_6 >= VAR_10) {
  FUNC_0("%uK of memory above %uGB ignored, pae %d "
      "above4g_allow %d above24g_allow %d\n",
      (u_int)(VAR_7 / 1024), (u_int)(VAR_10 >> 30), VAR_5,
      VAR_3, VAR_2);
  return (1);
 }
 if (VAR_6 + VAR_7 >= VAR_10) {
  VAR_11 = VAR_6 + VAR_7 - VAR_10;
  VAR_7 -= VAR_11;
  FUNC_0("%uK of memory above %uGB ignored, pae %d "
      "above4g_allow %d above24g_allow %d\n",
      (u_int)(VAR_11 / 1024), (u_int)(VAR_10 >> 30), VAR_5,
      VAR_3, VAR_2);
 }





 VAR_13 = VAR_14 + 2;
 for (VAR_12 = 0; VAR_12 <= VAR_14; VAR_12 += 2) {
  if (VAR_6 < VAR_8[VAR_12 + 1]) {
   if (VAR_6 + VAR_7 <= VAR_8[VAR_12]) {
    VAR_13 = VAR_12;
    break;
   }
   if (VAR_4 & VAR_1)
    FUNC_0(
      "Overlapping memory regions, ignoring second region\n");
   return (1);
  }
 }


 if (VAR_13 <= VAR_14 && VAR_6 + VAR_7 == VAR_8[VAR_13]) {
  VAR_8[VAR_13] = VAR_6;
  return (1);
 }


 if (VAR_13 > 0 && VAR_6 == VAR_8[VAR_13 - 1]) {
  VAR_8[VAR_13 - 1] += VAR_7;
  return (1);
 }

 VAR_14 += 2;
 *VAR_9 = VAR_14;
 if (VAR_14 == VAR_0) {
  FUNC_0(
  "Too many segments in the physical address map, giving up\n");
  return (0);
 }





 for (VAR_12 = VAR_14; VAR_12 > VAR_13; VAR_12 -= 2) {
  VAR_8[VAR_12] = VAR_8[VAR_12 - 2];
  VAR_8[VAR_12 + 1] = VAR_8[VAR_12 - 1];
 }


 VAR_8[VAR_13] = VAR_6;
 VAR_8[VAR_13 + 1] = VAR_6 + VAR_7;
 return (1);
}
