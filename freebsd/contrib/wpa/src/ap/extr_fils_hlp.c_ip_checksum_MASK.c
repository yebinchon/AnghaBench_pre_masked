
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int be16 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const) ;

__attribute__((used)) static be16 FUNC_2(const void *VAR_0, size_t VAR_1)
{
 u32 VAR_2 = 0;
 const u16 *VAR_3;

 for (VAR_3 = VAR_0; VAR_1 >= 2; VAR_1 -= 2)
  VAR_2 += FUNC_1(*VAR_3++);
 if (VAR_1)
  VAR_2 += FUNC_1(*VAR_3 << 8);

 VAR_2 = (VAR_2 >> 16) + (VAR_2 & 0xffff);
 VAR_2 += VAR_2 >> 16;
 return FUNC_0(~VAR_2);
}
