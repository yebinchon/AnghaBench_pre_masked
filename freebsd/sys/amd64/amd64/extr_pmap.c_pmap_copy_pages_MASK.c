
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef size_t vm_offset_t ;
typedef int boolean_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *,size_t*,int,int ) ;
 int FUNC_4 (int *,size_t*,int,int ) ;

void
FUNC_5(vm_page_t VAR_4[], vm_offset_t VAR_5, vm_page_t VAR_6[],
    vm_offset_t VAR_7, int VAR_8)
{
 void *VAR_9, *VAR_10;
 vm_page_t VAR_11[2];
 vm_offset_t VAR_12[2], VAR_13, VAR_14;
 int VAR_15;
 boolean_t VAR_16;

 while (VAR_8 > 0) {
  VAR_13 = VAR_5 & VAR_1;
  VAR_11[0] = VAR_4[VAR_5 >> VAR_2];
  VAR_14 = VAR_7 & VAR_1;
  VAR_11[1] = VAR_6[VAR_7 >> VAR_2];
  VAR_15 = FUNC_2(VAR_8, VAR_3 - VAR_13);
  VAR_15 = FUNC_2(VAR_15, VAR_3 - VAR_14);
  VAR_16 = FUNC_3(VAR_11, VAR_12, 2, VAR_0);
  VAR_9 = (char *)VAR_12[0] + VAR_13;
  VAR_10 = (char *)VAR_12[1] + VAR_14;
  FUNC_1(VAR_9, VAR_10, VAR_15);
  if (FUNC_0(VAR_16))
   FUNC_4(VAR_11, VAR_12, 2, VAR_0);
  VAR_5 += VAR_15;
  VAR_7 += VAR_15;
  VAR_8 -= VAR_15;
 }
}
