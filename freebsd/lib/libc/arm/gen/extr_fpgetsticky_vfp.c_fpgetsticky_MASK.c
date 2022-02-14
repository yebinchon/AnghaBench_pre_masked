
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fp_except ;


 int VAR_0 ;

fp_except
FUNC_0(void)
{
 fp_except VAR_1;

 __asm __volatile("vmrs %0, fpscr" : "=&r"(VAR_1));

 return (VAR_1 & VAR_0);
}
