
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;


 unsigned int const FUNC_0 (unsigned int) ;

int FUNC_1(const u8 *VAR_0, unsigned int VAR_1)
{
 if (!VAR_0 || VAR_0[1] <= VAR_1 / 8)
  return 0;
 return !!(VAR_0[2 + VAR_1 / 8] & FUNC_0(VAR_1 % 8));
}
