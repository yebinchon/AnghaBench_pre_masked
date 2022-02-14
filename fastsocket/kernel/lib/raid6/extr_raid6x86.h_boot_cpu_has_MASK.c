
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline int FUNC_0(int VAR_0)
{
 u32 VAR_1 = (VAR_0 & 0x20) ? 0x80000001 : 1;
 u32 VAR_2, VAR_3;

 asm volatile("cpuid"
       : "+a" (VAR_1), "=d" (VAR_3), "=c" (VAR_2)
       : : "ebx");

 return ((VAR_0 & 0x80 ? VAR_2 : VAR_3) >> (VAR_0 & 31)) & 1;
}
