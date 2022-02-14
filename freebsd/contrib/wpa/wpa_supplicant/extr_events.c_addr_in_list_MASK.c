
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int const*,int const*) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_1, const u8 *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  const u8 *VAR_5 = VAR_2 + VAR_4 * VAR_0 * 2;
  const u8 *VAR_6 = VAR_5 + VAR_0;

  if (FUNC_0(VAR_5, VAR_1, VAR_6))
   return 1;
 }
 return 0;
}
