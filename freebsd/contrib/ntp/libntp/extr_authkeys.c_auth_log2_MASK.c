
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


 int VAR_0 ;

__attribute__((used)) static u_short
FUNC_0(size_t VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 size_t VAR_4 = ~(size_t)0;

 for (VAR_2 = sizeof(size_t) / 2 * VAR_0; VAR_2 != 0; VAR_2 >>= 1) {
  VAR_4 <<= VAR_2;
  if (VAR_1 & VAR_4)
   VAR_3 += VAR_2;
  else
   VAR_1 <<= VAR_2;
 }
 return (u_short)VAR_3;
}
