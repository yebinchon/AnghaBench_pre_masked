
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int* VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1, int VAR_2)
{
 u_int VAR_3, VAR_4;

 VAR_3 = *(int *)VAR_1;
 VAR_4 = VAR_3 & 0xffff;
 VAR_3 >>= 16;
 if (!VAR_2)
  VAR_4 ^= 0xc;
 VAR_0[VAR_4 / 2] = VAR_3;
}
