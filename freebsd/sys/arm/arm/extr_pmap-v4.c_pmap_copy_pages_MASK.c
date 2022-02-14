
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef size_t vm_offset_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ,size_t,int ,size_t,int) ;

void
FUNC_5(vm_page_t VAR_3[], vm_offset_t VAR_4, vm_page_t VAR_5[],
    vm_offset_t VAR_6, int VAR_7)
{
 vm_page_t VAR_8, VAR_9;
 vm_offset_t VAR_10, VAR_11;
 int VAR_12;

 FUNC_1();
 FUNC_2();
 while (VAR_7 > 0) {
  VAR_8 = VAR_3[VAR_4 >> VAR_1];
  VAR_10 = VAR_4 & VAR_0;
  VAR_12 = FUNC_3(VAR_7, VAR_2 - VAR_10);
  VAR_9 = VAR_5[VAR_6 >> VAR_1];
  VAR_11 = VAR_6 & VAR_0;
  VAR_12 = FUNC_3(VAR_12, VAR_2 - VAR_11);
  FUNC_4(FUNC_0(VAR_8), VAR_10,
      FUNC_0(VAR_9), VAR_11, VAR_12);
  VAR_7 -= VAR_12;
  VAR_4 += VAR_12;
  VAR_6 += VAR_12;
 }
}
