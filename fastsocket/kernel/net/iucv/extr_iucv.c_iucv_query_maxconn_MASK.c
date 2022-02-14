
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iucv_param {int dummy; } iucv_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(void)
{
 register unsigned long VAR_6 asm ("0");
 register unsigned long VAR_7 asm ("1");
 void *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(sizeof(union iucv_param), VAR_3|VAR_2);
 if (!VAR_8)
  return -VAR_0;
 VAR_6 = VAR_4;
 VAR_7 = (unsigned long) VAR_8;
 asm volatile (
  "	.long	0xb2f01000\n"
  "	ipm	%0\n"
  "	srl	%0,28\n"
  : "=d" (VAR_9), "+d" (VAR_6), "+d" (VAR_7) : : "cc");
 if (VAR_9 == 0)
  VAR_5 = VAR_7;
 FUNC_0(VAR_8);
 return VAR_9 ? -VAR_1 : 0;
}
