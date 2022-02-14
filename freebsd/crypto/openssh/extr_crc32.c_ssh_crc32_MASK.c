
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
typedef size_t u_char ;


 size_t* VAR_0 ;

u_int32_t
FUNC_0(const u_char *VAR_1, u_int32_t VAR_2)
{
 u_int32_t VAR_3, VAR_4;

 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_4 = VAR_0[(VAR_4 ^ VAR_1[VAR_3]) & 0xff] ^ (VAR_4 >> 8);
 return VAR_4;
}
