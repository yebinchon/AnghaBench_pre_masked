
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int ;



__attribute__((used)) static u_int32_t
FUNC_0(u_int32_t VAR_0, u_int VAR_1)
{
 int VAR_2;
 u_int32_t VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {


  VAR_3 = VAR_0 & 0x80080125;
  VAR_3 ^= VAR_3 >> 16;
  VAR_3 ^= VAR_3 >> 8;
  VAR_3 ^= VAR_3 >> 4;
  VAR_3 ^= VAR_3 >> 2;
  VAR_3 ^= VAR_3 >> 1;

  VAR_0 = (VAR_3 & 1) ^ (VAR_0 << 1);
 }

 return VAR_0;
}
