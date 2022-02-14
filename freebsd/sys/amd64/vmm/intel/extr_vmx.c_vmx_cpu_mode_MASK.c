
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum vm_cpu_mode { ____Placeholder_vm_cpu_mode } vm_cpu_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static enum vm_cpu_mode
FUNC_1(void)
{
 uint32_t VAR_9;

 if (FUNC_0(VAR_8) & VAR_5) {
  VAR_9 = FUNC_0(VAR_7);
  if (VAR_9 & 0x2000)
   return (VAR_0);
  else
   return (VAR_1);
 } else if (FUNC_0(VAR_6) & VAR_4) {
  return (VAR_2);
 } else {
  return (VAR_3);
 }
}
