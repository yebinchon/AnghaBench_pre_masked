
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fp_except_t ;


 int FUNC_0 (unsigned int) ;

fp_except_t
FUNC_1()
{
 unsigned int VAR_0;

 __asm__("st %%fsr,%0" : "=m" (VAR_0));
 return (FUNC_0(VAR_0));
}
