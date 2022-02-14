
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef size_t u_int32_t ;


 int FUNC_0 (size_t,int const) ;
 size_t FUNC_1 (size_t) ;

u_int32_t
FUNC_2(const void *VAR_0, u_int32_t VAR_1)
{
 u_int32_t VAR_2, VAR_3;
 u_int8_t VAR_4, VAR_5, VAR_6, VAR_7;
 const u_int8_t *VAR_8 = (const u_int8_t *)VAR_0;

 VAR_3 = ~0;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(VAR_3, VAR_8[VAR_2]);
 VAR_3 = ~VAR_3;
 VAR_4 = VAR_3 & 0xff;
 VAR_5 = (VAR_3>>8) & 0xff;
 VAR_6 = (VAR_3>>16) & 0xff;
 VAR_7 = (VAR_3>>24) & 0xff;
 VAR_3 = ((VAR_4 << 24) | (VAR_5 << 16) | (VAR_6 << 8) | VAR_7);
 return FUNC_1(VAR_3);
}
