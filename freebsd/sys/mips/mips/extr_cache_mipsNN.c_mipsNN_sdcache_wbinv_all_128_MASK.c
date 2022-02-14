
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;

void
FUNC_2(void)
{
 vm_offset_t VAR_3 = FUNC_0(0);
 vm_offset_t VAR_4 = VAR_3 + VAR_2;

 while (VAR_3 < VAR_4) {
  FUNC_1(VAR_3,
      VAR_1|VAR_0);
  VAR_3 += (32 * 128);
 }
}
