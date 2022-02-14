
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void *
FUNC_4(vm_paddr_t VAR_3, int VAR_4, vm_offset_t VAR_5)
{
 vm_offset_t VAR_6, VAR_7;
 void *VAR_8;

 VAR_7 = VAR_3 & VAR_0;
 VAR_5 = FUNC_3(VAR_5 + VAR_7);
 VAR_3 = VAR_3 & VAR_2;
 VAR_6 = (vm_offset_t)FUNC_2(VAR_3, VAR_4) +
     (VAR_4 * VAR_1);
 VAR_8 = (void *)(VAR_6 + VAR_7);
 VAR_5 -= VAR_1;
 while (VAR_5 > 0) {
  VAR_6 += VAR_1;
  VAR_3 += VAR_1;
  VAR_5 -= VAR_1;
  FUNC_1(VAR_6, VAR_3);
  FUNC_0(VAR_6);
 }
 return (VAR_8);
}
