
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,unsigned int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int VAR_3 ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

void
FUNC_7(vm_paddr_t *VAR_4, unsigned int *VAR_5)
{
 vm_paddr_t VAR_6, VAR_7;
 unsigned int VAR_8;
 bool VAR_9;

 FUNC_0(VAR_4, VAR_5);
 VAR_9 = 0;
 for (VAR_8 = *VAR_5; VAR_8 <= *VAR_5; VAR_8 -= 2) {




  VAR_6 = FUNC_5(VAR_4[VAR_8]);
  VAR_7 = VAR_6 + VAR_0;
  if (VAR_6 < VAR_7 && VAR_7 <= VAR_4[VAR_8 + 1] &&
      FUNC_2(VAR_6, VAR_7) &&
      !FUNC_1(VAR_6) && !FUNC_1(VAR_7 - 1)) {
   VAR_9 = 1;
   VAR_4[VAR_8] = VAR_7;
   break;
  }





  VAR_7 = FUNC_6(VAR_4[VAR_8 + 1]);
  VAR_6 = VAR_7 - VAR_0;
  if (VAR_6 < VAR_7 && VAR_6 >= VAR_4[VAR_8] &&
      FUNC_2(VAR_6, VAR_7) &&
      !FUNC_1(VAR_6) && !FUNC_1(VAR_7 - 1)) {
   VAR_9 = 1;
   VAR_4[VAR_8 + 1] = VAR_6;
   break;
  }
 }
 if (VAR_9) {
  VAR_3 = VAR_6;
  if (VAR_4[VAR_8] == VAR_4[VAR_8 + 1] && *VAR_5 != 0) {
   FUNC_3(&VAR_4[VAR_8], &VAR_4[VAR_8 + 2],
       sizeof(*VAR_4) * (*VAR_5 - VAR_8 + 2));
   *VAR_5 -= 2;
  }
 } else {
  VAR_3 = FUNC_6(VAR_1) - VAR_0;
  if (VAR_2)
   FUNC_4(
"Cannot find enough space for the initial AP page tables, placing them at %#x",
       VAR_3);
 }
}
