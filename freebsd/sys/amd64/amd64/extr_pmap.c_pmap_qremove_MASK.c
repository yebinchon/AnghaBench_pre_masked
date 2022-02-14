
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(vm_offset_t VAR_3, int VAR_4)
{
 vm_offset_t VAR_5;

 VAR_5 = VAR_3;
 while (VAR_4-- > 0) {
  FUNC_0(VAR_5 >= VAR_1, ("usermode va %lx", VAR_5));
  FUNC_2(VAR_5);
  VAR_5 += VAR_0;
 }
 FUNC_1(VAR_2, VAR_3, VAR_5);
}
