
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, vm_offset_t VAR_3)
{
 vm_offset_t VAR_4, VAR_5;

 VAR_4 = (vm_offset_t)VAR_2;
 VAR_5 = VAR_4 & VAR_0;
 VAR_3 = FUNC_2(VAR_3 + VAR_5);
 VAR_4 &= ~VAR_0;
 while (VAR_3 > 0) {
  FUNC_1(VAR_4);
  FUNC_0(VAR_4);
  VAR_4 += VAR_1;
  VAR_3 -= VAR_1;
 }
}
