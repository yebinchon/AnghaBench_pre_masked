
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int platform_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(platform_t VAR_1)
{
 vm_paddr_t VAR_2;






 __asm __volatile("mrc p15, 4, %0, c15, c0, 0" : "=r" (VAR_2));
 VAR_2 = (VAR_2 << 13) & 0xff000000;
 if (VAR_2 != 0)
  VAR_0 = VAR_2;

 FUNC_0(VAR_1);

 return (0);
}
