
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fp_except_t ;
typedef int fp_except ;


 int VAR_0 ;

fp_except_t
FUNC_0(fp_except_t VAR_1)
{
 fp_except VAR_2, VAR_3;

 __asm __volatile("vmrs %0, fpscr" : "=&r"(VAR_2));
 VAR_1 = (VAR_1 & VAR_0) << 8;
 VAR_3 = (VAR_2 & ~(VAR_0 << 8)) | VAR_1;
 __asm __volatile("vmsr fpscr, %0" : : "r"(VAR_3));

 return ((VAR_2 >> 8) & VAR_0);
}
