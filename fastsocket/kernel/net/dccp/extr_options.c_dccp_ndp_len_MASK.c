
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int const VAR_0 ;
 int const VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline u8 FUNC_1(const u64 VAR_2)
{
 if (FUNC_0(VAR_2 <= 0xFF))
  return 1;
 return FUNC_0(VAR_2 <= VAR_1) ? 2 : (VAR_2 <= VAR_0 ? 4 : 6);
}
