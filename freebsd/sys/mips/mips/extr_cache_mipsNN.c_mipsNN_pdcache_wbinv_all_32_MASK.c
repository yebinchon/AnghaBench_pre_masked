
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;

void
FUNC_2(void)
{
 vm_offset_t VAR_4, VAR_5;

 VAR_4 = FUNC_0(0);
 VAR_5 = VAR_4 + VAR_3;






 while (VAR_4 < VAR_5) {
  FUNC_1(VAR_4,
      VAR_1|VAR_0);
  VAR_4 += (32 * 32);
 }

 VAR_2;
}
