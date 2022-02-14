
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (int const*,int const*,size_t) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_0, const u8 *VAR_1,
         size_t VAR_2)
{
 const u8 *VAR_3, *VAR_4;
 u8 VAR_5;

 if (VAR_0 == ((void*)0))
  return 0;

 VAR_3 = VAR_0 + 2;
 VAR_4 = VAR_0 + 2 + VAR_0[1];







 if (VAR_4 - VAR_3 < 2)
  return 0;

 VAR_3++;
 VAR_5 = *VAR_3++;
 if ((VAR_5 & 0x0f) + (VAR_5 >> 4) > VAR_4 - VAR_3)
  return 0;

 if ((VAR_5 & 0x0f) == VAR_2 && FUNC_0(VAR_3, VAR_1, VAR_2) == 0)
  return 1;
 VAR_3 += VAR_5 & 0x0f;

 if ((VAR_5 >> 4) == VAR_2 && FUNC_0(VAR_3, VAR_1, VAR_2) == 0)
  return 1;
 VAR_3 += VAR_5 >> 4;

 if (VAR_3 < VAR_4 && (size_t) (VAR_4 - VAR_3) == VAR_2 &&
     FUNC_0(VAR_3, VAR_1, VAR_2) == 0)
  return 1;

 return 0;
}
