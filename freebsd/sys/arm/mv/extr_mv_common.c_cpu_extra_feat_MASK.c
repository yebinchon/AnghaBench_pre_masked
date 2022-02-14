
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int*) ;

uint32_t
FUNC_2(void)
{
 uint32_t VAR_1, VAR_2;
 uint32_t VAR_3 = 0;

 FUNC_1(&VAR_1, &VAR_2);

 switch (VAR_1) {
 case 132:
 case 131:
 case 130:
 case 128:
 case 129:
  __asm __volatile("mrc p15, 1, %0, c15, c1, 0" : "=r" (VAR_3));
  break;
 case 134:
 case 133:
  __asm __volatile("mrc p15, 0, %0, c14, c0, 0" : "=r" (VAR_3));
  break;
 default:
  if (VAR_0)
   FUNC_0("This ARM Core does not support any extra features\n");
 }

 return (VAR_3);
}
