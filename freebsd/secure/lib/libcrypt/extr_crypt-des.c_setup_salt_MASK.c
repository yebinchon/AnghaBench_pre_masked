
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(u_int32_t VAR_2)
{
 u_int32_t VAR_3, VAR_4;
 int VAR_5;

 if (VAR_2 == VAR_0)
  return;
 VAR_0 = VAR_2;

 VAR_1 = 0L;
 VAR_4 = 1;
 VAR_3 = 0x800000;
 for (VAR_5 = 0; VAR_5 < 24; VAR_5++) {
  if (VAR_2 & VAR_4)
   VAR_1 |= VAR_3;
  VAR_4 <<= 1;
  VAR_3 >>= 1;
 }
}
