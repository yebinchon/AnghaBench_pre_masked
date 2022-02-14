
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int fp_except_t ;


 int VAR_0 ;

fp_except_t
FUNC_0(fp_except_t VAR_1)
{
 uint64_t VAR_2, VAR_3;

 VAR_1 &= VAR_0;


 __asm __volatile("mrs %0, fpcr" : "=&r"(VAR_2));
 VAR_3 = VAR_2 & ~VAR_0;
 VAR_3 |= VAR_1;
 __asm __volatile("msr fpcr, %0" :: "r"(VAR_3));

 return ((fp_except_t)VAR_2);
}
