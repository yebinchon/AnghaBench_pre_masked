
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef size_t vm_offset_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (size_t,int) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 () ;

void
FUNC_10(vm_page_t VAR_3[], vm_offset_t VAR_4, vm_page_t VAR_5[],
    vm_offset_t VAR_6, int VAR_7)
{
 char *VAR_8, *VAR_9;
 vm_page_t VAR_10, VAR_11;
 vm_offset_t VAR_12, VAR_13;
 vm_paddr_t VAR_14, VAR_15;
 int VAR_16;

 while (VAR_7 > 0) {
  VAR_12 = VAR_4 & VAR_0;
  VAR_16 = FUNC_4(VAR_7, VAR_2 - VAR_12);
  VAR_10 = VAR_3[VAR_4 >> VAR_1];
  VAR_14 = FUNC_2(VAR_10);
  VAR_13 = VAR_6 & VAR_0;
  VAR_16 = FUNC_4(VAR_16, VAR_2 - VAR_13);
  VAR_11 = VAR_5[VAR_6 >> VAR_1];
  VAR_15 = FUNC_2(VAR_11);
  if (FUNC_0(VAR_14) &&
      FUNC_0(VAR_15)) {
   FUNC_7(VAR_10);
   FUNC_6(
       FUNC_1(VAR_15), VAR_2);
   VAR_8 = (char *)FUNC_1(VAR_14) +
       VAR_12;
   VAR_9 = (char *)FUNC_1(VAR_15) +
       VAR_13;
   FUNC_3(VAR_8, VAR_9, VAR_16);
   FUNC_5((vm_offset_t)VAR_9, VAR_16);
  } else {
   VAR_8 = (char *)FUNC_8(VAR_14, VAR_15);
   VAR_9 = (char *)VAR_8 + VAR_2;
   VAR_8 += VAR_12;
   VAR_9 += VAR_13;
   FUNC_3(VAR_8, VAR_9, VAR_16);
   FUNC_5((vm_offset_t)VAR_9, VAR_16);
   FUNC_9();
  }
  VAR_4 += VAR_16;
  VAR_6 += VAR_16;
  VAR_7 -= VAR_16;
 }
}
