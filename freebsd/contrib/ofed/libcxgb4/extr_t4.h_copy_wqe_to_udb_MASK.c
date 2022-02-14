
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(volatile u32 *VAR_0, void *VAR_1)
{
 u64 *VAR_2, *VAR_3;
 int VAR_4 = 4;

 VAR_2 = (u64 *)VAR_1;
 VAR_3 = (u64 *)VAR_0;

 while (VAR_4) {
  *VAR_3++ = *VAR_2++;
  *VAR_3++ = *VAR_2++;
  VAR_4--;
 }
}
