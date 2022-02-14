
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;



__attribute__((used)) static u_int32_t
FUNC_0(u_int32_t VAR_0)
{
 u_int32_t VAR_1;

 if (VAR_0 < 2)
  VAR_0 = 2;
 VAR_1 = 0;
 while (VAR_0 >> VAR_1)
  VAR_1++;
 VAR_1 = 1 << (VAR_1 - 1);
 while (VAR_1 < VAR_0)
  VAR_1 <<= 1;
 return VAR_1;
}
