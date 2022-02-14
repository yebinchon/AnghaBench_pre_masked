
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;






 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(void)
{
 uint64_t VAR_2;




 __asm __volatile("csrr %0, fcsr" : "=r" (VAR_2));


 switch (VAR_2 & VAR_0) {
 case 129:
  return (0);
 case 130:
  return (1);
 case 128:
  return (2);
 case 131:
  return (3);
 }

 return (-1);
}
